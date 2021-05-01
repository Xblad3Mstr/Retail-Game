// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef RETAIL1_CustomerSpawner_generated_h
#error "CustomerSpawner.generated.h already included, missing '#pragma once' in CustomerSpawner.h"
#endif
#define RETAIL1_CustomerSpawner_generated_h

#define Retail1_Source_Retail1_Public_CustomerSpawner_h_12_SPARSE_DATA
#define Retail1_Source_Retail1_Public_CustomerSpawner_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSpawningActive); \
	DECLARE_FUNCTION(execGetRandomPointInVolume);


#define Retail1_Source_Retail1_Public_CustomerSpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSpawningActive); \
	DECLARE_FUNCTION(execGetRandomPointInVolume);


#define Retail1_Source_Retail1_Public_CustomerSpawner_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACustomerSpawner(); \
	friend struct Z_Construct_UClass_ACustomerSpawner_Statics; \
public: \
	DECLARE_CLASS(ACustomerSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Retail1"), NO_API) \
	DECLARE_SERIALIZER(ACustomerSpawner)


#define Retail1_Source_Retail1_Public_CustomerSpawner_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACustomerSpawner(); \
	friend struct Z_Construct_UClass_ACustomerSpawner_Statics; \
public: \
	DECLARE_CLASS(ACustomerSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Retail1"), NO_API) \
	DECLARE_SERIALIZER(ACustomerSpawner)


#define Retail1_Source_Retail1_Public_CustomerSpawner_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACustomerSpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACustomerSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomerSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomerSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomerSpawner(ACustomerSpawner&&); \
	NO_API ACustomerSpawner(const ACustomerSpawner&); \
public:


#define Retail1_Source_Retail1_Public_CustomerSpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomerSpawner(ACustomerSpawner&&); \
	NO_API ACustomerSpawner(const ACustomerSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomerSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomerSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACustomerSpawner)


#define Retail1_Source_Retail1_Public_CustomerSpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WhatToSpawn() { return STRUCT_OFFSET(ACustomerSpawner, WhatToSpawn); } \
	FORCEINLINE static uint32 __PPO__SpawnDelayRangeLow() { return STRUCT_OFFSET(ACustomerSpawner, SpawnDelayRangeLow); } \
	FORCEINLINE static uint32 __PPO__SpawnDelayRangeHigh() { return STRUCT_OFFSET(ACustomerSpawner, SpawnDelayRangeHigh); } \
	FORCEINLINE static uint32 __PPO__WhereToSpawn() { return STRUCT_OFFSET(ACustomerSpawner, WhereToSpawn); }


#define Retail1_Source_Retail1_Public_CustomerSpawner_h_9_PROLOG
#define Retail1_Source_Retail1_Public_CustomerSpawner_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Retail1_Source_Retail1_Public_CustomerSpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	Retail1_Source_Retail1_Public_CustomerSpawner_h_12_SPARSE_DATA \
	Retail1_Source_Retail1_Public_CustomerSpawner_h_12_RPC_WRAPPERS \
	Retail1_Source_Retail1_Public_CustomerSpawner_h_12_INCLASS \
	Retail1_Source_Retail1_Public_CustomerSpawner_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Retail1_Source_Retail1_Public_CustomerSpawner_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Retail1_Source_Retail1_Public_CustomerSpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	Retail1_Source_Retail1_Public_CustomerSpawner_h_12_SPARSE_DATA \
	Retail1_Source_Retail1_Public_CustomerSpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Retail1_Source_Retail1_Public_CustomerSpawner_h_12_INCLASS_NO_PURE_DECLS \
	Retail1_Source_Retail1_Public_CustomerSpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RETAIL1_API UClass* StaticClass<class ACustomerSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Retail1_Source_Retail1_Public_CustomerSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
