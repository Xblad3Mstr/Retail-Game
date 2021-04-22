// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RETAIL1_Coworker_generated_h
#error "Coworker.generated.h already included, missing '#pragma once' in Coworker.h"
#endif
#define RETAIL1_Coworker_generated_h

#define Retail1_Source_Retail1_Public_Coworker_h_12_SPARSE_DATA
#define Retail1_Source_Retail1_Public_Coworker_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCanLoot); \
	DECLARE_FUNCTION(execGetCanLoot); \
	DECLARE_FUNCTION(execSetPettyCash); \
	DECLARE_FUNCTION(execGetPettyCash);


#define Retail1_Source_Retail1_Public_Coworker_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCanLoot); \
	DECLARE_FUNCTION(execGetCanLoot); \
	DECLARE_FUNCTION(execSetPettyCash); \
	DECLARE_FUNCTION(execGetPettyCash);


#define Retail1_Source_Retail1_Public_Coworker_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACoworker(); \
	friend struct Z_Construct_UClass_ACoworker_Statics; \
public: \
	DECLARE_CLASS(ACoworker, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Retail1"), NO_API) \
	DECLARE_SERIALIZER(ACoworker)


#define Retail1_Source_Retail1_Public_Coworker_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACoworker(); \
	friend struct Z_Construct_UClass_ACoworker_Statics; \
public: \
	DECLARE_CLASS(ACoworker, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Retail1"), NO_API) \
	DECLARE_SERIALIZER(ACoworker)


#define Retail1_Source_Retail1_Public_Coworker_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACoworker(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACoworker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoworker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoworker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACoworker(ACoworker&&); \
	NO_API ACoworker(const ACoworker&); \
public:


#define Retail1_Source_Retail1_Public_Coworker_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACoworker(ACoworker&&); \
	NO_API ACoworker(const ACoworker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoworker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoworker); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACoworker)


#define Retail1_Source_Retail1_Public_Coworker_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__canBeLooted() { return STRUCT_OFFSET(ACoworker, canBeLooted); } \
	FORCEINLINE static uint32 __PPO__pettyCash() { return STRUCT_OFFSET(ACoworker, pettyCash); }


#define Retail1_Source_Retail1_Public_Coworker_h_9_PROLOG
#define Retail1_Source_Retail1_Public_Coworker_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Retail1_Source_Retail1_Public_Coworker_h_12_PRIVATE_PROPERTY_OFFSET \
	Retail1_Source_Retail1_Public_Coworker_h_12_SPARSE_DATA \
	Retail1_Source_Retail1_Public_Coworker_h_12_RPC_WRAPPERS \
	Retail1_Source_Retail1_Public_Coworker_h_12_INCLASS \
	Retail1_Source_Retail1_Public_Coworker_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Retail1_Source_Retail1_Public_Coworker_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Retail1_Source_Retail1_Public_Coworker_h_12_PRIVATE_PROPERTY_OFFSET \
	Retail1_Source_Retail1_Public_Coworker_h_12_SPARSE_DATA \
	Retail1_Source_Retail1_Public_Coworker_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Retail1_Source_Retail1_Public_Coworker_h_12_INCLASS_NO_PURE_DECLS \
	Retail1_Source_Retail1_Public_Coworker_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RETAIL1_API UClass* StaticClass<class ACoworker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Retail1_Source_Retail1_Public_Coworker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
