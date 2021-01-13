// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Retail1/Public/Cleanup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCleanup() {}
// Cross Module References
	RETAIL1_API UClass* Z_Construct_UClass_ACleanup_NoRegister();
	RETAIL1_API UClass* Z_Construct_UClass_ACleanup();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Retail1();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	DEFINE_FUNCTION(ACleanup::execFinishCleanup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishCleanup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACleanup::execResetTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACleanup::execResumeTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResumeTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACleanup::execPauseTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACleanup::execStartTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACleanup::execUpdateProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateProgress();
		P_NATIVE_END;
	}
	void ACleanup::StaticRegisterNativesACleanup()
	{
		UClass* Class = ACleanup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishCleanup", &ACleanup::execFinishCleanup },
			{ "PauseTimer", &ACleanup::execPauseTimer },
			{ "ResetTimer", &ACleanup::execResetTimer },
			{ "ResumeTimer", &ACleanup::execResumeTimer },
			{ "StartTimer", &ACleanup::execStartTimer },
			{ "UpdateProgress", &ACleanup::execUpdateProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACleanup_FinishCleanup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACleanup_FinishCleanup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cleanup" },
		{ "Comment", "/** Player has completed cleanup*/" },
		{ "ModuleRelativePath", "Public/Cleanup.h" },
		{ "ToolTip", "Player has completed cleanup" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACleanup_FinishCleanup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACleanup, nullptr, "FinishCleanup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACleanup_FinishCleanup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACleanup_FinishCleanup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACleanup_FinishCleanup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACleanup_FinishCleanup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACleanup_PauseTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACleanup_PauseTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cleanup" },
		{ "Comment", "/** Pauses the cleanup timer*/" },
		{ "ModuleRelativePath", "Public/Cleanup.h" },
		{ "ToolTip", "Pauses the cleanup timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACleanup_PauseTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACleanup, nullptr, "PauseTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACleanup_PauseTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACleanup_PauseTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACleanup_PauseTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACleanup_PauseTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACleanup_ResetTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACleanup_ResetTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cleanup" },
		{ "Comment", "/** Resets the cleanup timer*/" },
		{ "ModuleRelativePath", "Public/Cleanup.h" },
		{ "ToolTip", "Resets the cleanup timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACleanup_ResetTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACleanup, nullptr, "ResetTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACleanup_ResetTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACleanup_ResetTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACleanup_ResetTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACleanup_ResetTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACleanup_ResumeTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACleanup_ResumeTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cleanup" },
		{ "Comment", "/** Resumes (if paused) the cleanup timer*/" },
		{ "ModuleRelativePath", "Public/Cleanup.h" },
		{ "ToolTip", "Resumes (if paused) the cleanup timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACleanup_ResumeTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACleanup, nullptr, "ResumeTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACleanup_ResumeTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACleanup_ResumeTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACleanup_ResumeTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACleanup_ResumeTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACleanup_StartTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACleanup_StartTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cleanup" },
		{ "Comment", "/** Starts the cleanup timer*/" },
		{ "ModuleRelativePath", "Public/Cleanup.h" },
		{ "ToolTip", "Starts the cleanup timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACleanup_StartTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACleanup, nullptr, "StartTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACleanup_StartTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACleanup_StartTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACleanup_StartTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACleanup_StartTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACleanup_UpdateProgress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACleanup_UpdateProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cleanup" },
		{ "Comment", "/** Updates the progress bar based on timer*/" },
		{ "ModuleRelativePath", "Public/Cleanup.h" },
		{ "ToolTip", "Updates the progress bar based on timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACleanup_UpdateProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACleanup, nullptr, "UpdateProgress", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACleanup_UpdateProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACleanup_UpdateProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACleanup_UpdateProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACleanup_UpdateProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACleanup_NoRegister()
	{
		return ACleanup::StaticClass();
	}
	struct Z_Construct_UClass_ACleanup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
	UObject* (*const Z_Construct_UClass_ACleanup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Retail1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACleanup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACleanup_FinishCleanup, "FinishCleanup" }, // 1061272691
		{ &Z_Construct_UFunction_ACleanup_PauseTimer, "PauseTimer" }, // 3697933954
		{ &Z_Construct_UFunction_ACleanup_ResetTimer, "ResetTimer" }, // 858382897
		{ &Z_Construct_UFunction_ACleanup_ResumeTimer, "ResumeTimer" }, // 2359425349
		{ &Z_Construct_UFunction_ACleanup_StartTimer, "StartTimer" }, // 1045895300
		{ &Z_Construct_UFunction_ACleanup_UpdateProgress, "UpdateProgress" }, // 2097159491
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACleanup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Cleanup.h" },
		{ "ModuleRelativePath", "Public/Cleanup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACleanup_Statics::NewProp_timerPaused_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "Comment", "/** If this timer is currently paused*/" },
		{ "ModuleRelativePath", "Public/Cleanup.h" },
		{ "ToolTip", "If this timer is currently paused" },
	};
#endif
	void Z_Construct_UClass_ACleanup_Statics::NewProp_timerPaused_SetBit(void* Obj)
	{
		((ACleanup*)Obj)->timerPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACleanup_Statics::NewProp_timerPaused = { "timerPaused", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACleanup), &Z_Construct_UClass_ACleanup_Statics::NewProp_timerPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACleanup_Statics::NewProp_timerPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACleanup_Statics::NewProp_timerPaused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACleanup_Statics::NewProp_timerStarted_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "Comment", "/** If this timer has been activated*/" },
		{ "ModuleRelativePath", "Public/Cleanup.h" },
		{ "ToolTip", "If this timer has been activated" },
	};
#endif
	void Z_Construct_UClass_ACleanup_Statics::NewProp_timerStarted_SetBit(void* Obj)
	{
		((ACleanup*)Obj)->timerStarted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACleanup_Statics::NewProp_timerStarted = { "timerStarted", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACleanup), &Z_Construct_UClass_ACleanup_Statics::NewProp_timerStarted_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACleanup_Statics::NewProp_timerStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACleanup_Statics::NewProp_timerStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACleanup_Statics::NewProp_progress_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "Comment", "/** How much progress (%) player has made on this cleanup*/" },
		{ "ModuleRelativePath", "Public/Cleanup.h" },
		{ "ToolTip", "How much progress (%) player has made on this cleanup" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACleanup_Statics::NewProp_progress = { "progress", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACleanup, progress), METADATA_PARAMS(Z_Construct_UClass_ACleanup_Statics::NewProp_progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACleanup_Statics::NewProp_progress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACleanup_Statics::NewProp_timeToComplete_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "Comment", "/** How long this cleanup will take*/" },
		{ "ModuleRelativePath", "Public/Cleanup.h" },
		{ "ToolTip", "How long this cleanup will take" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACleanup_Statics::NewProp_timeToComplete = { "timeToComplete", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACleanup, timeToComplete), METADATA_PARAMS(Z_Construct_UClass_ACleanup_Statics::NewProp_timeToComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACleanup_Statics::NewProp_timeToComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACleanup_Statics::NewProp_timer_MetaData[] = {
		{ "Category", "Cleanup" },
		{ "Comment", "/** THe timer handle for cleanup time*/" },
		{ "ModuleRelativePath", "Public/Cleanup.h" },
		{ "ToolTip", "THe timer handle for cleanup time" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACleanup_Statics::NewProp_timer = { "timer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACleanup, timer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ACleanup_Statics::NewProp_timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACleanup_Statics::NewProp_timer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACleanup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACleanup_Statics::NewProp_timerPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACleanup_Statics::NewProp_timerStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACleanup_Statics::NewProp_progress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACleanup_Statics::NewProp_timeToComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACleanup_Statics::NewProp_timer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACleanup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACleanup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACleanup_Statics::ClassParams = {
		&ACleanup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACleanup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACleanup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACleanup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACleanup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACleanup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACleanup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACleanup, 2265930766);
	template<> RETAIL1_API UClass* StaticClass<ACleanup>()
	{
		return ACleanup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACleanup(Z_Construct_UClass_ACleanup, &ACleanup::StaticClass, TEXT("/Script/Retail1"), TEXT("ACleanup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACleanup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
