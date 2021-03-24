// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Retail1/Public/ItemSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemSpawner() {}
// Cross Module References
	RETAIL1_API UClass* Z_Construct_UClass_AItemSpawner_NoRegister();
	RETAIL1_API UClass* Z_Construct_UClass_AItemSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Retail1();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	DEFINE_FUNCTION(AItemSpawner::execFinishItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItemSpawner::execResetTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItemSpawner::execResumeTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResumeTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItemSpawner::execPauseTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItemSpawner::execStartTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItemSpawner::execSetSpawningActive)
	{
		P_GET_UBOOL(Z_Param_bShouldSpawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpawningActive(Z_Param_bShouldSpawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItemSpawner::execUpdateProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateProgress();
		P_NATIVE_END;
	}
	void AItemSpawner::StaticRegisterNativesAItemSpawner()
	{
		UClass* Class = AItemSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishItem", &AItemSpawner::execFinishItem },
			{ "PauseTimer", &AItemSpawner::execPauseTimer },
			{ "ResetTimer", &AItemSpawner::execResetTimer },
			{ "ResumeTimer", &AItemSpawner::execResumeTimer },
			{ "SetSpawningActive", &AItemSpawner::execSetSpawningActive },
			{ "StartTimer", &AItemSpawner::execStartTimer },
			{ "UpdateProgress", &AItemSpawner::execUpdateProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AItemSpawner_FinishItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemSpawner_FinishItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "Comment", "/** Player has completed Item*/" },
		{ "ModuleRelativePath", "Public/ItemSpawner.h" },
		{ "ToolTip", "Player has completed Item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemSpawner_FinishItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemSpawner, nullptr, "FinishItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItemSpawner_FinishItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemSpawner_FinishItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItemSpawner_FinishItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItemSpawner_FinishItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemSpawner_PauseTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemSpawner_PauseTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "Comment", "/** Pauses the Item timer*/" },
		{ "ModuleRelativePath", "Public/ItemSpawner.h" },
		{ "ToolTip", "Pauses the Item timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemSpawner_PauseTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemSpawner, nullptr, "PauseTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItemSpawner_PauseTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemSpawner_PauseTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItemSpawner_PauseTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItemSpawner_PauseTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemSpawner_ResetTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemSpawner_ResetTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "Comment", "/** Resets the Item timer*/" },
		{ "ModuleRelativePath", "Public/ItemSpawner.h" },
		{ "ToolTip", "Resets the Item timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemSpawner_ResetTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemSpawner, nullptr, "ResetTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItemSpawner_ResetTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemSpawner_ResetTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItemSpawner_ResetTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItemSpawner_ResetTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemSpawner_ResumeTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemSpawner_ResumeTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "Comment", "/** Resumes (if paused) the Item timer*/" },
		{ "ModuleRelativePath", "Public/ItemSpawner.h" },
		{ "ToolTip", "Resumes (if paused) the Item timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemSpawner_ResumeTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemSpawner, nullptr, "ResumeTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItemSpawner_ResumeTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemSpawner_ResumeTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItemSpawner_ResumeTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItemSpawner_ResumeTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemSpawner_SetSpawningActive_Statics
	{
		struct ItemSpawner_eventSetSpawningActive_Parms
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
	void Z_Construct_UFunction_AItemSpawner_SetSpawningActive_Statics::NewProp_bShouldSpawn_SetBit(void* Obj)
	{
		((ItemSpawner_eventSetSpawningActive_Parms*)Obj)->bShouldSpawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AItemSpawner_SetSpawningActive_Statics::NewProp_bShouldSpawn = { "bShouldSpawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ItemSpawner_eventSetSpawningActive_Parms), &Z_Construct_UFunction_AItemSpawner_SetSpawningActive_Statics::NewProp_bShouldSpawn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemSpawner_SetSpawningActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemSpawner_SetSpawningActive_Statics::NewProp_bShouldSpawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemSpawner_SetSpawningActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/** Toggle spawning on and off*/" },
		{ "ModuleRelativePath", "Public/ItemSpawner.h" },
		{ "ToolTip", "Toggle spawning on and off" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemSpawner_SetSpawningActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemSpawner, nullptr, "SetSpawningActive", nullptr, nullptr, sizeof(ItemSpawner_eventSetSpawningActive_Parms), Z_Construct_UFunction_AItemSpawner_SetSpawningActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemSpawner_SetSpawningActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItemSpawner_SetSpawningActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemSpawner_SetSpawningActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItemSpawner_SetSpawningActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItemSpawner_SetSpawningActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemSpawner_StartTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemSpawner_StartTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "Comment", "/** Starts the Item timer*/" },
		{ "ModuleRelativePath", "Public/ItemSpawner.h" },
		{ "ToolTip", "Starts the Item timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemSpawner_StartTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemSpawner, nullptr, "StartTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItemSpawner_StartTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemSpawner_StartTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItemSpawner_StartTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItemSpawner_StartTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemSpawner_UpdateProgress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemSpawner_UpdateProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "Comment", "/** Updates the progress bar based on timer*/" },
		{ "ModuleRelativePath", "Public/ItemSpawner.h" },
		{ "ToolTip", "Updates the progress bar based on timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemSpawner_UpdateProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemSpawner, nullptr, "UpdateProgress", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItemSpawner_UpdateProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemSpawner_UpdateProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItemSpawner_UpdateProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItemSpawner_UpdateProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AItemSpawner_NoRegister()
	{
		return AItemSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AItemSpawner_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemInSpawner_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemInSpawner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemInSpawner_Inner;
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
	UObject* (*const Z_Construct_UClass_AItemSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Retail1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AItemSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AItemSpawner_FinishItem, "FinishItem" }, // 1401765022
		{ &Z_Construct_UFunction_AItemSpawner_PauseTimer, "PauseTimer" }, // 3508944328
		{ &Z_Construct_UFunction_AItemSpawner_ResetTimer, "ResetTimer" }, // 2381831689
		{ &Z_Construct_UFunction_AItemSpawner_ResumeTimer, "ResumeTimer" }, // 1678621473
		{ &Z_Construct_UFunction_AItemSpawner_SetSpawningActive, "SetSpawningActive" }, // 193565666
		{ &Z_Construct_UFunction_AItemSpawner_StartTimer, "StartTimer" }, // 1610536427
		{ &Z_Construct_UFunction_AItemSpawner_UpdateProgress, "UpdateProgress" }, // 1407489737
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ItemSpawner.h" },
		{ "ModuleRelativePath", "Public/ItemSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemSpawner_Statics::NewProp_WhereToSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Spawning" },
		{ "Comment", "/** Box component to specify where Items should be spawned*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ItemSpawner.h" },
		{ "ToolTip", "Box component to specify where Items should be spawned" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemSpawner_Statics::NewProp_WhereToSpawn = { "WhereToSpawn", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItemSpawner, WhereToSpawn), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItemSpawner_Statics::NewProp_WhereToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemSpawner_Statics::NewProp_WhereToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemSpawner_Statics::NewProp_SpawnDelayRangeHigh_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/** Maximum Spawn Delay*/" },
		{ "ModuleRelativePath", "Public/ItemSpawner.h" },
		{ "ToolTip", "Maximum Spawn Delay" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AItemSpawner_Statics::NewProp_SpawnDelayRangeHigh = { "SpawnDelayRangeHigh", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItemSpawner, SpawnDelayRangeHigh), METADATA_PARAMS(Z_Construct_UClass_AItemSpawner_Statics::NewProp_SpawnDelayRangeHigh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemSpawner_Statics::NewProp_SpawnDelayRangeHigh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemSpawner_Statics::NewProp_SpawnDelayRangeLow_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/** Minimum Spawn Delay*/" },
		{ "ModuleRelativePath", "Public/ItemSpawner.h" },
		{ "ToolTip", "Minimum Spawn Delay" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AItemSpawner_Statics::NewProp_SpawnDelayRangeLow = { "SpawnDelayRangeLow", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItemSpawner, SpawnDelayRangeLow), METADATA_PARAMS(Z_Construct_UClass_AItemSpawner_Statics::NewProp_SpawnDelayRangeLow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemSpawner_Statics::NewProp_SpawnDelayRangeLow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemSpawner_Statics::NewProp_ItemInSpawner_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/** All the Item in the spawner*/" },
		{ "ModuleRelativePath", "Public/ItemSpawner.h" },
		{ "ToolTip", "All the Item in the spawner" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AItemSpawner_Statics::NewProp_ItemInSpawner = { "ItemInSpawner", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItemSpawner, ItemInSpawner), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AItemSpawner_Statics::NewProp_ItemInSpawner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemSpawner_Statics::NewProp_ItemInSpawner_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemSpawner_Statics::NewProp_ItemInSpawner_Inner = { "ItemInSpawner", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemSpawner_Statics::NewProp_canInteract_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/** If the user can now interact with this spawner*/" },
		{ "ModuleRelativePath", "Public/ItemSpawner.h" },
		{ "ToolTip", "If the user can now interact with this spawner" },
	};
#endif
	void Z_Construct_UClass_AItemSpawner_Statics::NewProp_canInteract_SetBit(void* Obj)
	{
		((AItemSpawner*)Obj)->canInteract = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AItemSpawner_Statics::NewProp_canInteract = { "canInteract", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AItemSpawner), &Z_Construct_UClass_AItemSpawner_Statics::NewProp_canInteract_SetBit, METADATA_PARAMS(Z_Construct_UClass_AItemSpawner_Statics::NewProp_canInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemSpawner_Statics::NewProp_canInteract_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemSpawner_Statics::NewProp_timerPaused_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "/** If this timer is currently paused*/" },
		{ "ModuleRelativePath", "Public/ItemSpawner.h" },
		{ "ToolTip", "If this timer is currently paused" },
	};
#endif
	void Z_Construct_UClass_AItemSpawner_Statics::NewProp_timerPaused_SetBit(void* Obj)
	{
		((AItemSpawner*)Obj)->timerPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AItemSpawner_Statics::NewProp_timerPaused = { "timerPaused", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AItemSpawner), &Z_Construct_UClass_AItemSpawner_Statics::NewProp_timerPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_AItemSpawner_Statics::NewProp_timerPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemSpawner_Statics::NewProp_timerPaused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemSpawner_Statics::NewProp_timerStarted_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "/** If this timer has been activated*/" },
		{ "ModuleRelativePath", "Public/ItemSpawner.h" },
		{ "ToolTip", "If this timer has been activated" },
	};
#endif
	void Z_Construct_UClass_AItemSpawner_Statics::NewProp_timerStarted_SetBit(void* Obj)
	{
		((AItemSpawner*)Obj)->timerStarted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AItemSpawner_Statics::NewProp_timerStarted = { "timerStarted", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AItemSpawner), &Z_Construct_UClass_AItemSpawner_Statics::NewProp_timerStarted_SetBit, METADATA_PARAMS(Z_Construct_UClass_AItemSpawner_Statics::NewProp_timerStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemSpawner_Statics::NewProp_timerStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemSpawner_Statics::NewProp_progress_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "/** How much progress (%) player has made on this Item*/" },
		{ "ModuleRelativePath", "Public/ItemSpawner.h" },
		{ "ToolTip", "How much progress (%) player has made on this Item" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AItemSpawner_Statics::NewProp_progress = { "progress", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItemSpawner, progress), METADATA_PARAMS(Z_Construct_UClass_AItemSpawner_Statics::NewProp_progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemSpawner_Statics::NewProp_progress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemSpawner_Statics::NewProp_timeToComplete_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "/** How long this Item will take*/" },
		{ "ModuleRelativePath", "Public/ItemSpawner.h" },
		{ "ToolTip", "How long this Item will take" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AItemSpawner_Statics::NewProp_timeToComplete = { "timeToComplete", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItemSpawner, timeToComplete), METADATA_PARAMS(Z_Construct_UClass_AItemSpawner_Statics::NewProp_timeToComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemSpawner_Statics::NewProp_timeToComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemSpawner_Statics::NewProp_timer_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "/** THe timer handle for Item time*/" },
		{ "ModuleRelativePath", "Public/ItemSpawner.h" },
		{ "ToolTip", "THe timer handle for Item time" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AItemSpawner_Statics::NewProp_timer = { "timer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItemSpawner, timer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AItemSpawner_Statics::NewProp_timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemSpawner_Statics::NewProp_timer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItemSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemSpawner_Statics::NewProp_WhereToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemSpawner_Statics::NewProp_SpawnDelayRangeHigh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemSpawner_Statics::NewProp_SpawnDelayRangeLow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemSpawner_Statics::NewProp_ItemInSpawner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemSpawner_Statics::NewProp_ItemInSpawner_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemSpawner_Statics::NewProp_canInteract,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemSpawner_Statics::NewProp_timerPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemSpawner_Statics::NewProp_timerStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemSpawner_Statics::NewProp_progress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemSpawner_Statics::NewProp_timeToComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemSpawner_Statics::NewProp_timer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItemSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AItemSpawner_Statics::ClassParams = {
		&AItemSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AItemSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AItemSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AItemSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AItemSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItemSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AItemSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AItemSpawner, 3166950444);
	template<> RETAIL1_API UClass* StaticClass<AItemSpawner>()
	{
		return AItemSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AItemSpawner(Z_Construct_UClass_AItemSpawner, &AItemSpawner::StaticClass, TEXT("/Script/Retail1"), TEXT("AItemSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItemSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
