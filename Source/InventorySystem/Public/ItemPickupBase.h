// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryItemData.h"
#include "GameFramework/Actor.h"
#include "ItemPickupBase.generated.h"

//Forward Declarations
class UPlayerInventoryBase;
class USphereComponent;

UCLASS(Abstract)
class INVENTORYSYSTEM_API AItemPickupBase : public AActor
{
public:
	AItemPickupBase();

	virtual void Tick(float DeltaTime) override;

	void InstantiateItemData(FInventoryItemData NewItemData);

	UFUNCTION(BlueprintPure, Category = "Inventory System|Item Pickup")
	FInventoryItemData GetItemData();

	UFUNCTION(BlueprintPure, Category = "Inventory System|Item Pickup")
	int GetQuantity();

	UFUNCTION(BlueprintCallable, Category = "Inventory System|Item Pickup")
	void SetQuantity(int NewQuantity);

	UFUNCTION(BlueprintPure, Category = "Inventory System|Item Pickup")
	UStaticMeshComponent* GetMesh();

protected:
	virtual void BeginPlay() override;

private:
	static constexpr float BaseTimeUntilEnabled = 3.0f;
	static constexpr float BasePickUpMagnetismIntensity = 30.0f;
	
	UFUNCTION()
	void OnOverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
						int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	void EnablePickUp();
	
	UPROPERTY(EditDefaultsOnly, Category = "Item Pickup|Item Data")
	FDataTableRowHandle ItemDataRow;

	UPROPERTY(BlueprintReadOnly, Category = "Item Pickup|Item Data", meta = (AllowPrivateAccess = true))
	FInventoryItemData ItemData;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item Pickup|Item Data", meta = (AllowPrivateAccess = true))
	int Quantity;

	//NOTE: Will automatically take the default mesh from the assigned Item Data if no static mesh is added to the component
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Pickup|Functionality", meta = (AllowPrivateAccess = true))
	TObjectPtr<UStaticMeshComponent> ItemMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Pickup|Functionality", meta = (AllowPrivateAccess = true))
	TObjectPtr<USphereComponent> SphereComponent;

	//Actors are unable to pick up the item until after this duration ends. Timer starts on item instantiation.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item Pickup|Functionality", meta = (AllowPrivateAccess = true))
	float TimeUntilEnabled = BaseTimeUntilEnabled;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item Pickup|Functionality", meta = (AllowPrivateAccess = true))
	float PickUpMagnetismIntensity = BasePickUpMagnetismIntensity;

	UPROPERTY()
	TObjectPtr<UPlayerInventoryBase> InventoryToAddTo = nullptr;
	
	bool PickUpEnabled = false;
	FTimerHandle EnablePickUpTimerHandle;
	
	GENERATED_BODY()
};
