// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInventoryItemData;
#ifdef INVENTORYSYSTEM_InventoryItem_generated_h
#error "InventoryItem.generated.h already included, missing '#pragma once' in InventoryItem.h"
#endif
#define INVENTORYSYSTEM_InventoryItem_generated_h

#define FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryItem_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetQuantity); \
	DECLARE_FUNCTION(execGetQuantity); \
	DECLARE_FUNCTION(execGetItemData);


#define FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryItem_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryItem(); \
	friend struct Z_Construct_UClass_UInventoryItem_Statics; \
public: \
	DECLARE_CLASS(UInventoryItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(UInventoryItem)


#define FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryItem_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryItem(UInventoryItem&&); \
	UInventoryItem(const UInventoryItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryItem) \
	NO_API virtual ~UInventoryItem();


#define FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryItem_h_10_PROLOG
#define FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryItem_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryItem_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryItem_h_31_INCLASS_NO_PURE_DECLS \
	FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryItem_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYSYSTEM_API UClass* StaticClass<class UInventoryItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
