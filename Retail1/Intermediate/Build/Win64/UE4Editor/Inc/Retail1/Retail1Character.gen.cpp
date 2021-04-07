// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Retail1/Retail1Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRetail1Character() {}
// Cross Module References
	RETAIL1_API UClass* Z_Construct_UClass_ARetail1Character_NoRegister();
	RETAIL1_API UClass* Z_Construct_UClass_ARetail1Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Retail1();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	RETAIL1_API UClass* Z_Construct_UClass_AItemSpawner_NoRegister();
	RETAIL1_API UClass* Z_Construct_UClass_AProduceSpawner_NoRegister();
	RETAIL1_API UClass* Z_Construct_UClass_ACustomer_NoRegister();
	RETAIL1_API UClass* Z_Construct_UClass_ACleanup_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARetail1Character::execresetCleanup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->resetCleanup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARetail1Character::execadjustDailyPoints)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_adjustment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->adjustDailyPoints(Z_Param_adjustment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARetail1Character::execadjustEmployeeLevel)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_adjustment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->adjustEmployeeLevel(Z_Param_adjustment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARetail1Character::execGetCurrentItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARetail1Character::execStopInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopInteract();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARetail1Character::execInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact();
		P_NATIVE_END;
	}
	void ARetail1Character::StaticRegisterNativesARetail1Character()
	{
		UClass* Class = ARetail1Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "adjustDailyPoints", &ARetail1Character::execadjustDailyPoints },
			{ "adjustEmployeeLevel", &ARetail1Character::execadjustEmployeeLevel },
			{ "GetCurrentItem", &ARetail1Character::execGetCurrentItem },
			{ "Interact", &ARetail1Character::execInteract },
			{ "resetCleanup", &ARetail1Character::execresetCleanup },
			{ "StopInteract", &ARetail1Character::execStopInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARetail1Character_adjustDailyPoints_Statics
	{
		struct Retail1Character_eventadjustDailyPoints_Parms
		{
			float adjustment;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_adjustment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARetail1Character_adjustDailyPoints_Statics::NewProp_adjustment = { "adjustment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Retail1Character_eventadjustDailyPoints_Parms, adjustment), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARetail1Character_adjustDailyPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARetail1Character_adjustDailyPoints_Statics::NewProp_adjustment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARetail1Character_adjustDailyPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Employee" },
		{ "Comment", "/** Adjusts the number of points for the player for current day by adjustment\n\x09@param adjustment - a float to adjust the daily points*/" },
		{ "ModuleRelativePath", "Retail1Character.h" },
		{ "ToolTip", "Adjusts the number of points for the player for current day by adjustment\n      @param adjustment - a float to adjust the daily points" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARetail1Character_adjustDailyPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARetail1Character, nullptr, "adjustDailyPoints", nullptr, nullptr, sizeof(Retail1Character_eventadjustDailyPoints_Parms), Z_Construct_UFunction_ARetail1Character_adjustDailyPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARetail1Character_adjustDailyPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARetail1Character_adjustDailyPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARetail1Character_adjustDailyPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARetail1Character_adjustDailyPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARetail1Character_adjustDailyPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARetail1Character_adjustEmployeeLevel_Statics
	{
		struct Retail1Character_eventadjustEmployeeLevel_Parms
		{
			float adjustment;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_adjustment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARetail1Character_adjustEmployeeLevel_Statics::NewProp_adjustment = { "adjustment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Retail1Character_eventadjustEmployeeLevel_Parms, adjustment), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARetail1Character_adjustEmployeeLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARetail1Character_adjustEmployeeLevel_Statics::NewProp_adjustment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARetail1Character_adjustEmployeeLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Employee" },
		{ "Comment", "/** Adjusts the Employee Level of the player by adjustment\n\x09@param adjustment - a float to adjust the employeeLevel (before adjusting for difficulty)*/" },
		{ "ModuleRelativePath", "Retail1Character.h" },
		{ "ToolTip", "Adjusts the Employee Level of the player by adjustment\n      @param adjustment - a float to adjust the employeeLevel (before adjusting for difficulty)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARetail1Character_adjustEmployeeLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARetail1Character, nullptr, "adjustEmployeeLevel", nullptr, nullptr, sizeof(Retail1Character_eventadjustEmployeeLevel_Parms), Z_Construct_UFunction_ARetail1Character_adjustEmployeeLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARetail1Character_adjustEmployeeLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARetail1Character_adjustEmployeeLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARetail1Character_adjustEmployeeLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARetail1Character_adjustEmployeeLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARetail1Character_adjustEmployeeLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARetail1Character_GetCurrentItem_Statics
	{
		struct Retail1Character_eventGetCurrentItem_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARetail1Character_GetCurrentItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Retail1Character_eventGetCurrentItem_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARetail1Character_GetCurrentItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARetail1Character_GetCurrentItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARetail1Character_GetCurrentItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Customer" },
		{ "Comment", "/** Stops Interaction w/ Character or Cleanup*/" },
		{ "ModuleRelativePath", "Retail1Character.h" },
		{ "ToolTip", "Stops Interaction w/ Character or Cleanup" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARetail1Character_GetCurrentItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARetail1Character, nullptr, "GetCurrentItem", nullptr, nullptr, sizeof(Retail1Character_eventGetCurrentItem_Parms), Z_Construct_UFunction_ARetail1Character_GetCurrentItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARetail1Character_GetCurrentItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARetail1Character_GetCurrentItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARetail1Character_GetCurrentItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARetail1Character_GetCurrentItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARetail1Character_GetCurrentItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARetail1Character_Interact_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARetail1Character_Interact_Statics::Function_MetaDataParams[] = {
		{ "Category", "Employee" },
		{ "Comment", "/** Starts Interaction w/ Character or Cleanup*/" },
		{ "ModuleRelativePath", "Retail1Character.h" },
		{ "ToolTip", "Starts Interaction w/ Character or Cleanup" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARetail1Character_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARetail1Character, nullptr, "Interact", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARetail1Character_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARetail1Character_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARetail1Character_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARetail1Character_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARetail1Character_resetCleanup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARetail1Character_resetCleanup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Employee" },
		{ "Comment", "/** Reset Cleanup Vars*/" },
		{ "ModuleRelativePath", "Retail1Character.h" },
		{ "ToolTip", "Reset Cleanup Vars" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARetail1Character_resetCleanup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARetail1Character, nullptr, "resetCleanup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARetail1Character_resetCleanup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARetail1Character_resetCleanup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARetail1Character_resetCleanup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARetail1Character_resetCleanup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARetail1Character_StopInteract_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARetail1Character_StopInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Employee" },
		{ "Comment", "/** Stops Interaction w/ Character or Cleanup*/" },
		{ "ModuleRelativePath", "Retail1Character.h" },
		{ "ToolTip", "Stops Interaction w/ Character or Cleanup" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARetail1Character_StopInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARetail1Character, nullptr, "StopInteract", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARetail1Character_StopInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARetail1Character_StopInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARetail1Character_StopInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARetail1Character_StopInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARetail1Character_NoRegister()
	{
		return ARetail1Character::StaticClass();
	}
	struct Z_Construct_UClass_ARetail1Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_collectionSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_collectionSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_currentItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentProduce_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_currentProduce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentCustomer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_currentCustomer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentCleanup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_currentCleanup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_canMove_MetaData[];
#endif
		static void NewProp_canMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shiftTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_shiftTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_task1Timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_task1Timer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dailyPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dailyPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_employeeLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_employeeLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isMopping_MetaData[];
#endif
		static void NewProp_isMopping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isMopping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARetail1Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Retail1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARetail1Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARetail1Character_adjustDailyPoints, "adjustDailyPoints" }, // 1615042376
		{ &Z_Construct_UFunction_ARetail1Character_adjustEmployeeLevel, "adjustEmployeeLevel" }, // 1231185959
		{ &Z_Construct_UFunction_ARetail1Character_GetCurrentItem, "GetCurrentItem" }, // 2243047378
		{ &Z_Construct_UFunction_ARetail1Character_Interact, "Interact" }, // 3051932504
		{ &Z_Construct_UFunction_ARetail1Character_resetCleanup, "resetCleanup" }, // 749762693
		{ &Z_Construct_UFunction_ARetail1Character_StopInteract, "StopInteract" }, // 2406375806
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetail1Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Retail1Character.h" },
		{ "ModuleRelativePath", "Retail1Character.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetail1Character_Statics::NewProp_collectionSphere_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "Comment", "/** Sphere Component for Interaction Collision*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Retail1Character.h" },
		{ "ToolTip", "Sphere Component for Interaction Collision" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARetail1Character_Statics::NewProp_collectionSphere = { "collectionSphere", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARetail1Character, collectionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARetail1Character_Statics::NewProp_collectionSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARetail1Character_Statics::NewProp_collectionSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetail1Character_Statics::NewProp_currentItem_MetaData[] = {
		{ "Category", "Items" },
		{ "Comment", "/** Current ProduceSpawner*/" },
		{ "ModuleRelativePath", "Retail1Character.h" },
		{ "ToolTip", "Current ProduceSpawner" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARetail1Character_Statics::NewProp_currentItem = { "currentItem", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARetail1Character, currentItem), Z_Construct_UClass_AItemSpawner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARetail1Character_Statics::NewProp_currentItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARetail1Character_Statics::NewProp_currentItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetail1Character_Statics::NewProp_currentProduce_MetaData[] = {
		{ "Category", "Produce" },
		{ "Comment", "/** Current ProduceSpawner*/" },
		{ "ModuleRelativePath", "Retail1Character.h" },
		{ "ToolTip", "Current ProduceSpawner" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARetail1Character_Statics::NewProp_currentProduce = { "currentProduce", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARetail1Character, currentProduce), Z_Construct_UClass_AProduceSpawner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARetail1Character_Statics::NewProp_currentProduce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARetail1Character_Statics::NewProp_currentProduce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetail1Character_Statics::NewProp_currentCustomer_MetaData[] = {
		{ "Category", "Customer" },
		{ "Comment", "/** Current Customer*/" },
		{ "ModuleRelativePath", "Retail1Character.h" },
		{ "ToolTip", "Current Customer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARetail1Character_Statics::NewProp_currentCustomer = { "currentCustomer", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARetail1Character, currentCustomer), Z_Construct_UClass_ACustomer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARetail1Character_Statics::NewProp_currentCustomer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARetail1Character_Statics::NewProp_currentCustomer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetail1Character_Statics::NewProp_currentCleanup_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "Comment", "/** Current Cleanup*/" },
		{ "ModuleRelativePath", "Retail1Character.h" },
		{ "ToolTip", "Current Cleanup" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARetail1Character_Statics::NewProp_currentCleanup = { "currentCleanup", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARetail1Character, currentCleanup), Z_Construct_UClass_ACleanup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARetail1Character_Statics::NewProp_currentCleanup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARetail1Character_Statics::NewProp_currentCleanup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetail1Character_Statics::NewProp_canMove_MetaData[] = {
		{ "Category", "Actions" },
		{ "Comment", "/** If the player is interacting with something they can't move*/" },
		{ "ModuleRelativePath", "Retail1Character.h" },
		{ "ToolTip", "If the player is interacting with something they can't move" },
	};
#endif
	void Z_Construct_UClass_ARetail1Character_Statics::NewProp_canMove_SetBit(void* Obj)
	{
		((ARetail1Character*)Obj)->canMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARetail1Character_Statics::NewProp_canMove = { "canMove", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARetail1Character), &Z_Construct_UClass_ARetail1Character_Statics::NewProp_canMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARetail1Character_Statics::NewProp_canMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARetail1Character_Statics::NewProp_canMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetail1Character_Statics::NewProp_shiftTimer_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Timer for current shift*/" },
		{ "ModuleRelativePath", "Retail1Character.h" },
		{ "ToolTip", "Timer for current shift" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARetail1Character_Statics::NewProp_shiftTimer = { "shiftTimer", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARetail1Character, shiftTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ARetail1Character_Statics::NewProp_shiftTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARetail1Character_Statics::NewProp_shiftTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetail1Character_Statics::NewProp_task1Timer_MetaData[] = {
		{ "Category", "Actions" },
		{ "Comment", "/** Timer for current task*/" },
		{ "ModuleRelativePath", "Retail1Character.h" },
		{ "ToolTip", "Timer for current task" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARetail1Character_Statics::NewProp_task1Timer = { "task1Timer", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARetail1Character, task1Timer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ARetail1Character_Statics::NewProp_task1Timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARetail1Character_Statics::NewProp_task1Timer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetail1Character_Statics::NewProp_item_MetaData[] = {
		{ "Category", "Customer" },
		{ "Comment", "/** Item player is holding if any*/" },
		{ "ModuleRelativePath", "Retail1Character.h" },
		{ "ToolTip", "Item player is holding if any" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARetail1Character_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARetail1Character, item), METADATA_PARAMS(Z_Construct_UClass_ARetail1Character_Statics::NewProp_item_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARetail1Character_Statics::NewProp_item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetail1Character_Statics::NewProp_dailyPoints_MetaData[] = {
		{ "Category", "Employee" },
		{ "Comment", "/** Current Points for the day*/" },
		{ "ModuleRelativePath", "Retail1Character.h" },
		{ "ToolTip", "Current Points for the day" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARetail1Character_Statics::NewProp_dailyPoints = { "dailyPoints", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARetail1Character, dailyPoints), METADATA_PARAMS(Z_Construct_UClass_ARetail1Character_Statics::NewProp_dailyPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARetail1Character_Statics::NewProp_dailyPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetail1Character_Statics::NewProp_employeeLevel_MetaData[] = {
		{ "Category", "Employee" },
		{ "Comment", "/** Current Employment Status*/" },
		{ "ModuleRelativePath", "Retail1Character.h" },
		{ "ToolTip", "Current Employment Status" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARetail1Character_Statics::NewProp_employeeLevel = { "employeeLevel", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARetail1Character, employeeLevel), METADATA_PARAMS(Z_Construct_UClass_ARetail1Character_Statics::NewProp_employeeLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARetail1Character_Statics::NewProp_employeeLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetail1Character_Statics::NewProp_isMopping_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "Comment", "/** If this timer is currently paused*/" },
		{ "ModuleRelativePath", "Retail1Character.h" },
		{ "ToolTip", "If this timer is currently paused" },
	};
#endif
	void Z_Construct_UClass_ARetail1Character_Statics::NewProp_isMopping_SetBit(void* Obj)
	{
		((ARetail1Character*)Obj)->isMopping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARetail1Character_Statics::NewProp_isMopping = { "isMopping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARetail1Character), &Z_Construct_UClass_ARetail1Character_Statics::NewProp_isMopping_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARetail1Character_Statics::NewProp_isMopping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARetail1Character_Statics::NewProp_isMopping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetail1Character_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "Retail1Character.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARetail1Character_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARetail1Character, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ARetail1Character_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARetail1Character_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetail1Character_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "Retail1Character.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARetail1Character_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARetail1Character, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ARetail1Character_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARetail1Character_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetail1Character_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Retail1Character.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARetail1Character_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARetail1Character, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARetail1Character_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARetail1Character_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetail1Character_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Retail1Character.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARetail1Character_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARetail1Character, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARetail1Character_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARetail1Character_Statics::NewProp_CameraBoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARetail1Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetail1Character_Statics::NewProp_collectionSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetail1Character_Statics::NewProp_currentItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetail1Character_Statics::NewProp_currentProduce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetail1Character_Statics::NewProp_currentCustomer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetail1Character_Statics::NewProp_currentCleanup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetail1Character_Statics::NewProp_canMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetail1Character_Statics::NewProp_shiftTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetail1Character_Statics::NewProp_task1Timer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetail1Character_Statics::NewProp_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetail1Character_Statics::NewProp_dailyPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetail1Character_Statics::NewProp_employeeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetail1Character_Statics::NewProp_isMopping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetail1Character_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetail1Character_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetail1Character_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetail1Character_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARetail1Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARetail1Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARetail1Character_Statics::ClassParams = {
		&ARetail1Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARetail1Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARetail1Character_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARetail1Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARetail1Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARetail1Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARetail1Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARetail1Character, 822686320);
	template<> RETAIL1_API UClass* StaticClass<ARetail1Character>()
	{
		return ARetail1Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARetail1Character(Z_Construct_UClass_ARetail1Character, &ARetail1Character::StaticClass, TEXT("/Script/Retail1"), TEXT("ARetail1Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARetail1Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
