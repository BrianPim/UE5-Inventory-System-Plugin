// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerInventoryBase.h"
#include "InventoryItem.h"
#include "InventoryItemData.h"
#include "ItemPickupBase.h"
#include "LogInventorySystem.h"

UPlayerInventoryBase::UPlayerInventoryBase()
{
	PrimaryComponentTick.bCanEverTick = true;

	InventoryArray.Init(nullptr, NumberOfRows * InventoryRowSize);
	SelectIndexHotkeyArray.Init(nullptr, InventoryRowSize);
}

void UPlayerInventoryBase::BeginPlay()
{
	Super::BeginPlay();
	
	OnInventoryInitialized.Broadcast();
}

void UPlayerInventoryBase::TickComponent(float DeltaTime, ELevelTick TickType,
                                     FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

//Blank function that broadcasts a delegate, which should be accessed elsewhere to define item use functionality
void UPlayerInventoryBase::UseItem(UInputAction* InputAction)
{
	OnInventoryItemUsed.Broadcast(InputAction, HotbarSelectedIndex);
}

int UPlayerInventoryBase::TryAddItem(FInventoryItemData ItemToAdd, int Quantity)
{
	if (Quantity <= 0)
	{
		UE_LOG(LogInventorySystem, Warning,
				   TEXT("Couldn't add more %s because Quantity %i is not a valid input!"),
				   *ItemToAdd.DisplayName.ToString(), Quantity);

		return Quantity;
	}
	
	int QuantityRemaining = Quantity;

	//First iteration attempting to add quantity to existing items of the requested data type (If stackable = true)
	if (ItemToAdd.Stackable)
	{
		for (int i = 0; i < InventoryArray.Num(); i++)
		{
			if (InventoryArray[i] != nullptr && InventoryArray[i]->GetItemData() == ItemToAdd)
			{
				int AbleToAdd = InventoryArray[i]->GetItemData().MaxStackQuantity - InventoryArray[i]->GetQuantity();
			
				if (AbleToAdd < QuantityRemaining)
				{
					QuantityRemaining -= AbleToAdd;

					InventoryArray[i]->SetQuantity(InventoryArray[i]->GetItemData().MaxStackQuantity);
					OnInventoryItemAtIndexUpdated.Broadcast(i);
				}
				else
				{
					InventoryArray[i]->SetQuantity(InventoryArray[i]->GetQuantity() + QuantityRemaining);
					OnInventoryItemAtIndexUpdated.Broadcast(i);
					return 0;
				}
			}
		}
	}

	//Second iteration attempting to create new item objects to handle the rest of the added quantity
	for (int i = 0; i < InventoryArray.Num(); i++)
	{
		if (InventoryArray[i] == nullptr)
		{
			InventoryArray[i] = NewObject<UInventoryItem>();
			InventoryArray[i]->InstantiateItemData(ItemToAdd);
			
			int AbleToAdd = InventoryArray[i]->GetItemData().MaxStackQuantity - InventoryArray[i]->GetQuantity();
			
			if (AbleToAdd < QuantityRemaining)
			{
				QuantityRemaining -= AbleToAdd;

				InventoryArray[i]->SetQuantity(InventoryArray[i]->GetItemData().MaxStackQuantity);
				
				OnInventoryItemAtIndexUpdated.Broadcast(i);
			}
			else
			{
				InventoryArray[i]->SetQuantity(QuantityRemaining);
				OnInventoryItemAtIndexUpdated.Broadcast(i);
				return 0;
			}
		}
	}

	UE_LOG(LogInventorySystem, Warning,
				   TEXT("Couldn't add more %s because the Player's inventory is full! Added %i out of %i requested."),
				   *ItemToAdd.DisplayName.ToString(), Quantity - QuantityRemaining, Quantity);

	return QuantityRemaining;
}

int UPlayerInventoryBase::TryRemoveItem(FInventoryItemData ItemToRemove, int Quantity)
{
	if (Quantity <= 0)
	{
		UE_LOG(LogInventorySystem, Warning,
				   TEXT("Couldn't add more %s because Quantity %i is not a valid input!"),
				   *ItemToRemove.DisplayName.ToString(), Quantity);

		return Quantity;
	}
	
	int QuantityRemaining = Quantity;
	
	//Iterating from the end to the beginning because we want to remove items towards the end of
	//the player's inventory first
	for (int i = InventoryArray.Num() - 1; i >= 0 ; i--)
	{
		if (InventoryArray[i] != nullptr && InventoryArray[i]->GetItemData() == ItemToRemove)
		{
			if (InventoryArray[i]->GetQuantity() < QuantityRemaining)
			{
				QuantityRemaining -= InventoryArray[i]->GetQuantity();

				RemoveAllAtIndex(i);
			}
			else
			{
				InventoryArray[i]->SetQuantity(QuantityRemaining);
				OnInventoryItemAtIndexUpdated.Broadcast(i);
				return QuantityRemaining;
			}
		}
	}
	
	UE_LOG(LogInventorySystem, Warning,
				   TEXT("Not enough %s in the Player's inventory to remove! Removed %i out of %i requested."),
				   *ItemToRemove.DisplayName.ToString(), Quantity - QuantityRemaining, Quantity);

	return QuantityRemaining;
}

bool UPlayerInventoryBase::IsValidPickupTarget(FInventoryItemData Item)
{
	for (int i = 0; i < InventoryArray.Num(); i++)
	{
		if (InventoryArray[i] == nullptr || (InventoryArray[i]->GetItemData() == Item &&
			InventoryArray[i]->GetQuantity() < InventoryArray[i]->GetItemData().MaxStackQuantity))
		{
			return true;
		}
	}

	return false;
}

void UPlayerInventoryBase::DropItemAtIndex(int Index, int Quantity)
{
	TObjectPtr<AActor> Owner =  GetOwner();
	FVector Location = Owner->GetActorLocation();
	FVector NormalizedForwardVector = Owner->GetActorForwardVector().GetSafeNormal();
	
	FVector NewLocation = Location + NormalizedForwardVector * DropItemInitialDistance;

	DropItemAtIndexAtLocation(Index, Quantity, NewLocation);
}

void UPlayerInventoryBase::DropItemAtIndexAtLocation(int Index, int Quantity, FVector Location)
{
	if (InventoryArray[Index] == nullptr)
	{
		UE_LOG(LogInventorySystem, Warning, TEXT("Unable to drop item at index %i because there's no item assigned there!"), Index)
		return;
	}
	
	FActorSpawnParameters DroppedItemSpawnParams;
	DroppedItemSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	FTransform SpawnTransform = FTransform(FRotator::ZeroRotator, Location);
	
	TObjectPtr<AItemPickupBase> DroppedItem = GetWorld()->SpawnActor<AItemPickupBase>(InventoryArray[Index]->GetItemData().ItemPickup, SpawnTransform, DroppedItemSpawnParams);
	DroppedItem->InstantiateItemData(InventoryArray[Index]->GetItemData());
	DroppedItem->SetQuantity(Quantity);

	FVector NormalizedDirection = GetOwner()->GetActorForwardVector().GetSafeNormal();
	DroppedItem->GetMesh()->AddImpulse(NormalizedDirection * DropItemImpulseModifier * 1000.0f);

	RemoveAtIndex(Index, Quantity);
}

void UPlayerInventoryBase::RemoveAtIndex(int Index, int Quantity)
{
	if (InventoryArray[Index] == nullptr)
	{
		UE_LOG(LogInventorySystem, Warning, TEXT("Unable to remove %i at index %i because there's no item assigned there!"), Quantity, Index)
		return;
	}
	
	int Difference = InventoryArray[Index]->GetQuantity() - Quantity;
	
	InventoryArray[Index]->SetQuantity(Difference);

	if (Difference <= 0)
	{
		InventoryArray[Index] = nullptr;
	}

	OnInventoryItemAtIndexUpdated.Broadcast(Index);
}

void UPlayerInventoryBase::RemoveAllAtIndex(int Index)
{
	if (InventoryArray[Index] == nullptr)
	{
		UE_LOG(LogInventorySystem, Warning, TEXT("Unable to remove all at index %i because there's no item assigned there!"), Index)
		return;
	}
	
	InventoryArray[Index]->SetQuantity(0);
	InventoryArray[Index] = nullptr;

	OnInventoryItemAtIndexUpdated.Broadcast(Index);
}

void UPlayerInventoryBase::RemoveAllOfItem(FInventoryItemData ItemToRemove)
{
	for (int i = 0; i < InventoryArray.Num(); i++)
	{
		if (InventoryArray[i]->GetItemData() == ItemToRemove)
		{
			RemoveAllAtIndex(i);
		}
	}
}

void UPlayerInventoryBase::SwitchItemsAtIndices(int FirstIndex, int SecondIndex)
{
	TObjectPtr<UInventoryItem> CurrentItem = InventoryArray[FirstIndex];
	InventoryArray[FirstIndex] = InventoryArray[SecondIndex];
	InventoryArray[SecondIndex] = CurrentItem;

	OnInventoryItemAtIndexUpdated.Broadcast(FirstIndex);
	OnInventoryItemAtIndexUpdated.Broadcast(SecondIndex);
}

int UPlayerInventoryBase::GetTotalQuantityOfItem(FInventoryItemData Item)
{
	int Quantity = 0;

	for (int i = 0; i < InventoryArray.Num(); i++)
	{
		if (InventoryArray[i]->GetItemData() == Item)
		{
			Quantity += InventoryArray[i]->GetQuantity();
		}
	}

	return Quantity;
}

UInventoryItem* UPlayerInventoryBase::GetItemAtIndex(int Index)
{
	return InventoryArray[Index];
}

void UPlayerInventoryBase::SelectNextHotbarItem()
{
	SetHotbarSelectedIndex(HotbarSelectedIndex + 1);
}

void UPlayerInventoryBase::SelectPreviousHotbarItem()
{
	SetHotbarSelectedIndex(HotbarSelectedIndex - 1);
}

int UPlayerInventoryBase::GetHotbarSelectedIndex()
{
	return HotbarSelectedIndex;
}

void UPlayerInventoryBase::SetHotbarSelectedIndex(int NewIndex)
{
	int OldIndex = HotbarSelectedIndex;
	HotbarSelectedIndex = NewIndex;

	if (HotbarSelectedIndex >= InventoryRowSize - 1)
	{
		HotbarSelectedIndex = 0;
	}
	else if (HotbarSelectedIndex < 0)
	{
		HotbarSelectedIndex = InventoryRowSize - 1;
	}
	
	OnInventoryItemAtIndexUpdated.Broadcast(OldIndex);
	OnInventoryItemAtIndexUpdated.Broadcast(HotbarSelectedIndex);
}