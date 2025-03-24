// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/PlayerInventoryBase.h"
#include "InventorySystem/Public/InventoryItemData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInventoryBase() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoryItem_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UPlayerInventoryBase();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UPlayerInventoryBase_NoRegister();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_InventorySystem_InventoryItemAtIndexUpdated__DelegateSignature();
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemData();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References

// Begin Delegate FInventoryItemAtIndexUpdated
struct Z_Construct_UDelegateFunction_InventorySystem_InventoryItemAtIndexUpdated__DelegateSignature_Statics
{
	struct _Script_InventorySystem_eventInventoryItemAtIndexUpdated_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Delegate Declarations\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerInventoryBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate Declarations" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_InventorySystem_InventoryItemAtIndexUpdated__DelegateSignature_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InventorySystem_eventInventoryItemAtIndexUpdated_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventorySystem_InventoryItemAtIndexUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventorySystem_InventoryItemAtIndexUpdated__DelegateSignature_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_InventoryItemAtIndexUpdated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventorySystem_InventoryItemAtIndexUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventorySystem, nullptr, "InventoryItemAtIndexUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InventorySystem_InventoryItemAtIndexUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_InventoryItemAtIndexUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InventorySystem_InventoryItemAtIndexUpdated__DelegateSignature_Statics::_Script_InventorySystem_eventInventoryItemAtIndexUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventorySystem_InventoryItemAtIndexUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InventorySystem_InventoryItemAtIndexUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_InventorySystem_InventoryItemAtIndexUpdated__DelegateSignature_Statics::_Script_InventorySystem_eventInventoryItemAtIndexUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InventorySystem_InventoryItemAtIndexUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventorySystem_InventoryItemAtIndexUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FInventoryItemAtIndexUpdated_DelegateWrapper(const FMulticastScriptDelegate& InventoryItemAtIndexUpdated, int32 Index)
{
	struct _Script_InventorySystem_eventInventoryItemAtIndexUpdated_Parms
	{
		int32 Index;
	};
	_Script_InventorySystem_eventInventoryItemAtIndexUpdated_Parms Parms;
	Parms.Index=Index;
	InventoryItemAtIndexUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FInventoryItemAtIndexUpdated

// Begin Class UPlayerInventoryBase Function DropItemAtIndex
struct Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndex_Statics
{
	struct PlayerInventoryBase_eventDropItemAtIndex_Parms
	{
		int32 Index;
		int32 Quantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System|Player Inventory" },
		{ "ModuleRelativePath", "Public/PlayerInventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInventoryBase_eventDropItemAtIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndex_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInventoryBase_eventDropItemAtIndex_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndex_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventoryBase, nullptr, "DropItemAtIndex", nullptr, nullptr, Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndex_Statics::PlayerInventoryBase_eventDropItemAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndex_Statics::PlayerInventoryBase_eventDropItemAtIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerInventoryBase::execDropItemAtIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DropItemAtIndex(Z_Param_Index,Z_Param_Quantity);
	P_NATIVE_END;
}
// End Class UPlayerInventoryBase Function DropItemAtIndex

// Begin Class UPlayerInventoryBase Function DropItemAtIndexAtLocation
struct Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndexAtLocation_Statics
{
	struct PlayerInventoryBase_eventDropItemAtIndexAtLocation_Parms
	{
		int32 Index;
		int32 Quantity;
		FVector Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System|Player Inventory" },
		{ "ModuleRelativePath", "Public/PlayerInventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndexAtLocation_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInventoryBase_eventDropItemAtIndexAtLocation_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndexAtLocation_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInventoryBase_eventDropItemAtIndexAtLocation_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndexAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInventoryBase_eventDropItemAtIndexAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndexAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndexAtLocation_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndexAtLocation_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndexAtLocation_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndexAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndexAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventoryBase, nullptr, "DropItemAtIndexAtLocation", nullptr, nullptr, Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndexAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndexAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndexAtLocation_Statics::PlayerInventoryBase_eventDropItemAtIndexAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndexAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndexAtLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndexAtLocation_Statics::PlayerInventoryBase_eventDropItemAtIndexAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndexAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndexAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerInventoryBase::execDropItemAtIndexAtLocation)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DropItemAtIndexAtLocation(Z_Param_Index,Z_Param_Quantity,Z_Param_Location);
	P_NATIVE_END;
}
// End Class UPlayerInventoryBase Function DropItemAtIndexAtLocation

// Begin Class UPlayerInventoryBase Function GetItemAtIndex
struct Z_Construct_UFunction_UPlayerInventoryBase_GetItemAtIndex_Statics
{
	struct PlayerInventoryBase_eventGetItemAtIndex_Parms
	{
		int32 Index;
		UInventoryItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System|Player Inventory" },
		{ "ModuleRelativePath", "Public/PlayerInventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInventoryBase_GetItemAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInventoryBase_eventGetItemAtIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerInventoryBase_GetItemAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInventoryBase_eventGetItemAtIndex_Parms, ReturnValue), Z_Construct_UClass_UInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventoryBase_GetItemAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventoryBase_GetItemAtIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventoryBase_GetItemAtIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_GetItemAtIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventoryBase_GetItemAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventoryBase, nullptr, "GetItemAtIndex", nullptr, nullptr, Z_Construct_UFunction_UPlayerInventoryBase_GetItemAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_GetItemAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerInventoryBase_GetItemAtIndex_Statics::PlayerInventoryBase_eventGetItemAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_GetItemAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInventoryBase_GetItemAtIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerInventoryBase_GetItemAtIndex_Statics::PlayerInventoryBase_eventGetItemAtIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerInventoryBase_GetItemAtIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventoryBase_GetItemAtIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerInventoryBase::execGetItemAtIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInventoryItem**)Z_Param__Result=P_THIS->GetItemAtIndex(Z_Param_Index);
	P_NATIVE_END;
}
// End Class UPlayerInventoryBase Function GetItemAtIndex

// Begin Class UPlayerInventoryBase Function GetTotalQuantityOfItem
struct Z_Construct_UFunction_UPlayerInventoryBase_GetTotalQuantityOfItem_Statics
{
	struct PlayerInventoryBase_eventGetTotalQuantityOfItem_Parms
	{
		FInventoryItemData Item;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System|Player Inventory" },
		{ "ModuleRelativePath", "Public/PlayerInventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInventoryBase_GetTotalQuantityOfItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInventoryBase_eventGetTotalQuantityOfItem_Parms, Item), Z_Construct_UScriptStruct_FInventoryItemData, METADATA_PARAMS(0, nullptr) }; // 1502975924
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInventoryBase_GetTotalQuantityOfItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInventoryBase_eventGetTotalQuantityOfItem_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventoryBase_GetTotalQuantityOfItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventoryBase_GetTotalQuantityOfItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventoryBase_GetTotalQuantityOfItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_GetTotalQuantityOfItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventoryBase_GetTotalQuantityOfItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventoryBase, nullptr, "GetTotalQuantityOfItem", nullptr, nullptr, Z_Construct_UFunction_UPlayerInventoryBase_GetTotalQuantityOfItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_GetTotalQuantityOfItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerInventoryBase_GetTotalQuantityOfItem_Statics::PlayerInventoryBase_eventGetTotalQuantityOfItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_GetTotalQuantityOfItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInventoryBase_GetTotalQuantityOfItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerInventoryBase_GetTotalQuantityOfItem_Statics::PlayerInventoryBase_eventGetTotalQuantityOfItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerInventoryBase_GetTotalQuantityOfItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventoryBase_GetTotalQuantityOfItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerInventoryBase::execGetTotalQuantityOfItem)
{
	P_GET_STRUCT(FInventoryItemData,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTotalQuantityOfItem(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UPlayerInventoryBase Function GetTotalQuantityOfItem

// Begin Class UPlayerInventoryBase Function IsValidPickupTarget
struct Z_Construct_UFunction_UPlayerInventoryBase_IsValidPickupTarget_Statics
{
	struct PlayerInventoryBase_eventIsValidPickupTarget_Parms
	{
		FInventoryItemData Item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System|Player Inventory" },
		{ "ModuleRelativePath", "Public/PlayerInventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInventoryBase_IsValidPickupTarget_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInventoryBase_eventIsValidPickupTarget_Parms, Item), Z_Construct_UScriptStruct_FInventoryItemData, METADATA_PARAMS(0, nullptr) }; // 1502975924
void Z_Construct_UFunction_UPlayerInventoryBase_IsValidPickupTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerInventoryBase_eventIsValidPickupTarget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerInventoryBase_IsValidPickupTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerInventoryBase_eventIsValidPickupTarget_Parms), &Z_Construct_UFunction_UPlayerInventoryBase_IsValidPickupTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventoryBase_IsValidPickupTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventoryBase_IsValidPickupTarget_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventoryBase_IsValidPickupTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_IsValidPickupTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventoryBase_IsValidPickupTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventoryBase, nullptr, "IsValidPickupTarget", nullptr, nullptr, Z_Construct_UFunction_UPlayerInventoryBase_IsValidPickupTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_IsValidPickupTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerInventoryBase_IsValidPickupTarget_Statics::PlayerInventoryBase_eventIsValidPickupTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_IsValidPickupTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInventoryBase_IsValidPickupTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerInventoryBase_IsValidPickupTarget_Statics::PlayerInventoryBase_eventIsValidPickupTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerInventoryBase_IsValidPickupTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventoryBase_IsValidPickupTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerInventoryBase::execIsValidPickupTarget)
{
	P_GET_STRUCT(FInventoryItemData,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidPickupTarget(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UPlayerInventoryBase Function IsValidPickupTarget

// Begin Class UPlayerInventoryBase Function RemoveAllAtIndex
struct Z_Construct_UFunction_UPlayerInventoryBase_RemoveAllAtIndex_Statics
{
	struct PlayerInventoryBase_eventRemoveAllAtIndex_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System|Player Inventory" },
		{ "ModuleRelativePath", "Public/PlayerInventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInventoryBase_RemoveAllAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInventoryBase_eventRemoveAllAtIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventoryBase_RemoveAllAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventoryBase_RemoveAllAtIndex_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_RemoveAllAtIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventoryBase_RemoveAllAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventoryBase, nullptr, "RemoveAllAtIndex", nullptr, nullptr, Z_Construct_UFunction_UPlayerInventoryBase_RemoveAllAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_RemoveAllAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerInventoryBase_RemoveAllAtIndex_Statics::PlayerInventoryBase_eventRemoveAllAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_RemoveAllAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInventoryBase_RemoveAllAtIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerInventoryBase_RemoveAllAtIndex_Statics::PlayerInventoryBase_eventRemoveAllAtIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerInventoryBase_RemoveAllAtIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventoryBase_RemoveAllAtIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerInventoryBase::execRemoveAllAtIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveAllAtIndex(Z_Param_Index);
	P_NATIVE_END;
}
// End Class UPlayerInventoryBase Function RemoveAllAtIndex

// Begin Class UPlayerInventoryBase Function RemoveAllOfItem
struct Z_Construct_UFunction_UPlayerInventoryBase_RemoveAllOfItem_Statics
{
	struct PlayerInventoryBase_eventRemoveAllOfItem_Parms
	{
		FInventoryItemData ItemToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System|Player Inventory" },
		{ "ModuleRelativePath", "Public/PlayerInventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInventoryBase_RemoveAllOfItem_Statics::NewProp_ItemToRemove = { "ItemToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInventoryBase_eventRemoveAllOfItem_Parms, ItemToRemove), Z_Construct_UScriptStruct_FInventoryItemData, METADATA_PARAMS(0, nullptr) }; // 1502975924
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventoryBase_RemoveAllOfItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventoryBase_RemoveAllOfItem_Statics::NewProp_ItemToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_RemoveAllOfItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventoryBase_RemoveAllOfItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventoryBase, nullptr, "RemoveAllOfItem", nullptr, nullptr, Z_Construct_UFunction_UPlayerInventoryBase_RemoveAllOfItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_RemoveAllOfItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerInventoryBase_RemoveAllOfItem_Statics::PlayerInventoryBase_eventRemoveAllOfItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_RemoveAllOfItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInventoryBase_RemoveAllOfItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerInventoryBase_RemoveAllOfItem_Statics::PlayerInventoryBase_eventRemoveAllOfItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerInventoryBase_RemoveAllOfItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventoryBase_RemoveAllOfItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerInventoryBase::execRemoveAllOfItem)
{
	P_GET_STRUCT(FInventoryItemData,Z_Param_ItemToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveAllOfItem(Z_Param_ItemToRemove);
	P_NATIVE_END;
}
// End Class UPlayerInventoryBase Function RemoveAllOfItem

// Begin Class UPlayerInventoryBase Function RemoveAtIndex
struct Z_Construct_UFunction_UPlayerInventoryBase_RemoveAtIndex_Statics
{
	struct PlayerInventoryBase_eventRemoveAtIndex_Parms
	{
		int32 Index;
		int32 Quantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System|Player Inventory" },
		{ "ModuleRelativePath", "Public/PlayerInventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInventoryBase_RemoveAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInventoryBase_eventRemoveAtIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInventoryBase_RemoveAtIndex_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInventoryBase_eventRemoveAtIndex_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventoryBase_RemoveAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventoryBase_RemoveAtIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventoryBase_RemoveAtIndex_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_RemoveAtIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventoryBase_RemoveAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventoryBase, nullptr, "RemoveAtIndex", nullptr, nullptr, Z_Construct_UFunction_UPlayerInventoryBase_RemoveAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_RemoveAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerInventoryBase_RemoveAtIndex_Statics::PlayerInventoryBase_eventRemoveAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_RemoveAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInventoryBase_RemoveAtIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerInventoryBase_RemoveAtIndex_Statics::PlayerInventoryBase_eventRemoveAtIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerInventoryBase_RemoveAtIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventoryBase_RemoveAtIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerInventoryBase::execRemoveAtIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveAtIndex(Z_Param_Index,Z_Param_Quantity);
	P_NATIVE_END;
}
// End Class UPlayerInventoryBase Function RemoveAtIndex

// Begin Class UPlayerInventoryBase Function SwitchItemsAtIndices
struct Z_Construct_UFunction_UPlayerInventoryBase_SwitchItemsAtIndices_Statics
{
	struct PlayerInventoryBase_eventSwitchItemsAtIndices_Parms
	{
		int32 FirstIndex;
		int32 SecondIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System|Player Inventory" },
		{ "ModuleRelativePath", "Public/PlayerInventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FirstIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SecondIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInventoryBase_SwitchItemsAtIndices_Statics::NewProp_FirstIndex = { "FirstIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInventoryBase_eventSwitchItemsAtIndices_Parms, FirstIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInventoryBase_SwitchItemsAtIndices_Statics::NewProp_SecondIndex = { "SecondIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInventoryBase_eventSwitchItemsAtIndices_Parms, SecondIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventoryBase_SwitchItemsAtIndices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventoryBase_SwitchItemsAtIndices_Statics::NewProp_FirstIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventoryBase_SwitchItemsAtIndices_Statics::NewProp_SecondIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_SwitchItemsAtIndices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventoryBase_SwitchItemsAtIndices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventoryBase, nullptr, "SwitchItemsAtIndices", nullptr, nullptr, Z_Construct_UFunction_UPlayerInventoryBase_SwitchItemsAtIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_SwitchItemsAtIndices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerInventoryBase_SwitchItemsAtIndices_Statics::PlayerInventoryBase_eventSwitchItemsAtIndices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_SwitchItemsAtIndices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInventoryBase_SwitchItemsAtIndices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerInventoryBase_SwitchItemsAtIndices_Statics::PlayerInventoryBase_eventSwitchItemsAtIndices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerInventoryBase_SwitchItemsAtIndices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventoryBase_SwitchItemsAtIndices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerInventoryBase::execSwitchItemsAtIndices)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_FirstIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_SecondIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchItemsAtIndices(Z_Param_FirstIndex,Z_Param_SecondIndex);
	P_NATIVE_END;
}
// End Class UPlayerInventoryBase Function SwitchItemsAtIndices

// Begin Class UPlayerInventoryBase Function TryAddItem
struct Z_Construct_UFunction_UPlayerInventoryBase_TryAddItem_Statics
{
	struct PlayerInventoryBase_eventTryAddItem_Parms
	{
		FInventoryItemData ItemToAdd;
		int32 Quantity;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System|Player Inventory" },
		{ "ModuleRelativePath", "Public/PlayerInventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemToAdd;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInventoryBase_TryAddItem_Statics::NewProp_ItemToAdd = { "ItemToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInventoryBase_eventTryAddItem_Parms, ItemToAdd), Z_Construct_UScriptStruct_FInventoryItemData, METADATA_PARAMS(0, nullptr) }; // 1502975924
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInventoryBase_TryAddItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInventoryBase_eventTryAddItem_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInventoryBase_TryAddItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInventoryBase_eventTryAddItem_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventoryBase_TryAddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventoryBase_TryAddItem_Statics::NewProp_ItemToAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventoryBase_TryAddItem_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventoryBase_TryAddItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_TryAddItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventoryBase_TryAddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventoryBase, nullptr, "TryAddItem", nullptr, nullptr, Z_Construct_UFunction_UPlayerInventoryBase_TryAddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_TryAddItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerInventoryBase_TryAddItem_Statics::PlayerInventoryBase_eventTryAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_TryAddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInventoryBase_TryAddItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerInventoryBase_TryAddItem_Statics::PlayerInventoryBase_eventTryAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerInventoryBase_TryAddItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventoryBase_TryAddItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerInventoryBase::execTryAddItem)
{
	P_GET_STRUCT(FInventoryItemData,Z_Param_ItemToAdd);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->TryAddItem(Z_Param_ItemToAdd,Z_Param_Quantity);
	P_NATIVE_END;
}
// End Class UPlayerInventoryBase Function TryAddItem

// Begin Class UPlayerInventoryBase Function TryRemoveItem
struct Z_Construct_UFunction_UPlayerInventoryBase_TryRemoveItem_Statics
{
	struct PlayerInventoryBase_eventTryRemoveItem_Parms
	{
		FInventoryItemData ItemToRemove;
		int32 Quantity;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System|Player Inventory" },
		{ "ModuleRelativePath", "Public/PlayerInventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemToRemove;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInventoryBase_TryRemoveItem_Statics::NewProp_ItemToRemove = { "ItemToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInventoryBase_eventTryRemoveItem_Parms, ItemToRemove), Z_Construct_UScriptStruct_FInventoryItemData, METADATA_PARAMS(0, nullptr) }; // 1502975924
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInventoryBase_TryRemoveItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInventoryBase_eventTryRemoveItem_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInventoryBase_TryRemoveItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInventoryBase_eventTryRemoveItem_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventoryBase_TryRemoveItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventoryBase_TryRemoveItem_Statics::NewProp_ItemToRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventoryBase_TryRemoveItem_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventoryBase_TryRemoveItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_TryRemoveItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventoryBase_TryRemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventoryBase, nullptr, "TryRemoveItem", nullptr, nullptr, Z_Construct_UFunction_UPlayerInventoryBase_TryRemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_TryRemoveItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerInventoryBase_TryRemoveItem_Statics::PlayerInventoryBase_eventTryRemoveItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryBase_TryRemoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInventoryBase_TryRemoveItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerInventoryBase_TryRemoveItem_Statics::PlayerInventoryBase_eventTryRemoveItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerInventoryBase_TryRemoveItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventoryBase_TryRemoveItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerInventoryBase::execTryRemoveItem)
{
	P_GET_STRUCT(FInventoryItemData,Z_Param_ItemToRemove);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->TryRemoveItem(Z_Param_ItemToRemove,Z_Param_Quantity);
	P_NATIVE_END;
}
// End Class UPlayerInventoryBase Function TryRemoveItem

// Begin Class UPlayerInventoryBase
void UPlayerInventoryBase::StaticRegisterNativesUPlayerInventoryBase()
{
	UClass* Class = UPlayerInventoryBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DropItemAtIndex", &UPlayerInventoryBase::execDropItemAtIndex },
		{ "DropItemAtIndexAtLocation", &UPlayerInventoryBase::execDropItemAtIndexAtLocation },
		{ "GetItemAtIndex", &UPlayerInventoryBase::execGetItemAtIndex },
		{ "GetTotalQuantityOfItem", &UPlayerInventoryBase::execGetTotalQuantityOfItem },
		{ "IsValidPickupTarget", &UPlayerInventoryBase::execIsValidPickupTarget },
		{ "RemoveAllAtIndex", &UPlayerInventoryBase::execRemoveAllAtIndex },
		{ "RemoveAllOfItem", &UPlayerInventoryBase::execRemoveAllOfItem },
		{ "RemoveAtIndex", &UPlayerInventoryBase::execRemoveAtIndex },
		{ "SwitchItemsAtIndices", &UPlayerInventoryBase::execSwitchItemsAtIndices },
		{ "TryAddItem", &UPlayerInventoryBase::execTryAddItem },
		{ "TryRemoveItem", &UPlayerInventoryBase::execTryRemoveItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerInventoryBase);
UClass* Z_Construct_UClass_UPlayerInventoryBase_NoRegister()
{
	return UPlayerInventoryBase::StaticClass();
}
struct Z_Construct_UClass_UPlayerInventoryBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayerInventoryBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayerInventoryBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInventoryItemAtIndexUpdated_MetaData[] = {
		{ "Category", "Inventory System|Player Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Delegates\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerInventoryBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Inventory System|Player Inventory" },
		{ "ModuleRelativePath", "Public/PlayerInventoryBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerInventoryBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryArraySize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Inventory System|Player Inventory" },
		{ "ModuleRelativePath", "Public/PlayerInventoryBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropItemImpulseModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Inventory System|Player Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The distance from the player where the newly dropped item is spawned.\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerInventoryBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The distance from the player where the newly dropped item is spawned." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropItemInitialDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Inventory System|Player Inventory" },
		{ "ModuleRelativePath", "Public/PlayerInventoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryItemAtIndexUpdated;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryDataTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InventoryArray;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InventoryArraySize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DropItemImpulseModifier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DropItemInitialDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndex, "DropItemAtIndex" }, // 3376760505
		{ &Z_Construct_UFunction_UPlayerInventoryBase_DropItemAtIndexAtLocation, "DropItemAtIndexAtLocation" }, // 1717229579
		{ &Z_Construct_UFunction_UPlayerInventoryBase_GetItemAtIndex, "GetItemAtIndex" }, // 3072787659
		{ &Z_Construct_UFunction_UPlayerInventoryBase_GetTotalQuantityOfItem, "GetTotalQuantityOfItem" }, // 42161476
		{ &Z_Construct_UFunction_UPlayerInventoryBase_IsValidPickupTarget, "IsValidPickupTarget" }, // 3721936529
		{ &Z_Construct_UFunction_UPlayerInventoryBase_RemoveAllAtIndex, "RemoveAllAtIndex" }, // 3172665969
		{ &Z_Construct_UFunction_UPlayerInventoryBase_RemoveAllOfItem, "RemoveAllOfItem" }, // 1363495429
		{ &Z_Construct_UFunction_UPlayerInventoryBase_RemoveAtIndex, "RemoveAtIndex" }, // 3333469071
		{ &Z_Construct_UFunction_UPlayerInventoryBase_SwitchItemsAtIndices, "SwitchItemsAtIndices" }, // 180252687
		{ &Z_Construct_UFunction_UPlayerInventoryBase_TryAddItem, "TryAddItem" }, // 1907754046
		{ &Z_Construct_UFunction_UPlayerInventoryBase_TryRemoveItem, "TryRemoveItem" }, // 2662101912
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerInventoryBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayerInventoryBase_Statics::NewProp_OnInventoryItemAtIndexUpdated = { "OnInventoryItemAtIndexUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInventoryBase, OnInventoryItemAtIndexUpdated), Z_Construct_UDelegateFunction_InventorySystem_InventoryItemAtIndexUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInventoryItemAtIndexUpdated_MetaData), NewProp_OnInventoryItemAtIndexUpdated_MetaData) }; // 1400721441
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInventoryBase_Statics::NewProp_InventoryDataTable = { "InventoryDataTable", nullptr, (EPropertyFlags)0x0144000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInventoryBase, InventoryDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryDataTable_MetaData), NewProp_InventoryDataTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInventoryBase_Statics::NewProp_InventoryArray_Inner = { "InventoryArray", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerInventoryBase_Statics::NewProp_InventoryArray = { "InventoryArray", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInventoryBase, InventoryArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryArray_MetaData), NewProp_InventoryArray_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerInventoryBase_Statics::NewProp_InventoryArraySize = { "InventoryArraySize", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInventoryBase, InventoryArraySize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryArraySize_MetaData), NewProp_InventoryArraySize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerInventoryBase_Statics::NewProp_DropItemImpulseModifier = { "DropItemImpulseModifier", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInventoryBase, DropItemImpulseModifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropItemImpulseModifier_MetaData), NewProp_DropItemImpulseModifier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerInventoryBase_Statics::NewProp_DropItemInitialDistance = { "DropItemInitialDistance", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInventoryBase, DropItemInitialDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropItemInitialDistance_MetaData), NewProp_DropItemInitialDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerInventoryBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventoryBase_Statics::NewProp_OnInventoryItemAtIndexUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventoryBase_Statics::NewProp_InventoryDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventoryBase_Statics::NewProp_InventoryArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventoryBase_Statics::NewProp_InventoryArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventoryBase_Statics::NewProp_InventoryArraySize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventoryBase_Statics::NewProp_DropItemImpulseModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventoryBase_Statics::NewProp_DropItemInitialDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventoryBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerInventoryBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventoryBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInventoryBase_Statics::ClassParams = {
	&UPlayerInventoryBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerInventoryBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventoryBase_Statics::PropPointers),
	0,
	0x00A000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventoryBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerInventoryBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerInventoryBase()
{
	if (!Z_Registration_Info_UClass_UPlayerInventoryBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerInventoryBase.OuterSingleton, Z_Construct_UClass_UPlayerInventoryBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerInventoryBase.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UClass* StaticClass<UPlayerInventoryBase>()
{
	return UPlayerInventoryBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInventoryBase);
UPlayerInventoryBase::~UPlayerInventoryBase() {}
// End Class UPlayerInventoryBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_PlayerInventoryBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerInventoryBase, UPlayerInventoryBase::StaticClass, TEXT("UPlayerInventoryBase"), &Z_Registration_Info_UClass_UPlayerInventoryBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerInventoryBase), 3470925302U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_PlayerInventoryBase_h_3641825191(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_PlayerInventoryBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_PlayerInventoryBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
