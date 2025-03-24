#pragma once

#include "CoreMinimal.h"
#include "InventoryItemData.generated.h"

//Forward Declarations
class AItemPickupBase;

UENUM(BlueprintType)
enum EInventoryItemType: uint8
{
	Consumable,
	Weapon,
	Armor,
	Custom
};

USTRUCT(BlueprintType)
struct INVENTORYSYSTEM_API FInventoryItemData : public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Inventory System|Item Data")
	FName DisplayName;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Inventory System|Item Data")
	FString Description;

	EInventoryItemType ItemType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Inventory System|Item Data")
	bool Stackable = true;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Inventory System|Item Data", meta = (EditCondition = Stackable))
	int MaxStackQuantity = 1;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Inventory System|Item Data")
	TSoftObjectPtr<UTexture2D> PreviewImage;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Inventory System|Item Data")
	TSoftObjectPtr<UStaticMesh> Mesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Inventory System|Item Data")
	TSubclassOf<AItemPickupBase> ItemPickup;
	
	bool operator==(const FInventoryItemData& ItemToCompare) const;
};
