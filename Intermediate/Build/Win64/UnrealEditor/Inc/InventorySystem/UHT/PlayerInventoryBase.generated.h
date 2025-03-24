// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerInventoryBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInventoryItem;
struct FInventoryItemData;
#ifdef INVENTORYSYSTEM_PlayerInventoryBase_generated_h
#error "PlayerInventoryBase.generated.h already included, missing '#pragma once' in PlayerInventoryBase.h"
#endif
#define INVENTORYSYSTEM_PlayerInventoryBase_generated_h

#define FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_PlayerInventoryBase_h_16_DELEGATE \
INVENTORYSYSTEM_API void FInventoryItemAtIndexUpdated_DelegateWrapper(const FMulticastScriptDelegate& InventoryItemAtIndexUpdated, int32 Index);


#define FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_PlayerInventoryBase_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetItemAtIndex); \
	DECLARE_FUNCTION(execGetTotalQuantityOfItem); \
	DECLARE_FUNCTION(execSwitchItemsAtIndices); \
	DECLARE_FUNCTION(execRemoveAllOfItem); \
	DECLARE_FUNCTION(execRemoveAllAtIndex); \
	DECLARE_FUNCTION(execRemoveAtIndex); \
	DECLARE_FUNCTION(execDropItemAtIndexAtLocation); \
	DECLARE_FUNCTION(execDropItemAtIndex); \
	DECLARE_FUNCTION(execIsValidPickupTarget); \
	DECLARE_FUNCTION(execTryRemoveItem); \
	DECLARE_FUNCTION(execTryAddItem);


#define FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_PlayerInventoryBase_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerInventoryBase(); \
	friend struct Z_Construct_UClass_UPlayerInventoryBase_Statics; \
public: \
	DECLARE_CLASS(UPlayerInventoryBase, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(UPlayerInventoryBase)


#define FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_PlayerInventoryBase_h_92_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerInventoryBase(UPlayerInventoryBase&&); \
	UPlayerInventoryBase(const UPlayerInventoryBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerInventoryBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInventoryBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UPlayerInventoryBase) \
	NO_API virtual ~UPlayerInventoryBase();


#define FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_PlayerInventoryBase_h_18_PROLOG
#define FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_PlayerInventoryBase_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_PlayerInventoryBase_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_PlayerInventoryBase_h_92_INCLASS_NO_PURE_DECLS \
	FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_PlayerInventoryBase_h_92_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYSYSTEM_API UClass* StaticClass<class UPlayerInventoryBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ThirdPersonExample_Plugins_InventorySystem_Source_InventorySystem_Public_PlayerInventoryBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
