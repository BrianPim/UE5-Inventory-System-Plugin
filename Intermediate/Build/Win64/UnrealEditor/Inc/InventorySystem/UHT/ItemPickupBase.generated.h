// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemPickupBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
class UStaticMeshComponent;
struct FHitResult;
struct FInventoryItemData;
#ifdef INVENTORYSYSTEM_ItemPickupBase_generated_h
#error "ItemPickupBase.generated.h already included, missing '#pragma once' in ItemPickupBase.h"
#endif
#define INVENTORYSYSTEM_ItemPickupBase_generated_h

#define FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_ItemPickupBase_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapStart); \
	DECLARE_FUNCTION(execGetMesh); \
	DECLARE_FUNCTION(execSetQuantity); \
	DECLARE_FUNCTION(execGetQuantity); \
	DECLARE_FUNCTION(execGetItemData);


#define FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_ItemPickupBase_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemPickupBase(); \
	friend struct Z_Construct_UClass_AItemPickupBase_Statics; \
public: \
	DECLARE_CLASS(AItemPickupBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(AItemPickupBase)


#define FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_ItemPickupBase_h_78_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AItemPickupBase(AItemPickupBase&&); \
	AItemPickupBase(const AItemPickupBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemPickupBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemPickupBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AItemPickupBase) \
	NO_API virtual ~AItemPickupBase();


#define FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_ItemPickupBase_h_14_PROLOG
#define FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_ItemPickupBase_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_ItemPickupBase_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_ItemPickupBase_h_78_INCLASS_NO_PURE_DECLS \
	FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_ItemPickupBase_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYSYSTEM_API UClass* StaticClass<class AItemPickupBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_ItemPickupBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
