// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EStateOfPlay : uint8;
#ifdef RETAIL1_Retail1GameMode_generated_h
#error "Retail1GameMode.generated.h already included, missing '#pragma once' in Retail1GameMode.h"
#endif
#define RETAIL1_Retail1GameMode_generated_h

#define Retail1_Source_Retail1_Retail1GameMode_h_24_SPARSE_DATA
#define Retail1_Source_Retail1_Retail1GameMode_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetProgress); \
	DECLARE_FUNCTION(execFinishDay); \
	DECLARE_FUNCTION(execResetTimer); \
	DECLARE_FUNCTION(execResumeTimer); \
	DECLARE_FUNCTION(execPauseTimer); \
	DECLARE_FUNCTION(execStartTimer); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execUpdateProgress);


#define Retail1_Source_Retail1_Retail1GameMode_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetProgress); \
	DECLARE_FUNCTION(execFinishDay); \
	DECLARE_FUNCTION(execResetTimer); \
	DECLARE_FUNCTION(execResumeTimer); \
	DECLARE_FUNCTION(execPauseTimer); \
	DECLARE_FUNCTION(execStartTimer); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execUpdateProgress);


#define Retail1_Source_Retail1_Retail1GameMode_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARetail1GameMode(); \
	friend struct Z_Construct_UClass_ARetail1GameMode_Statics; \
public: \
	DECLARE_CLASS(ARetail1GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Retail1"), RETAIL1_API) \
	DECLARE_SERIALIZER(ARetail1GameMode)


#define Retail1_Source_Retail1_Retail1GameMode_h_24_INCLASS \
private: \
	static void StaticRegisterNativesARetail1GameMode(); \
	friend struct Z_Construct_UClass_ARetail1GameMode_Statics; \
public: \
	DECLARE_CLASS(ARetail1GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Retail1"), RETAIL1_API) \
	DECLARE_SERIALIZER(ARetail1GameMode)


#define Retail1_Source_Retail1_Retail1GameMode_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RETAIL1_API ARetail1GameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARetail1GameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RETAIL1_API, ARetail1GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARetail1GameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	RETAIL1_API ARetail1GameMode(ARetail1GameMode&&); \
	RETAIL1_API ARetail1GameMode(const ARetail1GameMode&); \
public:


#define Retail1_Source_Retail1_Retail1GameMode_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	RETAIL1_API ARetail1GameMode(ARetail1GameMode&&); \
	RETAIL1_API ARetail1GameMode(const ARetail1GameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RETAIL1_API, ARetail1GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARetail1GameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARetail1GameMode)


#define Retail1_Source_Retail1_Retail1GameMode_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__timer() { return STRUCT_OFFSET(ARetail1GameMode, timer); } \
	FORCEINLINE static uint32 __PPO__timeToComplete() { return STRUCT_OFFSET(ARetail1GameMode, timeToComplete); } \
	FORCEINLINE static uint32 __PPO__progress() { return STRUCT_OFFSET(ARetail1GameMode, progress); } \
	FORCEINLINE static uint32 __PPO__timerStarted() { return STRUCT_OFFSET(ARetail1GameMode, timerStarted); } \
	FORCEINLINE static uint32 __PPO__timerPaused() { return STRUCT_OFFSET(ARetail1GameMode, timerPaused); } \
	FORCEINLINE static uint32 __PPO__HUDWidgetClass() { return STRUCT_OFFSET(ARetail1GameMode, HUDWidgetClass); } \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(ARetail1GameMode, CurrentWidget); }


#define Retail1_Source_Retail1_Retail1GameMode_h_21_PROLOG
#define Retail1_Source_Retail1_Retail1GameMode_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Retail1_Source_Retail1_Retail1GameMode_h_24_PRIVATE_PROPERTY_OFFSET \
	Retail1_Source_Retail1_Retail1GameMode_h_24_SPARSE_DATA \
	Retail1_Source_Retail1_Retail1GameMode_h_24_RPC_WRAPPERS \
	Retail1_Source_Retail1_Retail1GameMode_h_24_INCLASS \
	Retail1_Source_Retail1_Retail1GameMode_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Retail1_Source_Retail1_Retail1GameMode_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Retail1_Source_Retail1_Retail1GameMode_h_24_PRIVATE_PROPERTY_OFFSET \
	Retail1_Source_Retail1_Retail1GameMode_h_24_SPARSE_DATA \
	Retail1_Source_Retail1_Retail1GameMode_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Retail1_Source_Retail1_Retail1GameMode_h_24_INCLASS_NO_PURE_DECLS \
	Retail1_Source_Retail1_Retail1GameMode_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RETAIL1_API UClass* StaticClass<class ARetail1GameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Retail1_Source_Retail1_Retail1GameMode_h


#define FOREACH_ENUM_ESTATEOFPLAY(op) \
	op(EStateOfPlay::EPlaying) \
	op(EStateOfPlay::EPaused) \
	op(EStateOfPlay::EEndOfDay) \
	op(EStateOfPlay::EUnknown) 

enum class EStateOfPlay : uint8;
template<> RETAIL1_API UEnum* StaticEnum<EStateOfPlay>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
