// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/ItemPickupBase.h"
#include "InventorySystem/Public/InventoryItemData.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemPickupBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AItemPickupBase();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AItemPickupBase_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UPlayerInventoryBase_NoRegister();
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemData();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References

// Begin Class AItemPickupBase Function GetItemData
struct Z_Construct_UFunction_AItemPickupBase_GetItemData_Statics
{
	struct ItemPickupBase_eventGetItemData_Parms
	{
		FInventoryItemData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System|Item Pickup" },
		{ "ModuleRelativePath", "Public/ItemPickupBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AItemPickupBase_GetItemData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemPickupBase_eventGetItemData_Parms, ReturnValue), Z_Construct_UScriptStruct_FInventoryItemData, METADATA_PARAMS(0, nullptr) }; // 1502975924
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemPickupBase_GetItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemPickupBase_GetItemData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemPickupBase_GetItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemPickupBase_GetItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemPickupBase, nullptr, "GetItemData", nullptr, nullptr, Z_Construct_UFunction_AItemPickupBase_GetItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemPickupBase_GetItemData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AItemPickupBase_GetItemData_Statics::ItemPickupBase_eventGetItemData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemPickupBase_GetItemData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemPickupBase_GetItemData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AItemPickupBase_GetItemData_Statics::ItemPickupBase_eventGetItemData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AItemPickupBase_GetItemData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemPickupBase_GetItemData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItemPickupBase::execGetItemData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInventoryItemData*)Z_Param__Result=P_THIS->GetItemData();
	P_NATIVE_END;
}
// End Class AItemPickupBase Function GetItemData

// Begin Class AItemPickupBase Function GetMesh
struct Z_Construct_UFunction_AItemPickupBase_GetMesh_Statics
{
	struct ItemPickupBase_eventGetMesh_Parms
	{
		UStaticMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System|Item Pickup" },
		{ "ModuleRelativePath", "Public/ItemPickupBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemPickupBase_GetMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemPickupBase_eventGetMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemPickupBase_GetMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemPickupBase_GetMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemPickupBase_GetMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemPickupBase_GetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemPickupBase, nullptr, "GetMesh", nullptr, nullptr, Z_Construct_UFunction_AItemPickupBase_GetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemPickupBase_GetMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_AItemPickupBase_GetMesh_Statics::ItemPickupBase_eventGetMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemPickupBase_GetMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemPickupBase_GetMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AItemPickupBase_GetMesh_Statics::ItemPickupBase_eventGetMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AItemPickupBase_GetMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemPickupBase_GetMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItemPickupBase::execGetMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetMesh();
	P_NATIVE_END;
}
// End Class AItemPickupBase Function GetMesh

// Begin Class AItemPickupBase Function GetQuantity
struct Z_Construct_UFunction_AItemPickupBase_GetQuantity_Statics
{
	struct ItemPickupBase_eventGetQuantity_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System|Item Pickup" },
		{ "ModuleRelativePath", "Public/ItemPickupBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AItemPickupBase_GetQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemPickupBase_eventGetQuantity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemPickupBase_GetQuantity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemPickupBase_GetQuantity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemPickupBase_GetQuantity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemPickupBase_GetQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemPickupBase, nullptr, "GetQuantity", nullptr, nullptr, Z_Construct_UFunction_AItemPickupBase_GetQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemPickupBase_GetQuantity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AItemPickupBase_GetQuantity_Statics::ItemPickupBase_eventGetQuantity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemPickupBase_GetQuantity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemPickupBase_GetQuantity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AItemPickupBase_GetQuantity_Statics::ItemPickupBase_eventGetQuantity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AItemPickupBase_GetQuantity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemPickupBase_GetQuantity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItemPickupBase::execGetQuantity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetQuantity();
	P_NATIVE_END;
}
// End Class AItemPickupBase Function GetQuantity

// Begin Class AItemPickupBase Function OnOverlapStart
struct Z_Construct_UFunction_AItemPickupBase_OnOverlapStart_Statics
{
	struct ItemPickupBase_eventOnOverlapStart_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemPickupBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemPickupBase_OnOverlapStart_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemPickupBase_eventOnOverlapStart_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemPickupBase_OnOverlapStart_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemPickupBase_eventOnOverlapStart_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemPickupBase_OnOverlapStart_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemPickupBase_eventOnOverlapStart_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AItemPickupBase_OnOverlapStart_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemPickupBase_eventOnOverlapStart_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AItemPickupBase_OnOverlapStart_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((ItemPickupBase_eventOnOverlapStart_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AItemPickupBase_OnOverlapStart_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemPickupBase_eventOnOverlapStart_Parms), &Z_Construct_UFunction_AItemPickupBase_OnOverlapStart_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AItemPickupBase_OnOverlapStart_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemPickupBase_eventOnOverlapStart_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemPickupBase_OnOverlapStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemPickupBase_OnOverlapStart_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemPickupBase_OnOverlapStart_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemPickupBase_OnOverlapStart_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemPickupBase_OnOverlapStart_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemPickupBase_OnOverlapStart_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemPickupBase_OnOverlapStart_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemPickupBase_OnOverlapStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemPickupBase_OnOverlapStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemPickupBase, nullptr, "OnOverlapStart", nullptr, nullptr, Z_Construct_UFunction_AItemPickupBase_OnOverlapStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemPickupBase_OnOverlapStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_AItemPickupBase_OnOverlapStart_Statics::ItemPickupBase_eventOnOverlapStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemPickupBase_OnOverlapStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemPickupBase_OnOverlapStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AItemPickupBase_OnOverlapStart_Statics::ItemPickupBase_eventOnOverlapStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AItemPickupBase_OnOverlapStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemPickupBase_OnOverlapStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItemPickupBase::execOnOverlapStart)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapStart(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AItemPickupBase Function OnOverlapStart

// Begin Class AItemPickupBase Function SetQuantity
struct Z_Construct_UFunction_AItemPickupBase_SetQuantity_Statics
{
	struct ItemPickupBase_eventSetQuantity_Parms
	{
		int32 NewQuantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System|Item Pickup" },
		{ "ModuleRelativePath", "Public/ItemPickupBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewQuantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AItemPickupBase_SetQuantity_Statics::NewProp_NewQuantity = { "NewQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemPickupBase_eventSetQuantity_Parms, NewQuantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemPickupBase_SetQuantity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemPickupBase_SetQuantity_Statics::NewProp_NewQuantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemPickupBase_SetQuantity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemPickupBase_SetQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemPickupBase, nullptr, "SetQuantity", nullptr, nullptr, Z_Construct_UFunction_AItemPickupBase_SetQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemPickupBase_SetQuantity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AItemPickupBase_SetQuantity_Statics::ItemPickupBase_eventSetQuantity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemPickupBase_SetQuantity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemPickupBase_SetQuantity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AItemPickupBase_SetQuantity_Statics::ItemPickupBase_eventSetQuantity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AItemPickupBase_SetQuantity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemPickupBase_SetQuantity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItemPickupBase::execSetQuantity)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewQuantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetQuantity(Z_Param_NewQuantity);
	P_NATIVE_END;
}
// End Class AItemPickupBase Function SetQuantity

// Begin Class AItemPickupBase
void AItemPickupBase::StaticRegisterNativesAItemPickupBase()
{
	UClass* Class = AItemPickupBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetItemData", &AItemPickupBase::execGetItemData },
		{ "GetMesh", &AItemPickupBase::execGetMesh },
		{ "GetQuantity", &AItemPickupBase::execGetQuantity },
		{ "OnOverlapStart", &AItemPickupBase::execOnOverlapStart },
		{ "SetQuantity", &AItemPickupBase::execSetQuantity },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItemPickupBase);
UClass* Z_Construct_UClass_AItemPickupBase_NoRegister()
{
	return AItemPickupBase::StaticClass();
}
struct Z_Construct_UClass_AItemPickupBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ItemPickupBase.h" },
		{ "ModuleRelativePath", "Public/ItemPickupBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDataRow_MetaData[] = {
		{ "Category", "Item Pickup|Item Data" },
		{ "ModuleRelativePath", "Public/ItemPickupBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Item Pickup|Item Data" },
		{ "ModuleRelativePath", "Public/ItemPickupBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Item Pickup|Item Data" },
		{ "ModuleRelativePath", "Public/ItemPickupBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Item Pickup|Functionality" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//NOTE: Will automatically take the default mesh from the assigned Item Data if no static mesh is added to the component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ItemPickupBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NOTE: Will automatically take the default mesh from the assigned Item Data if no static mesh is added to the component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Item Pickup|Functionality" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ItemPickupBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeUntilEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Item Pickup|Functionality" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Actors are unable to pick up the item until after this duration ends. Timer starts on item instantiation.\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemPickupBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actors are unable to pick up the item until after this duration ends. Timer starts on item instantiation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickUpMagnetismIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Item Pickup|Functionality" },
		{ "ModuleRelativePath", "Public/ItemPickupBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryToAddTo_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ItemPickupBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDataRow;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeUntilEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PickUpMagnetismIntensity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryToAddTo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AItemPickupBase_GetItemData, "GetItemData" }, // 45556763
		{ &Z_Construct_UFunction_AItemPickupBase_GetMesh, "GetMesh" }, // 2305375204
		{ &Z_Construct_UFunction_AItemPickupBase_GetQuantity, "GetQuantity" }, // 1668343752
		{ &Z_Construct_UFunction_AItemPickupBase_OnOverlapStart, "OnOverlapStart" }, // 2041955387
		{ &Z_Construct_UFunction_AItemPickupBase_SetQuantity, "SetQuantity" }, // 231972879
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemPickupBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AItemPickupBase_Statics::NewProp_ItemDataRow = { "ItemDataRow", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemPickupBase, ItemDataRow), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDataRow_MetaData), NewProp_ItemDataRow_MetaData) }; // 1360917958
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AItemPickupBase_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemPickupBase, ItemData), Z_Construct_UScriptStruct_FInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) }; // 1502975924
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AItemPickupBase_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemPickupBase, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemPickupBase_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x014400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemPickupBase, ItemMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemMesh_MetaData), NewProp_ItemMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemPickupBase_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x014400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemPickupBase, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereComponent_MetaData), NewProp_SphereComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AItemPickupBase_Statics::NewProp_TimeUntilEnabled = { "TimeUntilEnabled", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemPickupBase, TimeUntilEnabled), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeUntilEnabled_MetaData), NewProp_TimeUntilEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AItemPickupBase_Statics::NewProp_PickUpMagnetismIntensity = { "PickUpMagnetismIntensity", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemPickupBase, PickUpMagnetismIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickUpMagnetismIntensity_MetaData), NewProp_PickUpMagnetismIntensity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemPickupBase_Statics::NewProp_InventoryToAddTo = { "InventoryToAddTo", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemPickupBase, InventoryToAddTo), Z_Construct_UClass_UPlayerInventoryBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryToAddTo_MetaData), NewProp_InventoryToAddTo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItemPickupBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemPickupBase_Statics::NewProp_ItemDataRow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemPickupBase_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemPickupBase_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemPickupBase_Statics::NewProp_ItemMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemPickupBase_Statics::NewProp_SphereComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemPickupBase_Statics::NewProp_TimeUntilEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemPickupBase_Statics::NewProp_PickUpMagnetismIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemPickupBase_Statics::NewProp_InventoryToAddTo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemPickupBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AItemPickupBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemPickupBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemPickupBase_Statics::ClassParams = {
	&AItemPickupBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AItemPickupBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AItemPickupBase_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemPickupBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AItemPickupBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItemPickupBase()
{
	if (!Z_Registration_Info_UClass_AItemPickupBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemPickupBase.OuterSingleton, Z_Construct_UClass_AItemPickupBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItemPickupBase.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UClass* StaticClass<AItemPickupBase>()
{
	return AItemPickupBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItemPickupBase);
AItemPickupBase::~AItemPickupBase() {}
// End Class AItemPickupBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_ItemPickupBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItemPickupBase, AItemPickupBase::StaticClass, TEXT("AItemPickupBase"), &Z_Registration_Info_UClass_AItemPickupBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemPickupBase), 3566269040U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_ItemPickupBase_h_149788333(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_ItemPickupBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_ItemPickupBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
