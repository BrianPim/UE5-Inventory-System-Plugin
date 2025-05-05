//Copyright (c) 2025 Brian Pimentel

#include "InventoryItem.h"

void UInventoryItem::InstantiateItemData(FInventoryItemData NewItemData)
{
	ItemData = NewItemData;
}

FInventoryItemData UInventoryItem::GetItemData()
{
	return ItemData;
}

int UInventoryItem::GetQuantity()
{
	return Quantity;
}

void UInventoryItem::SetQuantity(int NewQuantity)
{
	if (NewQuantity <= 0)
	{
		ConditionalBeginDestroy();
		return;
	}
	
	Quantity = NewQuantity;
	Quantity = FMath::Clamp(Quantity, 0, ItemData.MaxStackQuantity);
}