# UE5 Inventory System Plugin
## Version 1.0

The Inventory System Plugin has all of the core systems expected in a modern item inventory mechanic. It allows players to pick up, move, and combine stacks of items seamlessly. A rudimentary UI system is included in addition to the core utility functions. The core of the involved systems was created using C++, with the intention being that high-level programming and subclasses should be handled via blueprints. In theory, the C++ classes could be used standalone to create a totally custom inventory management experience.

**Disclaimer:** This is an ongoing project, and future additions are planned to expand on the included UI functionality. Regardless, in it's current state the plugin includes everything needed to add robust inventory management mechanics to a game!

## C++ Classes

### UPlayerInventoryBase
Extends **UActorComponent**. The core class of the Inventory System. Items are held in an array of **UInventoryItem** objects. The included utility functions allow for efficient manipulation of the inventory items.

Functions (**public**)
- **void** UseItem(UInputAction* InputAction)
- **int** GetTotalQuantityOfItem(FInventoryItemData Item)
- **UInventoryItem*** GetItemAtIndex(int Index)
- **void** SwitchItemsAtIndices(int FirstIndex, int SecondIndex) 
- **int** TryAddItem(FInventoryItemData ItemToAdd, int Quantity)
  - Returns remainder unable to be added.
- **int** TryAddToExistingItemAtIndex(int Index, int Quantity)
  - Returns remainder unable to be added.
- **int** TryRemoveItem(FInventoryItemData ItemToRemove, int Quantity);
  - Returns remainder unable to be removed.
- **void** RemoveAtIndex(int Index, int Quantity)
- **void** RemoveAllAtIndex(int Index)
- **void** RemoveAllOfItem(FInventoryItemData ItemToRemove)
- **bool** IsValidPickupTarget(FInventoryItemData Item)
- **void** DropItemAtIndex(int Index, int Quantity)
- **void** DropItemAtIndexAtLocation(int Index, int Quantity, FVector Location)
- **void** DropHeldItem();
  - Currently un-used.
- **void** SelectNextHotbarItem()
- **void** SelectPreviousHotbarItem()
- **int** GetHotbarSelectedIndex()
- **void** SetHotbarSelectedIndex(int NewIndex)
- **UInventoryItem*** GetHeldItem()
  - Currently un-used.
- **void** SetHeldItem(UInventoryItem* NewHeldItem)
  - Currently un-used.
    
Delegates (**public**)
- **FInventoryUpdated** OnInventoryInitialized
- **FInventoryItemAtIndexUpdated** OnInventoryItemAtIndexUpdated
- **FInventoryItemUsed** OnInventoryItemUsed
    
Variables (**private**)
- **TObjectPtr<UDataTable>** InventoryDataTable
  - A reference to a **UDataTable** containing all of the **FInventoryItemData** entries should be added here
- **TArray<TObjectPtr<UInventoryItem>>** InventoryArray
- **int** NumberOfRows
  - Modifiable from the Details panel.
- **int** InventoryRowSize
  - Modifiable from the Details panel.
- **float** DropItemImpulseModifier
   - The impulse/force added to the newly dropped item after being spawned. Modifiable from the Details panel.
- **float** DropItemInitialDistance
   - The distance from the player where the newly dropped item is initially spawned. Modifiable from the Details panel.
- **int** HotbarSelectedIndex
- **TObjectPtr<UInventoryItem>** HeldItem
  - Currently un-used.
- **TArray<UInputAction*>*** SelectIndexHotkeyArray
  - For Hotbar: Input Actions for selecting an item index must be assigned here as well in order for the inventory to know how to handle them. Modifiable from the Details panel.
  
### UInventoryItem
The array of items in the **UPlayerInventoryBase** class is populated by **UInventoryItem** objects. The class contains the relevant item information in the form of a **FInventoryItemData** struct object, as well as an **int** to track the Quantity of the item held in that inventory entry.

Functions (**public**)
- **void** InstantiateItemData(FInventoryItemData NewItemData)
- **FInventoryItemData** GetItemData()
- **int** GetQuantity()
- **void** SetQuantity(int NewQuantity)

Variables (**private**)
- **FInventoryItemData** ItemData
- **int** Quantity

### AItemPickupBase
The Actor object that can be picked up or dropped by the Player Character on the condition that they have an inventory component attached to them. Some variables have been set to **EditDefaultsOnly** to allow for setting up pre-defined pick ups in the game scene.

Functions (**public**)
- **void** InstantiateItemData(FInventoryItemData NewItemData)
- **FInventoryItemData** GetItemData()
- **int** GetQuantity()
- **void** SetQuantity(int NewQuantity)
- **UStaticMeshComponent*** GetMesh()

Functions (**private**)
- **void** EnablePickUp()
  
Variables (**private**)
- **FDataTableRowHandle** ItemDataRow
    - Modifiable from the Details panel.
- **FInventoryItemData** ItemData
- **int** Quantity
    - Modifiable from the Details panel.
- **TObjectPtr<UStaticMeshComponent>** ItemMesh
    - Will automatically take the default mesh from the assigned Item Data if no static mesh is added to the component. Modifiable from the Details panel.
- **TObjectPtr<USphereComponent>** SphereComponent
    - Modifiable from the Details panel.
- **float** TimeUntilEnabled
    - ctors are unable to pick up the item until after this duration ends. Timer starts on item instantiation. Modifiable from the Details panel.
- **float** PickUpMagnetismIntensity
    - Modifiable from the Details panel.
- **TObjectPtr<UPlayerInventoryBase>** InventoryToAddTo
- **bool** PickUpEnabled
- **FTimerHandle** EnablePickUpTimerHandle

### struct FInventoryItemData
Extends **FTableRowBase**. All relevant item data should be contained in this struct and then added to a **UDataTable** in the project to be referenced by other systems.

Fields
- **FName** DisplayName
- **FString** Description
- **EInventoryItemType** ItemType
  - Currently un-used.
- **bool** Stackable
- **int** MaxStackQuantity
- **TSoftObjectPtr<UTexture2D>** PreviewImage
- **TSoftObjectPtr<UStaticMesh>** Mesh
- **TSubclassOf<AItemPickupBase>** ItemPickup

## Included Content & Blueprints of Note

### BP_Inventory
A blueprint subclass of **PlayerInventoryBase**, BP_Inventory handles the assignment of Input Actions to various inventory functions. This should be added as a component to the Player Character.

### BP_ThirdPersonCharacter
A generic Player Character taken from Unreal's default third person project. Inventory component has already been added, and code has been added to the **Event Graph** to create the included custom Player HUD.

### DT_InventoryItems
A pre-defined **UDataTable** of **FInventoryItemData** objects that can be used and added to.

### UI Folder
A folder containing basic UI widgets + their functionality. Using these is entirely optional, though it may provide a solid starting point for your own applications.

### Input Folder
A folder containing potentially helpful **Input Actions** and **Input Mapping Contexts**. Many of these are already referenced in **BP_Inventory**, as well as in blueprints found in the **UI** folder.
