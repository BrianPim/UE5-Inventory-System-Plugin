//Copyright (c) 2025 Brian Pimentel

#pragma once

#include "CoreMinimal.h"
#include "InventoryItemData.h"
#include "UObject/Object.h"
#include "InventoryItem.generated.h"

//Delegate Declarations

UCLASS()
class INVENTORYSYSTEM_API UInventoryItem : public UObject
{
public:
	void InstantiateItemData(FInventoryItemData NewItemData);
	
	UFUNCTION(BlueprintCallable, Category="Inventory System|Inventory Item")
	FInventoryItemData GetItemData();
	
	UFUNCTION(BlueprintCallable, Category="Inventory System|Inventory Item")
	int GetQuantity();

	UFUNCTION(BlueprintCallable, Category="Inventory System|Inventory Item")
	void SetQuantity(int NewQuantity);
	
protected:
	
private:
	FInventoryItemData ItemData;
	int Quantity = 0;
	
	GENERATED_BODY()
};
