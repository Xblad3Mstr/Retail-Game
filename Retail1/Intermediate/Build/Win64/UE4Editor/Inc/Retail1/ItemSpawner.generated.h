// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RETAIL1_ItemSpawner_generated_h
#error "ItemSpawner.generated.h already included, missing '#pragma once' in ItemSpawner.h"
#endif
#define RETAIL1_ItemSpawner_generated_h

#define Retail1_Source_Retail1_Public_ItemSpawner_h_12_SPARSE_DATA
#define Retail1_Source_Retail1_Public_ItemSpawner_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFinishItem); \
	DECLARE_FUNCTION(execResetTimer); \
	DECLARE_FUNCTION(execResumeTimer); \
	DECLARE_FUNCTION(execPauseTimer); \
	DECLARE_FUNCTION(execStartTimer); \
	DECLARE_FUNCTION(execSetSpawningActive); \
	DECLARE_FUNCTION(execUpdateProgress);


#define Retail1_Source_Retail1_Public_ItemSpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFinishItem); \
	DECLARE_FUNCTION(execResetTimer); \
	DECLARE_FUNCTION(execResumeTimer); \
	DECLARE_FUNCTION(execPauseTimer); \
	DECLARE_FUNCTION(execStartTimer); \
	DECLARE_FUNCTION(execSetSpawningActive); \
	DECLARE_FUNCTION(execUpdateProgress);


#define Retail1_Source_Retail1_Public_ItemSpawner_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemSpawner(); \
	friend struct Z_Construct_UClass_AItemSpawner_Statics; \
public: \
	DECLARE_CLASS(AItemSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Retail1"), NO_API) \
	DECLARE_SERIALIZER(AItemSpawner)


#define Retail1_Source_Retail1_Public_ItemSpawner_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAItemSpawner(); \
	friend struct Z_Construct_UClass_AItemSpawner_Statics; \
public: \
	DECLARE_CLASS(AItemSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Retail1"), NO_API) \
	DECLARE_SERIALIZER(AItemSpawner)


#define Retail1_Source_Retail1_Public_ItemSpawner_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItemSpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItemSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemSpawner(AItemSpawner&&); \
	NO_API AItemSpawner(const AItemSpawner&); \
public:


#define Retail1_Source_Retail1_Public_ItemSpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemSpawner(AItemSpawner&&); \
	NO_API AItemSpawner(const AItemSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItemSpawner)


#define Retail1_Source_Retail1_Public_ItemSpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__timer() { return STRUCT_OFFSET(AItemSpawner, timer); } \
	FORCEINLINE static uint32 __PPO__timeToComplete() { return STRUCT_OFFSET(AItemSpawner, timeToComplete); } \
	FORCEINLINE static uint32 __PPO__progress() { return STRUCT_OFFSET(AItemSpawner, progress); } \
	FORCEINLINE static uint32 __PPO__timerStarted() { return STRUCT_OFFSET(AItemSpawner, timerStarted); } \
	FORCEINLINE static uint32 __PPO__timerPaused() { return STRUCT_OFFSET(AItemSpawner, timerPaused); } \
	FORCEINLINE static uint32 __PPO__ItemInSpawner() { return STRUCT_OFFSET(AItemSpawner, ItemInSpawner); } \
	FORCEINLINE static uint32 __PPO__SpawnDelayRangeLow() { return STRUCT_OFFSET(AItemSpawner, SpawnDelayRangeLow); } \
	FORCEINLINE static uint32 __PPO__SpawnDelayRangeHigh() { return STRUCT_OFFSET(AItemSpawner, SpawnDelayRangeHigh); } \
	FORCEINLINE static uint32 __PPO__WhereToSpawn() { return STRUCT_OFFSET(AItemSpawner, WhereToSpawn); }


#define Retail1_Source_Retail1_Public_ItemSpawner_h_9_PROLOG
#define Retail1_Source_Retail1_Public_ItemSpawner_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Retail1_Source_Retail1_Public_ItemSpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	Retail1_Source_Retail1_Public_ItemSpawner_h_12_SPARSE_DATA \
	Retail1_Source_Retail1_Public_ItemSpawner_h_12_RPC_WRAPPERS \
	Retail1_Source_Retail1_Public_ItemSpawner_h_12_INCLASS \
	Retail1_Source_Retail1_Public_ItemSpawner_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Retail1_Source_Retail1_Public_ItemSpawner_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Retail1_Source_Retail1_Public_ItemSpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	Retail1_Source_Retail1_Public_ItemSpawner_h_12_SPARSE_DATA \
	Retail1_Source_Retail1_Public_ItemSpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Retail1_Source_Retail1_Public_ItemSpawner_h_12_INCLASS_NO_PURE_DECLS \
	Retail1_Source_Retail1_Public_ItemSpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RETAIL1_API UClass* StaticClass<class AItemSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Retail1_Source_Retail1_Public_ItemSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
