// Fill out your copyright notice in the Description page of Project Settings.

#include "ItemPickupBase.h"
#include "PlayerInventoryBase.h"
#include "InventoryItemData.h"
#include "LogInventorySystem.h"
#include "Components/SphereComponent.h"

// Sets default values
AItemPickupBase::AItemPickupBase()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickInterval = 0.2f;

	SetHidden(false);

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Item Mesh"));
	ItemMesh->SetCollisionProfileName(FName("OverlapPawnOnly"));
	ItemMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	ItemMesh->SetSimulatePhysics(true);
	ItemMesh->SetStaticMesh(ItemData.Mesh.Get());
	RootComponent = ItemMesh;
	
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Component"));
	SphereComponent->SetCollisionProfileName(FName("OverlapAllDynamic"));
	SphereComponent->SetSphereRadius(150.0f);
	SphereComponent->SetupAttachment(ItemMesh);
}

// Called when the game starts or when spawned
void AItemPickupBase::BeginPlay()
{
	Super::BeginPlay();

	ItemMesh->OnComponentBeginOverlap.AddDynamic(this, &AItemPickupBase::OnOverlapStart);
	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AItemPickupBase::OnOverlapStart);

	checkf(&ItemDataRow, TEXT("No item data assigned!"));

	ItemData = *ItemDataRow.GetRow<FInventoryItemData>(TEXT("Item Data"));

	if (!ItemMesh->GetStaticMesh())
	{
		UE_LOG(LogInventorySystem, Warning, TEXT("Item Mesh is NULL! Adding Mesh from Item Data."));
		ItemMesh->SetStaticMesh(ItemData.Mesh.Get());
	}
	
	GetWorld()->GetTimerManager().SetTimer(EnablePickUpTimerHandle, this, &ThisClass::EnablePickUp,
											TimeUntilEnabled, false);
}

// Called 5 times/sec. Modifiable in the constructor.
void AItemPickupBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (InventoryToAddTo != nullptr)
	{
		if (!InventoryToAddTo->IsValidPickupTarget(ItemData))
		{
			InventoryToAddTo = nullptr;
			ItemMesh->SetPhysicsLinearVelocity(FVector::ZeroVector);
		}
		else
		{
			FVector NormalizedDirection = (InventoryToAddTo->GetOwner()->GetActorLocation() - GetActorLocation()).GetSafeNormal();
			ItemMesh->AddImpulse(NormalizedDirection * PickUpMagnetismIntensity * 1000.0f);
		}
	}
}


void AItemPickupBase::OnOverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!OtherActor) return;

	//TODO In the future could potentially merge item pickup stacks if they're placed beside each other

	if (!PickUpEnabled) return;

	if (UPlayerInventoryBase* Inventory = OtherActor->GetComponentByClass<UPlayerInventoryBase>())
	{
		if (!Inventory->IsValidPickupTarget(ItemData)) return;
		
		if (OverlappedComponent == ItemMesh && Inventory == InventoryToAddTo)
		{
			int QuantityRemaining = Inventory->TryAddItem(ItemData, Quantity);
			
			if (QuantityRemaining <= 0)
			{
				K2_DestroyActor();
			}
			else
			{
				ItemMesh->SetPhysicsLinearVelocity(FVector::ZeroVector);
				Quantity = QuantityRemaining;
				InventoryToAddTo = nullptr;
			}
		}
		else if (OverlappedComponent == SphereComponent && !InventoryToAddTo)
		{
			InventoryToAddTo = Inventory;
		}
	}
	else
	{
		UE_LOG(LogInventorySystem, Warning, TEXT("Inventory not found!"));
	}
}

void AItemPickupBase::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	FVector NormalImpulse, const FHitResult& Hit)
{
	InventoryToAddTo = nullptr;
	ItemMesh->SetPhysicsLinearVelocity(FVector::ZeroVector);
}

void AItemPickupBase::EnablePickUp()
{
	PickUpEnabled = true;
}

void AItemPickupBase::InstantiateItemData(FInventoryItemData NewItemData)
{
	ItemData = NewItemData;
}

FInventoryItemData AItemPickupBase::GetItemData()
{
	return ItemData;
}

int AItemPickupBase::GetQuantity()
{
	return Quantity;
}

void AItemPickupBase::SetQuantity(int NewQuantity)
{
	Quantity = NewQuantity;
}

UStaticMeshComponent* AItemPickupBase::GetMesh()
{
	return ItemMesh;
}


