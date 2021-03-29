// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Retail1/Public/ProduceSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProduceSpawner() {}
// Cross Module References
	RETAIL1_API UClass* Z_Construct_UClass_AProduceSpawner_NoRegister();
	RETAIL1_API UClass* Z_Construct_UClass_AProduceSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Retail1();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	DEFINE_FUNCTION(AProduceSpawner::execGetItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProduceSpawner::execFinishProduce)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishProduce();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProduceSpawner::execResetTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProduceSpawner::execResumeTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResumeTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProduceSpawner::execPauseTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProduceSpawner::execStartTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProduceSpawner::execSetSpawningActive)
	{
		P_GET_UBOOL(Z_Param_bShouldSpawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpawningActive(Z_Param_bShouldSpawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProduceSpawner::execUpdateProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateProgress();
		P_NATIVE_END;
	}
	void AProduceSpawner::StaticRegisterNativesAProduceSpawner()
	{
		UClass* Class = AProduceSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishProduce", &AProduceSpawner::execFinishProduce },
			{ "GetItem", &AProduceSpawner::execGetItem },
			{ "PauseTimer", &AProduceSpawner::execPauseTimer },
			{ "ResetTimer", &AProduceSpawner::execResetTimer },
			{ "ResumeTimer", &AProduceSpawner::execResumeTimer },
			{ "SetSpawningActive", &AProduceSpawner::execSetSpawningActive },
			{ "StartTimer", &AProduceSpawner::execStartTimer },
			{ "UpdateProgress", &AProduceSpawner::execUpdateProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AProduceSpawner_FinishProduce_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProduceSpawner_FinishProduce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Produce" },
		{ "Comment", "/** Player has completed Produce*/" },
		{ "ModuleRelativePath", "Public/ProduceSpawner.h" },
		{ "ToolTip", "Player has completed Produce" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProduceSpawner_FinishProduce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProduceSpawner, nullptr, "FinishProduce", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProduceSpawner_FinishProduce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProduceSpawner_FinishProduce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProduceSpawner_FinishProduce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProduceSpawner_FinishProduce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProduceSpawner_GetItem_Statics
	{
		struct ProduceSpawner_eventGetItem_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AProduceSpawner_GetItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProduceSpawner_eventGetItem_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProduceSpawner_GetItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProduceSpawner_GetItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProduceSpawner_GetItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Customer" },
		{ "Comment", "/** Return the item this spawns*/" },
		{ "ModuleRelativePath", "Public/ProduceSpawner.h" },
		{ "ToolTip", "Return the item this spawns" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProduceSpawner_GetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProduceSpawner, nullptr, "GetItem", nullptr, nullptr, sizeof(ProduceSpawner_eventGetItem_Parms), Z_Construct_UFunction_AProduceSpawner_GetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProduceSpawner_GetItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProduceSpawner_GetItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProduceSpawner_GetItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProduceSpawner_GetItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProduceSpawner_GetItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProduceSpawner_PauseTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProduceSpawner_PauseTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Produce" },
		{ "Comment", "/** Pauses the Produce timer*/" },
		{ "ModuleRelativePath", "Public/ProduceSpawner.h" },
		{ "ToolTip", "Pauses the Produce timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProduceSpawner_PauseTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProduceSpawner, nullptr, "PauseTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProduceSpawner_PauseTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProduceSpawner_PauseTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProduceSpawner_PauseTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProduceSpawner_PauseTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProduceSpawner_ResetTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProduceSpawner_ResetTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Produce" },
		{ "Comment", "/** Resets the Produce timer*/" },
		{ "ModuleRelativePath", "Public/ProduceSpawner.h" },
		{ "ToolTip", "Resets the Produce timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProduceSpawner_ResetTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProduceSpawner, nullptr, "ResetTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProduceSpawner_ResetTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProduceSpawner_ResetTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProduceSpawner_ResetTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProduceSpawner_ResetTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProduceSpawner_ResumeTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProduceSpawner_ResumeTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Produce" },
		{ "Comment", "/** Resumes (if paused) the Produce timer*/" },
		{ "ModuleRelativePath", "Public/ProduceSpawner.h" },
		{ "ToolTip", "Resumes (if paused) the Produce timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProduceSpawner_ResumeTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProduceSpawner, nullptr, "ResumeTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProduceSpawner_ResumeTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProduceSpawner_ResumeTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProduceSpawner_ResumeTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProduceSpawner_ResumeTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProduceSpawner_SetSpawningActive_Statics
	{
		struct ProduceSpawner_eventSetSpawningActive_Parms
		{
			bool bShouldSpawn;
		};
		static void NewProp_bShouldSpawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AProduceSpawner_SetSpawningActive_Statics::NewProp_bShouldSpawn_SetBit(void* Obj)
	{
		((ProduceSpawner_eventSetSpawningActive_Parms*)Obj)->bShouldSpawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AProduceSpawner_SetSpawningActive_Statics::NewProp_bShouldSpawn = { "bShouldSpawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ProduceSpawner_eventSetSpawningActive_Parms), &Z_Construct_UFunction_AProduceSpawner_SetSpawningActive_Statics::NewProp_bShouldSpawn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProduceSpawner_SetSpawningActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProduceSpawner_SetSpawningActive_Statics::NewProp_bShouldSpawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProduceSpawner_SetSpawningActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/** Toggle spawning on and off*/" },
		{ "ModuleRelativePath", "Public/ProduceSpawner.h" },
		{ "ToolTip", "Toggle spawning on and off" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProduceSpawner_SetSpawningActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProduceSpawner, nullptr, "SetSpawningActive", nullptr, nullptr, sizeof(ProduceSpawner_eventSetSpawningActive_Parms), Z_Construct_UFunction_AProduceSpawner_SetSpawningActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProduceSpawner_SetSpawningActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProduceSpawner_SetSpawningActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProduceSpawner_SetSpawningActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProduceSpawner_SetSpawningActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProduceSpawner_SetSpawningActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProduceSpawner_StartTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProduceSpawner_StartTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Produce" },
		{ "Comment", "/** Starts the Produce timer*/" },
		{ "ModuleRelativePath", "Public/ProduceSpawner.h" },
		{ "ToolTip", "Starts the Produce timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProduceSpawner_StartTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProduceSpawner, nullptr, "StartTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProduceSpawner_StartTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProduceSpawner_StartTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProduceSpawner_StartTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProduceSpawner_StartTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProduceSpawner_UpdateProgress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProduceSpawner_UpdateProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Produce" },
		{ "Comment", "/** Updates the progress bar based on timer*/" },
		{ "ModuleRelativePath", "Public/ProduceSpawner.h" },
		{ "ToolTip", "Updates the progress bar based on timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProduceSpawner_UpdateProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProduceSpawner, nullptr, "UpdateProgress", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProduceSpawner_UpdateProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProduceSpawner_UpdateProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProduceSpawner_UpdateProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProduceSpawner_UpdateProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AProduceSpawner_NoRegister()
	{
		return AProduceSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AProduceSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WhereToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WhereToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnDelayRangeHigh_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnDelayRangeHigh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnDelayRangeLow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnDelayRangeLow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_produceInSpawner_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_produceInSpawner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_produceInSpawner_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_canInteract_MetaData[];
#endif
		static void NewProp_canInteract_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canInteract;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timerPaused_MetaData[];
#endif
		static void NewProp_timerPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_timerPaused;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timerStarted_MetaData[];
#endif
		static void NewProp_timerStarted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_timerStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_progress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_progress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeToComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeToComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_timer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProduceSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Retail1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AProduceSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AProduceSpawner_FinishProduce, "FinishProduce" }, // 3505291583
		{ &Z_Construct_UFunction_AProduceSpawner_GetItem, "GetItem" }, // 2823804430
		{ &Z_Construct_UFunction_AProduceSpawner_PauseTimer, "PauseTimer" }, // 1111748222
		{ &Z_Construct_UFunction_AProduceSpawner_ResetTimer, "ResetTimer" }, // 1211248350
		{ &Z_Construct_UFunction_AProduceSpawner_ResumeTimer, "ResumeTimer" }, // 4251349565
		{ &Z_Construct_UFunction_AProduceSpawner_SetSpawningActive, "SetSpawningActive" }, // 2086561987
		{ &Z_Construct_UFunction_AProduceSpawner_StartTimer, "StartTimer" }, // 2934355908
		{ &Z_Construct_UFunction_AProduceSpawner_UpdateProgress, "UpdateProgress" }, // 2109566443
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProduceSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProduceSpawner.h" },
		{ "ModuleRelativePath", "Public/ProduceSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProduceSpawner_Statics::NewProp_WhereToSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Spawning" },
		{ "Comment", "/** Box component to specify where Produces should be spawned*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProduceSpawner.h" },
		{ "ToolTip", "Box component to specify where Produces should be spawned" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProduceSpawner_Statics::NewProp_WhereToSpawn = { "WhereToSpawn", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProduceSpawner, WhereToSpawn), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProduceSpawner_Statics::NewProp_WhereToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProduceSpawner_Statics::NewProp_WhereToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProduceSpawner_Statics::NewProp_SpawnDelayRangeHigh_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/** Maximum Spawn Delay*/" },
		{ "ModuleRelativePath", "Public/ProduceSpawner.h" },
		{ "ToolTip", "Maximum Spawn Delay" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProduceSpawner_Statics::NewProp_SpawnDelayRangeHigh = { "SpawnDelayRangeHigh", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProduceSpawner, SpawnDelayRangeHigh), METADATA_PARAMS(Z_Construct_UClass_AProduceSpawner_Statics::NewProp_SpawnDelayRangeHigh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProduceSpawner_Statics::NewProp_SpawnDelayRangeHigh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProduceSpawner_Statics::NewProp_SpawnDelayRangeLow_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/** Minimum Spawn Delay*/" },
		{ "ModuleRelativePath", "Public/ProduceSpawner.h" },
		{ "ToolTip", "Minimum Spawn Delay" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProduceSpawner_Statics::NewProp_SpawnDelayRangeLow = { "SpawnDelayRangeLow", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProduceSpawner, SpawnDelayRangeLow), METADATA_PARAMS(Z_Construct_UClass_AProduceSpawner_Statics::NewProp_SpawnDelayRangeLow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProduceSpawner_Statics::NewProp_SpawnDelayRangeLow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProduceSpawner_Statics::NewProp_produceInSpawner_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/** All the Produce in the spawner*/" },
		{ "ModuleRelativePath", "Public/ProduceSpawner.h" },
		{ "ToolTip", "All the Produce in the spawner" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProduceSpawner_Statics::NewProp_produceInSpawner = { "produceInSpawner", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProduceSpawner, produceInSpawner), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AProduceSpawner_Statics::NewProp_produceInSpawner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProduceSpawner_Statics::NewProp_produceInSpawner_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProduceSpawner_Statics::NewProp_produceInSpawner_Inner = { "produceInSpawner", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProduceSpawner_Statics::NewProp_item_MetaData[] = {
		{ "Category", "Customer" },
		{ "Comment", "/** What item this Customer wants */" },
		{ "ModuleRelativePath", "Public/ProduceSpawner.h" },
		{ "ToolTip", "What item this Customer wants" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AProduceSpawner_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProduceSpawner, item), METADATA_PARAMS(Z_Construct_UClass_AProduceSpawner_Statics::NewProp_item_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProduceSpawner_Statics::NewProp_item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProduceSpawner_Statics::NewProp_canInteract_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/** If the user can now interact with this spawner*/" },
		{ "ModuleRelativePath", "Public/ProduceSpawner.h" },
		{ "ToolTip", "If the user can now interact with this spawner" },
	};
#endif
	void Z_Construct_UClass_AProduceSpawner_Statics::NewProp_canInteract_SetBit(void* Obj)
	{
		((AProduceSpawner*)Obj)->canInteract = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProduceSpawner_Statics::NewProp_canInteract = { "canInteract", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProduceSpawner), &Z_Construct_UClass_AProduceSpawner_Statics::NewProp_canInteract_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProduceSpawner_Statics::NewProp_canInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProduceSpawner_Statics::NewProp_canInteract_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProduceSpawner_Statics::NewProp_timerPaused_MetaData[] = {
		{ "Category", "Produce" },
		{ "Comment", "/** If this timer is currently paused*/" },
		{ "ModuleRelativePath", "Public/ProduceSpawner.h" },
		{ "ToolTip", "If this timer is currently paused" },
	};
#endif
	void Z_Construct_UClass_AProduceSpawner_Statics::NewProp_timerPaused_SetBit(void* Obj)
	{
		((AProduceSpawner*)Obj)->timerPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProduceSpawner_Statics::NewProp_timerPaused = { "timerPaused", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProduceSpawner), &Z_Construct_UClass_AProduceSpawner_Statics::NewProp_timerPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProduceSpawner_Statics::NewProp_timerPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProduceSpawner_Statics::NewProp_timerPaused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProduceSpawner_Statics::NewProp_timerStarted_MetaData[] = {
		{ "Category", "Produce" },
		{ "Comment", "/** If this timer has been activated*/" },
		{ "ModuleRelativePath", "Public/ProduceSpawner.h" },
		{ "ToolTip", "If this timer has been activated" },
	};
#endif
	void Z_Construct_UClass_AProduceSpawner_Statics::NewProp_timerStarted_SetBit(void* Obj)
	{
		((AProduceSpawner*)Obj)->timerStarted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProduceSpawner_Statics::NewProp_timerStarted = { "timerStarted", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProduceSpawner), &Z_Construct_UClass_AProduceSpawner_Statics::NewProp_timerStarted_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProduceSpawner_Statics::NewProp_timerStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProduceSpawner_Statics::NewProp_timerStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProduceSpawner_Statics::NewProp_progress_MetaData[] = {
		{ "Category", "Produce" },
		{ "Comment", "/** How much progress (%) player has made on this Produce*/" },
		{ "ModuleRelativePath", "Public/ProduceSpawner.h" },
		{ "ToolTip", "How much progress (%) player has made on this Produce" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProduceSpawner_Statics::NewProp_progress = { "progress", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProduceSpawner, progress), METADATA_PARAMS(Z_Construct_UClass_AProduceSpawner_Statics::NewProp_progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProduceSpawner_Statics::NewProp_progress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProduceSpawner_Statics::NewProp_timeToComplete_MetaData[] = {
		{ "Category", "Produce" },
		{ "Comment", "/** How long this Produce will take*/" },
		{ "ModuleRelativePath", "Public/ProduceSpawner.h" },
		{ "ToolTip", "How long this Produce will take" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProduceSpawner_Statics::NewProp_timeToComplete = { "timeToComplete", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProduceSpawner, timeToComplete), METADATA_PARAMS(Z_Construct_UClass_AProduceSpawner_Statics::NewProp_timeToComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProduceSpawner_Statics::NewProp_timeToComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProduceSpawner_Statics::NewProp_timer_MetaData[] = {
		{ "Category", "Produce" },
		{ "Comment", "/** THe timer handle for Produce time*/" },
		{ "ModuleRelativePath", "Public/ProduceSpawner.h" },
		{ "ToolTip", "THe timer handle for Produce time" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProduceSpawner_Statics::NewProp_timer = { "timer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProduceSpawner, timer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AProduceSpawner_Statics::NewProp_timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProduceSpawner_Statics::NewProp_timer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProduceSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProduceSpawner_Statics::NewProp_WhereToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProduceSpawner_Statics::NewProp_SpawnDelayRangeHigh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProduceSpawner_Statics::NewProp_SpawnDelayRangeLow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProduceSpawner_Statics::NewProp_produceInSpawner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProduceSpawner_Statics::NewProp_produceInSpawner_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProduceSpawner_Statics::NewProp_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProduceSpawner_Statics::NewProp_canInteract,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProduceSpawner_Statics::NewProp_timerPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProduceSpawner_Statics::NewProp_timerStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProduceSpawner_Statics::NewProp_progress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProduceSpawner_Statics::NewProp_timeToComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProduceSpawner_Statics::NewProp_timer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProduceSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProduceSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProduceSpawner_Statics::ClassParams = {
		&AProduceSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AProduceSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AProduceSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProduceSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProduceSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProduceSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProduceSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProduceSpawner, 3811633340);
	template<> RETAIL1_API UClass* StaticClass<AProduceSpawner>()
	{
		return AProduceSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProduceSpawner(Z_Construct_UClass_AProduceSpawner, &AProduceSpawner::StaticClass, TEXT("/Script/Retail1"), TEXT("AProduceSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProduceSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
