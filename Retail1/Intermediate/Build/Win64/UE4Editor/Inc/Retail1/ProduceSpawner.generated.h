// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RETAIL1_ProduceSpawner_generated_h
#error "ProduceSpawner.generated.h already included, missing '#pragma once' in ProduceSpawner.h"
#endif
#define RETAIL1_ProduceSpawner_generated_h

#define Retail1_Source_Retail1_Public_ProduceSpawner_h_12_SPARSE_DATA
#define Retail1_Source_Retail1_Public_ProduceSpawner_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetItem); \
	DECLARE_FUNCTION(execFinishProduce); \
	DECLARE_FUNCTION(execResetTimer); \
	DECLARE_FUNCTION(execResumeTimer); \
	DECLARE_FUNCTION(execPauseTimer); \
	DECLARE_FUNCTION(execStartTimer); \
	DECLARE_FUNCTION(execSetSpawningActive); \
	DECLARE_FUNCTION(execUpdateProgress);


#define Retail1_Source_Retail1_Public_ProduceSpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetItem); \
	DECLARE_FUNCTION(execFinishProduce); \
	DECLARE_FUNCTION(execResetTimer); \
	DECLARE_FUNCTION(execResumeTimer); \
	DECLARE_FUNCTION(execPauseTimer); \
	DECLARE_FUNCTION(execStartTimer); \
	DECLARE_FUNCTION(execSetSpawningActive); \
	DECLARE_FUNCTION(execUpdateProgress);


#define Retail1_Source_Retail1_Public_ProduceSpawner_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProduceSpawner(); \
	friend struct Z_Construct_UClass_AProduceSpawner_Statics; \
public: \
	DECLARE_CLASS(AProduceSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Retail1"), NO_API) \
	DECLARE_SERIALIZER(AProduceSpawner)


#define Retail1_Source_Retail1_Public_ProduceSpawner_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAProduceSpawner(); \
	friend struct Z_Construct_UClass_AProduceSpawner_Statics; \
public: \
	DECLARE_CLASS(AProduceSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Retail1"), NO_API) \
	DECLARE_SERIALIZER(AProduceSpawner)


#define Retail1_Source_Retail1_Public_ProduceSpawner_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProduceSpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProduceSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProduceSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProduceSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProduceSpawner(AProduceSpawner&&); \
	NO_API AProduceSpawner(const AProduceSpawner&); \
public:


#define Retail1_Source_Retail1_Public_ProduceSpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProduceSpawner(AProduceSpawner&&); \
	NO_API AProduceSpawner(const AProduceSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProduceSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProduceSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProduceSpawner)


#define Retail1_Source_Retail1_Public_ProduceSpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__timer() { return STRUCT_OFFSET(AProduceSpawner, timer); } \
	FORCEINLINE static uint32 __PPO__timeToComplete() { return STRUCT_OFFSET(AProduceSpawner, timeToComplete); } \
	FORCEINLINE static uint32 __PPO__progress() { return STRUCT_OFFSET(AProduceSpawner, progress); } \
	FORCEINLINE static uint32 __PPO__timerStarted() { return STRUCT_OFFSET(AProduceSpawner, timerStarted); } \
	FORCEINLINE static uint32 __PPO__timerPaused() { return STRUCT_OFFSET(AProduceSpawner, timerPaused); } \
	FORCEINLINE static uint32 __PPO__produceInSpawner() { return STRUCT_OFFSET(AProduceSpawner, produceInSpawner); } \
	FORCEINLINE static uint32 __PPO__SpawnDelayRangeLow() { return STRUCT_OFFSET(AProduceSpawner, SpawnDelayRangeLow); } \
	FORCEINLINE static uint32 __PPO__SpawnDelayRangeHigh() { return STRUCT_OFFSET(AProduceSpawner, SpawnDelayRangeHigh); } \
	FORCEINLINE static uint32 __PPO__WhereToSpawn() { return STRUCT_OFFSET(AProduceSpawner, WhereToSpawn); }


#define Retail1_Source_Retail1_Public_ProduceSpawner_h_9_PROLOG
#define Retail1_Source_Retail1_Public_ProduceSpawner_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Retail1_Source_Retail1_Public_ProduceSpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	Retail1_Source_Retail1_Public_ProduceSpawner_h_12_SPARSE_DATA \
	Retail1_Source_Retail1_Public_ProduceSpawner_h_12_RPC_WRAPPERS \
	Retail1_Source_Retail1_Public_ProduceSpawner_h_12_INCLASS \
	Retail1_Source_Retail1_Public_ProduceSpawner_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Retail1_Source_Retail1_Public_ProduceSpawner_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Retail1_Source_Retail1_Public_ProduceSpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	Retail1_Source_Retail1_Public_ProduceSpawner_h_12_SPARSE_DATA \
	Retail1_Source_Retail1_Public_ProduceSpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Retail1_Source_Retail1_Public_ProduceSpawner_h_12_INCLASS_NO_PURE_DECLS \
	Retail1_Source_Retail1_Public_ProduceSpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RETAIL1_API UClass* StaticClass<class AProduceSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Retail1_Source_Retail1_Public_ProduceSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
