// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerInventoryBase.generated.h"

//Forward Declarations
class AItemPickupBase;
class UInventoryItem;
class UInputAction;
struct FInventoryItemData;

//Delegate Declarations
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInventoryUpdated);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryItemAtIndexUpdated,
												int32, Index);

UCLASS(Abstract, Blueprintable, meta = (BlueprintSpawnableComponent))
class UPlayerInventoryBase : public UActorComponent
{
public:
	UPlayerInventoryBase();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
							   FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category="Inventory System|Player Inventory")
	int TryAddItem(FInventoryItemData ItemToAdd, int Quantity);
	
	UFUNCTION(BlueprintCallable, Category="Inventory System|Player Inventory")
	int TryRemoveItem(FInventoryItemData ItemToRemove, int Quantity);

	UFUNCTION(BlueprintPure, Category="Inventory System|Player Inventory")
	bool IsValidPickupTarget(FInventoryItemData Item);

	UFUNCTION(BlueprintCallable, Category="Inventory System|Player Inventory")
	void DropItemAtIndex(int Index, int Quantity);

	UFUNCTION(BlueprintCallable, Category="Inventory System|Player Inventory")
	void DropItemAtIndexAtLocation(int Index, int Quantity, FVector Location);

	UFUNCTION(BlueprintCallable, Category="Inventory System|Player Inventory")
	void RemoveAtIndex(int Index, int Quantity);

	UFUNCTION(BlueprintCallable, Category="Inventory System|Player Inventory")
	void RemoveAllAtIndex(int Index);

	UFUNCTION(BlueprintCallable, Category="Inventory System|Player Inventory")
	void RemoveAllOfItem(FInventoryItemData ItemToRemove);

	UFUNCTION(BlueprintCallable, Category="Inventory System|Player Inventory")
	void SwitchItemsAtIndices(int FirstIndex, int SecondIndex);

	UFUNCTION(BlueprintPure, Category="Inventory System|Player Inventory")
	int GetTotalQuantityOfItem(FInventoryItemData Item);

	UFUNCTION(BlueprintPure, Category="Inventory System|Player Inventory")
	UInventoryItem* GetItemAtIndex(int Index);

	UFUNCTION(BlueprintCallable, Category="Inventory System|Player Inventory")
	void SelectNextHotbarItem();

	UFUNCTION(BlueprintCallable, Category="Inventory System|Player Inventory")
	void SelectPreviousHotbarItem();
	
	UFUNCTION(BlueprintPure, Category="Inventory System|Player Inventory")
	int GetSelectedIndex();

	UFUNCTION(BlueprintCallable, Category="Inventory System|Player Inventory")
	void SetSelectedIndex(int NewIndex);

	//Delegates
	UPROPERTY(BlueprintAssignable, Category="Inventory System|Player Inventory")
	FInventoryUpdated OnInventoryInitialized;
	
	UPROPERTY(BlueprintAssignable, Category="Inventory System|Player Inventory")
	FInventoryItemAtIndexUpdated OnInventoryItemAtIndexUpdated;
	
protected:
	virtual void BeginPlay() override;

private:
	static constexpr int BaseNumberOfRows = 4;
	static constexpr int BaseRowSize = 10;
	static constexpr int BaseSelectedIndex = 0;

	static constexpr float BaseDropItemImpulseModifier = 3.0f;
	static constexpr float BaseDropItemInitialDistance = 100.0f;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Inventory System|Player Inventory", meta= (AllowPrivateAccess = true))
	TObjectPtr<UDataTable> InventoryDataTable;

	UPROPERTY()
	TArray<TObjectPtr<UInventoryItem>> InventoryArray;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Inventory System|Player Inventory", meta= (AllowPrivateAccess = true))
	int NumberOfRows = BaseNumberOfRows;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Inventory System|Player Inventory", meta= (AllowPrivateAccess = true))
	int InventoryRowSize = BaseRowSize;

	//The distance from the player where the newly dropped item is spawned.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Inventory System|Player Inventory", meta= (AllowPrivateAccess = true))
	float DropItemImpulseModifier = BaseDropItemImpulseModifier;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Inventory System|Player Inventory", meta= (AllowPrivateAccess = true))
	float DropItemInitialDistance = BaseDropItemInitialDistance;
	
	int SelectedIndex = BaseSelectedIndex;

	//For Hotbar: Input Actions for selecting an item index must be assigned here as well in order for the inventory to know how to handle them
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Inventory System|Player Inventory", meta= (AllowPrivateAccess = true))
	TArray<UInputAction*> SelectIndexInputActionArray;
	
	GENERATED_BODY()
};
