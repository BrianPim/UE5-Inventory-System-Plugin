// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/InventoryItemData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryItemData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AItemPickupBase_NoRegister();
INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EInventoryItemType();
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemData();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References

// Begin Enum EInventoryItemType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInventoryItemType;
static UEnum* EInventoryItemType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInventoryItemType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInventoryItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InventorySystem_EInventoryItemType, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("EInventoryItemType"));
	}
	return Z_Registration_Info_UEnum_EInventoryItemType.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EInventoryItemType>()
{
	return EInventoryItemType_StaticEnum();
}
struct Z_Construct_UEnum_InventorySystem_EInventoryItemType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Armor.Name", "Armor" },
		{ "BlueprintType", "true" },
		{ "Consumable.Name", "Consumable" },
		{ "Custom.Name", "Custom" },
		{ "ModuleRelativePath", "Public/InventoryItemData.h" },
		{ "Weapon.Name", "Weapon" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Consumable", (int64)Consumable },
		{ "Weapon", (int64)Weapon },
		{ "Armor", (int64)Armor },
		{ "Custom", (int64)Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InventorySystem_EInventoryItemType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InventorySystem,
	nullptr,
	"EInventoryItemType",
	"EInventoryItemType",
	Z_Construct_UEnum_InventorySystem_EInventoryItemType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InventorySystem_EInventoryItemType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InventorySystem_EInventoryItemType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InventorySystem_EInventoryItemType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InventorySystem_EInventoryItemType()
{
	if (!Z_Registration_Info_UEnum_EInventoryItemType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInventoryItemType.InnerSingleton, Z_Construct_UEnum_InventorySystem_EInventoryItemType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInventoryItemType.InnerSingleton;
}
// End Enum EInventoryItemType

// Begin ScriptStruct FInventoryItemData
static_assert(std::is_polymorphic<FInventoryItemData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FInventoryItemData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryItemData;
class UScriptStruct* FInventoryItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItemData, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("InventoryItemData"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemData.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<FInventoryItemData>()
{
	return FInventoryItemData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InventoryItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Inventory System|Item Data" },
		{ "ModuleRelativePath", "Public/InventoryItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Inventory System|Item Data" },
		{ "ModuleRelativePath", "Public/InventoryItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stackable_MetaData[] = {
		{ "Category", "Inventory System|Item Data" },
		{ "ModuleRelativePath", "Public/InventoryItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStackQuantity_MetaData[] = {
		{ "Category", "Inventory System|Item Data" },
		{ "EditCondition", "Stackable" },
		{ "ModuleRelativePath", "Public/InventoryItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewImage_MetaData[] = {
		{ "Category", "Inventory System|Item Data" },
		{ "ModuleRelativePath", "Public/InventoryItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Inventory System|Item Data" },
		{ "ModuleRelativePath", "Public/InventoryItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemPickup_MetaData[] = {
		{ "Category", "Inventory System|Item Data" },
		{ "ModuleRelativePath", "Public/InventoryItemData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static void NewProp_Stackable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Stackable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStackQuantity;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewImage;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemPickup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItemData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemData, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
void Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_Stackable_SetBit(void* Obj)
{
	((FInventoryItemData*)Obj)->Stackable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_Stackable = { "Stackable", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInventoryItemData), &Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_Stackable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stackable_MetaData), NewProp_Stackable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_MaxStackQuantity = { "MaxStackQuantity", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemData, MaxStackQuantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStackQuantity_MetaData), NewProp_MaxStackQuantity_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_PreviewImage = { "PreviewImage", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemData, PreviewImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewImage_MetaData), NewProp_PreviewImage_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemData, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_ItemPickup = { "ItemPickup", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemData, ItemPickup), Z_Construct_UClass_UClass, Z_Construct_UClass_AItemPickupBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemPickup_MetaData), NewProp_ItemPickup_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_Stackable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_MaxStackQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_PreviewImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_ItemPickup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItemData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"InventoryItemData",
	Z_Construct_UScriptStruct_FInventoryItemData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemData_Statics::PropPointers),
	sizeof(FInventoryItemData),
	alignof(FInventoryItemData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryItemData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemData()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryItemData.InnerSingleton, Z_Construct_UScriptStruct_FInventoryItemData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemData.InnerSingleton;
}
// End ScriptStruct FInventoryItemData

// Begin Registration
struct Z_CompiledInDeferFile_FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryItemData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInventoryItemType_StaticEnum, TEXT("EInventoryItemType"), &Z_Registration_Info_UEnum_EInventoryItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 973234138U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryItemData::StaticStruct, Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewStructOps, TEXT("InventoryItemData"), &Z_Registration_Info_UScriptStruct_InventoryItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryItemData), 1502975924U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryItemData_h_3552121348(TEXT("/Script/InventorySystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryItemData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryItemData_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryItemData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryItemData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
