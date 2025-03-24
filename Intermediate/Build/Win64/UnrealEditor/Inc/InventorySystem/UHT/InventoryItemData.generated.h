// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryItemData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORYSYSTEM_InventoryItemData_generated_h
#error "InventoryItemData.generated.h already included, missing '#pragma once' in InventoryItemData.h"
#endif
#define INVENTORYSYSTEM_InventoryItemData_generated_h

#define FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryItemData_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryItemData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<struct FInventoryItemData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryItemData_h


#define FOREACH_ENUM_EINVENTORYITEMTYPE(op) \
	op(Consumable) \
	op(Weapon) \
	op(Armor) \
	op(Custom) 

enum EInventoryItemType : uint8;
template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EInventoryItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
