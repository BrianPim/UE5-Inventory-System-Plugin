#include "InventoryItemData.h"
#include "ItemPickupBase.h"

bool FInventoryItemData::operator==(const FInventoryItemData& ItemToCompare) const
{
	return DisplayName == ItemToCompare.DisplayName &&
			Description == ItemToCompare.Description &&
				ItemType == ItemToCompare.ItemType &&
					Stackable == ItemToCompare.Stackable &&
						MaxStackQuantity == ItemToCompare.MaxStackQuantity &&
							PreviewImage == ItemToCompare.PreviewImage &&
								Mesh == ItemToCompare.Mesh &&
									ItemPickup == ItemToCompare.ItemPickup;
}
