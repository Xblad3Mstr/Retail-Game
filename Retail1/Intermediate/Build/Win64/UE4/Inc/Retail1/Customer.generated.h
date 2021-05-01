// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RETAIL1_Customer_generated_h
#error "Customer.generated.h already included, missing '#pragma once' in Customer.h"
#endif
#define RETAIL1_Customer_generated_h

#define Retail1_Source_Retail1_Public_Customer_h_12_SPARSE_DATA
#define Retail1_Source_Retail1_Public_Customer_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetItem); \
	DECLARE_FUNCTION(execFailCustomer); \
	DECLARE_FUNCTION(execFinishWrongCustomer); \
	DECLARE_FUNCTION(execFinishCustomer); \
	DECLARE_FUNCTION(execResumeTimer); \
	DECLARE_FUNCTION(execPauseTimer); \
	DECLARE_FUNCTION(execStartTimer); \
	DECLARE_FUNCTION(execUpdateProgress);


#define Retail1_Source_Retail1_Public_Customer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetItem); \
	DECLARE_FUNCTION(execFailCustomer); \
	DECLARE_FUNCTION(execFinishWrongCustomer); \
	DECLARE_FUNCTION(execFinishCustomer); \
	DECLARE_FUNCTION(execResumeTimer); \
	DECLARE_FUNCTION(execPauseTimer); \
	DECLARE_FUNCTION(execStartTimer); \
	DECLARE_FUNCTION(execUpdateProgress);


#define Retail1_Source_Retail1_Public_Customer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACustomer(); \
	friend struct Z_Construct_UClass_ACustomer_Statics; \
public: \
	DECLARE_CLASS(ACustomer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Retail1"), NO_API) \
	DECLARE_SERIALIZER(ACustomer)


#define Retail1_Source_Retail1_Public_Customer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACustomer(); \
	friend struct Z_Construct_UClass_ACustomer_Statics; \
public: \
	DECLARE_CLASS(ACustomer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Retail1"), NO_API) \
	DECLARE_SERIALIZER(ACustomer)


#define Retail1_Source_Retail1_Public_Customer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACustomer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACustomer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomer(ACustomer&&); \
	NO_API ACustomer(const ACustomer&); \
public:


#define Retail1_Source_Retail1_Public_Customer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomer(ACustomer&&); \
	NO_API ACustomer(const ACustomer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACustomer)


#define Retail1_Source_Retail1_Public_Customer_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__timer() { return STRUCT_OFFSET(ACustomer, timer); } \
	FORCEINLINE static uint32 __PPO__timeToComplete() { return STRUCT_OFFSET(ACustomer, timeToComplete); } \
	FORCEINLINE static uint32 __PPO__progress() { return STRUCT_OFFSET(ACustomer, progress); } \
	FORCEINLINE static uint32 __PPO__item() { return STRUCT_OFFSET(ACustomer, item); } \
	FORCEINLINE static uint32 __PPO__timerStarted() { return STRUCT_OFFSET(ACustomer, timerStarted); } \
	FORCEINLINE static uint32 __PPO__timerPaused() { return STRUCT_OFFSET(ACustomer, timerPaused); }


#define Retail1_Source_Retail1_Public_Customer_h_9_PROLOG
#define Retail1_Source_Retail1_Public_Customer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Retail1_Source_Retail1_Public_Customer_h_12_PRIVATE_PROPERTY_OFFSET \
	Retail1_Source_Retail1_Public_Customer_h_12_SPARSE_DATA \
	Retail1_Source_Retail1_Public_Customer_h_12_RPC_WRAPPERS \
	Retail1_Source_Retail1_Public_Customer_h_12_INCLASS \
	Retail1_Source_Retail1_Public_Customer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Retail1_Source_Retail1_Public_Customer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Retail1_Source_Retail1_Public_Customer_h_12_PRIVATE_PROPERTY_OFFSET \
	Retail1_Source_Retail1_Public_Customer_h_12_SPARSE_DATA \
	Retail1_Source_Retail1_Public_Customer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Retail1_Source_Retail1_Public_Customer_h_12_INCLASS_NO_PURE_DECLS \
	Retail1_Source_Retail1_Public_Customer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RETAIL1_API UClass* StaticClass<class ACustomer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Retail1_Source_Retail1_Public_Customer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
