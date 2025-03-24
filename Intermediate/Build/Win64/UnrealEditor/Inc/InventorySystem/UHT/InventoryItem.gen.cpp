// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/InventoryItem.h"
#include "InventorySystem/Public/InventoryItemData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryItem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoryItem();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoryItem_NoRegister();
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemData();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References

// Begin Class UInventoryItem Function GetItemData
struct Z_Construct_UFunction_UInventoryItem_GetItemData_Statics
{
	struct InventoryItem_eventGetItemData_Parms
	{
		FInventoryItemData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System|Inventory Item" },
		{ "ModuleRelativePath", "Public/InventoryItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryItem_GetItemData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryItem_eventGetItemData_Parms, ReturnValue), Z_Construct_UScriptStruct_FInventoryItemData, METADATA_PARAMS(0, nullptr) }; // 1502975924
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryItem_GetItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItem_GetItemData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItem_GetItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryItem_GetItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryItem, nullptr, "GetItemData", nullptr, nullptr, Z_Construct_UFunction_UInventoryItem_GetItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItem_GetItemData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryItem_GetItemData_Statics::InventoryItem_eventGetItemData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItem_GetItemData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryItem_GetItemData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryItem_GetItemData_Statics::InventoryItem_eventGetItemData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryItem_GetItemData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryItem_GetItemData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryItem::execGetItemData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInventoryItemData*)Z_Param__Result=P_THIS->GetItemData();
	P_NATIVE_END;
}
// End Class UInventoryItem Function GetItemData

// Begin Class UInventoryItem Function GetQuantity
struct Z_Construct_UFunction_UInventoryItem_GetQuantity_Statics
{
	struct InventoryItem_eventGetQuantity_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System|Inventory Item" },
		{ "ModuleRelativePath", "Public/InventoryItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryItem_GetQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryItem_eventGetQuantity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryItem_GetQuantity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItem_GetQuantity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItem_GetQuantity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryItem_GetQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryItem, nullptr, "GetQuantity", nullptr, nullptr, Z_Construct_UFunction_UInventoryItem_GetQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItem_GetQuantity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryItem_GetQuantity_Statics::InventoryItem_eventGetQuantity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItem_GetQuantity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryItem_GetQuantity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryItem_GetQuantity_Statics::InventoryItem_eventGetQuantity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryItem_GetQuantity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryItem_GetQuantity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryItem::execGetQuantity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetQuantity();
	P_NATIVE_END;
}
// End Class UInventoryItem Function GetQuantity

// Begin Class UInventoryItem Function SetQuantity
struct Z_Construct_UFunction_UInventoryItem_SetQuantity_Statics
{
	struct InventoryItem_eventSetQuantity_Parms
	{
		int32 NewQuantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System|Inventory Item" },
		{ "ModuleRelativePath", "Public/InventoryItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewQuantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryItem_SetQuantity_Statics::NewProp_NewQuantity = { "NewQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryItem_eventSetQuantity_Parms, NewQuantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryItem_SetQuantity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItem_SetQuantity_Statics::NewProp_NewQuantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItem_SetQuantity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryItem_SetQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryItem, nullptr, "SetQuantity", nullptr, nullptr, Z_Construct_UFunction_UInventoryItem_SetQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItem_SetQuantity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryItem_SetQuantity_Statics::InventoryItem_eventSetQuantity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItem_SetQuantity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryItem_SetQuantity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryItem_SetQuantity_Statics::InventoryItem_eventSetQuantity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryItem_SetQuantity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryItem_SetQuantity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryItem::execSetQuantity)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewQuantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetQuantity(Z_Param_NewQuantity);
	P_NATIVE_END;
}
// End Class UInventoryItem Function SetQuantity

// Begin Class UInventoryItem
void UInventoryItem::StaticRegisterNativesUInventoryItem()
{
	UClass* Class = UInventoryItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetItemData", &UInventoryItem::execGetItemData },
		{ "GetQuantity", &UInventoryItem::execGetQuantity },
		{ "SetQuantity", &UInventoryItem::execSetQuantity },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryItem);
UClass* Z_Construct_UClass_UInventoryItem_NoRegister()
{
	return UInventoryItem::StaticClass();
}
struct Z_Construct_UClass_UInventoryItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InventoryItem.h" },
		{ "ModuleRelativePath", "Public/InventoryItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryItem_GetItemData, "GetItemData" }, // 4445860
		{ &Z_Construct_UFunction_UInventoryItem_GetQuantity, "GetQuantity" }, // 1415867385
		{ &Z_Construct_UFunction_UInventoryItem_SetQuantity, "SetQuantity" }, // 1681940874
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInventoryItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryItem_Statics::ClassParams = {
	&UInventoryItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryItem()
{
	if (!Z_Registration_Info_UClass_UInventoryItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryItem.OuterSingleton, Z_Construct_UClass_UInventoryItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryItem.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UClass* StaticClass<UInventoryItem>()
{
	return UInventoryItem::StaticClass();
}
UInventoryItem::UInventoryItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryItem);
UInventoryItem::~UInventoryItem() {}
// End Class UInventoryItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryItem, UInventoryItem::StaticClass, TEXT("UInventoryItem"), &Z_Registration_Info_UClass_UInventoryItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryItem), 3532982801U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryItem_h_259382843(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
