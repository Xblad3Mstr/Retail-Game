// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RETAIL1_Cleanup_generated_h
#error "Cleanup.generated.h already included, missing '#pragma once' in Cleanup.h"
#endif
#define RETAIL1_Cleanup_generated_h

#define Retail1_Source_Retail1_Public_Cleanup_h_12_SPARSE_DATA
#define Retail1_Source_Retail1_Public_Cleanup_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFinishCleanup); \
	DECLARE_FUNCTION(execResetTimer); \
	DECLARE_FUNCTION(execResumeTimer); \
	DECLARE_FUNCTION(execPauseTimer); \
	DECLARE_FUNCTION(execStartTimer); \
	DECLARE_FUNCTION(execUpdateProgress);


#define Retail1_Source_Retail1_Public_Cleanup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFinishCleanup); \
	DECLARE_FUNCTION(execResetTimer); \
	DECLARE_FUNCTION(execResumeTimer); \
	DECLARE_FUNCTION(execPauseTimer); \
	DECLARE_FUNCTION(execStartTimer); \
	DECLARE_FUNCTION(execUpdateProgress);


#define Retail1_Source_Retail1_Public_Cleanup_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACleanup(); \
	friend struct Z_Construct_UClass_ACleanup_Statics; \
public: \
	DECLARE_CLASS(ACleanup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Retail1"), NO_API) \
	DECLARE_SERIALIZER(ACleanup)


#define Retail1_Source_Retail1_Public_Cleanup_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACleanup(); \
	friend struct Z_Construct_UClass_ACleanup_Statics; \
public: \
	DECLARE_CLASS(ACleanup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Retail1"), NO_API) \
	DECLARE_SERIALIZER(ACleanup)


#define Retail1_Source_Retail1_Public_Cleanup_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACleanup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACleanup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACleanup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACleanup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACleanup(ACleanup&&); \
	NO_API ACleanup(const ACleanup&); \
public:


#define Retail1_Source_Retail1_Public_Cleanup_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACleanup(ACleanup&&); \
	NO_API ACleanup(const ACleanup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACleanup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACleanup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACleanup)


#define Retail1_Source_Retail1_Public_Cleanup_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__timer() { return STRUCT_OFFSET(ACleanup, timer); } \
	FORCEINLINE static uint32 __PPO__timeToComplete() { return STRUCT_OFFSET(ACleanup, timeToComplete); } \
	FORCEINLINE static uint32 __PPO__progress() { return STRUCT_OFFSET(ACleanup, progress); } \
	FORCEINLINE static uint32 __PPO__timerStarted() { return STRUCT_OFFSET(ACleanup, timerStarted); } \
	FORCEINLINE static uint32 __PPO__timerPaused() { return STRUCT_OFFSET(ACleanup, timerPaused); }


#define Retail1_Source_Retail1_Public_Cleanup_h_9_PROLOG
#define Retail1_Source_Retail1_Public_Cleanup_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Retail1_Source_Retail1_Public_Cleanup_h_12_PRIVATE_PROPERTY_OFFSET \
	Retail1_Source_Retail1_Public_Cleanup_h_12_SPARSE_DATA \
	Retail1_Source_Retail1_Public_Cleanup_h_12_RPC_WRAPPERS \
	Retail1_Source_Retail1_Public_Cleanup_h_12_INCLASS \
	Retail1_Source_Retail1_Public_Cleanup_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Retail1_Source_Retail1_Public_Cleanup_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Retail1_Source_Retail1_Public_Cleanup_h_12_PRIVATE_PROPERTY_OFFSET \
	Retail1_Source_Retail1_Public_Cleanup_h_12_SPARSE_DATA \
	Retail1_Source_Retail1_Public_Cleanup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Retail1_Source_Retail1_Public_Cleanup_h_12_INCLASS_NO_PURE_DECLS \
	Retail1_Source_Retail1_Public_Cleanup_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RETAIL1_API UClass* StaticClass<class ACleanup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Retail1_Source_Retail1_Public_Cleanup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
