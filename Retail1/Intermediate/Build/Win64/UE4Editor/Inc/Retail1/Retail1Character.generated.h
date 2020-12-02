// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RETAIL1_Retail1Character_generated_h
#error "Retail1Character.generated.h already included, missing '#pragma once' in Retail1Character.h"
#endif
#define RETAIL1_Retail1Character_generated_h

#define Retail1_Source_Retail1_Retail1Character_h_14_SPARSE_DATA
#define Retail1_Source_Retail1_Retail1Character_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execadjustDailyPoints); \
	DECLARE_FUNCTION(execadjustEmployeeLevel); \
	DECLARE_FUNCTION(execStopInteract); \
	DECLARE_FUNCTION(execInteract);


#define Retail1_Source_Retail1_Retail1Character_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execadjustDailyPoints); \
	DECLARE_FUNCTION(execadjustEmployeeLevel); \
	DECLARE_FUNCTION(execStopInteract); \
	DECLARE_FUNCTION(execInteract);


#define Retail1_Source_Retail1_Retail1Character_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARetail1Character(); \
	friend struct Z_Construct_UClass_ARetail1Character_Statics; \
public: \
	DECLARE_CLASS(ARetail1Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Retail1"), NO_API) \
	DECLARE_SERIALIZER(ARetail1Character)


#define Retail1_Source_Retail1_Retail1Character_h_14_INCLASS \
private: \
	static void StaticRegisterNativesARetail1Character(); \
	friend struct Z_Construct_UClass_ARetail1Character_Statics; \
public: \
	DECLARE_CLASS(ARetail1Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Retail1"), NO_API) \
	DECLARE_SERIALIZER(ARetail1Character)


#define Retail1_Source_Retail1_Retail1Character_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARetail1Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARetail1Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARetail1Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARetail1Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARetail1Character(ARetail1Character&&); \
	NO_API ARetail1Character(const ARetail1Character&); \
public:


#define Retail1_Source_Retail1_Retail1Character_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARetail1Character(ARetail1Character&&); \
	NO_API ARetail1Character(const ARetail1Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARetail1Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARetail1Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARetail1Character)


#define Retail1_Source_Retail1_Retail1Character_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ARetail1Character, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ARetail1Character, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__employeeLevel() { return STRUCT_OFFSET(ARetail1Character, employeeLevel); } \
	FORCEINLINE static uint32 __PPO__task1Timer() { return STRUCT_OFFSET(ARetail1Character, task1Timer); } \
	FORCEINLINE static uint32 __PPO__shiftTimer() { return STRUCT_OFFSET(ARetail1Character, shiftTimer); } \
	FORCEINLINE static uint32 __PPO__canMove() { return STRUCT_OFFSET(ARetail1Character, canMove); } \
	FORCEINLINE static uint32 __PPO__currentCleanup() { return STRUCT_OFFSET(ARetail1Character, currentCleanup); } \
	FORCEINLINE static uint32 __PPO__collectionSphere() { return STRUCT_OFFSET(ARetail1Character, collectionSphere); }


#define Retail1_Source_Retail1_Retail1Character_h_11_PROLOG
#define Retail1_Source_Retail1_Retail1Character_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Retail1_Source_Retail1_Retail1Character_h_14_PRIVATE_PROPERTY_OFFSET \
	Retail1_Source_Retail1_Retail1Character_h_14_SPARSE_DATA \
	Retail1_Source_Retail1_Retail1Character_h_14_RPC_WRAPPERS \
	Retail1_Source_Retail1_Retail1Character_h_14_INCLASS \
	Retail1_Source_Retail1_Retail1Character_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Retail1_Source_Retail1_Retail1Character_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Retail1_Source_Retail1_Retail1Character_h_14_PRIVATE_PROPERTY_OFFSET \
	Retail1_Source_Retail1_Retail1Character_h_14_SPARSE_DATA \
	Retail1_Source_Retail1_Retail1Character_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Retail1_Source_Retail1_Retail1Character_h_14_INCLASS_NO_PURE_DECLS \
	Retail1_Source_Retail1_Retail1Character_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RETAIL1_API UClass* StaticClass<class ARetail1Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Retail1_Source_Retail1_Retail1Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
