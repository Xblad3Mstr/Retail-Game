// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Retail1/Retail1GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRetail1GameMode() {}
// Cross Module References
	RETAIL1_API UClass* Z_Construct_UClass_ARetail1GameMode_NoRegister();
	RETAIL1_API UClass* Z_Construct_UClass_ARetail1GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Retail1();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	DEFINE_FUNCTION(ARetail1GameMode::execGetProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetProgress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARetail1GameMode::execFinishDay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishDay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARetail1GameMode::execResetTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARetail1GameMode::execResumeTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResumeTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARetail1GameMode::execPauseTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARetail1GameMode::execStartTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARetail1GameMode::execUpdateProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateProgress();
		P_NATIVE_END;
	}
	void ARetail1GameMode::StaticRegisterNativesARetail1GameMode()
	{
		UClass* Class = ARetail1GameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishDay", &ARetail1GameMode::execFinishDay },
			{ "GetProgress", &ARetail1GameMode::execGetProgress },
			{ "PauseTimer", &ARetail1GameMode::execPauseTimer },
			{ "ResetTimer", &ARetail1GameMode::execResetTimer },
			{ "ResumeTimer", &ARetail1GameMode::execResumeTimer },
			{ "StartTimer", &ARetail1GameMode::execStartTimer },
			{ "UpdateProgress", &ARetail1GameMode::execUpdateProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARetail1GameMode_FinishDay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARetail1GameMode_FinishDay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Daily" },
		{ "Comment", "/** Day has ended*/" },
		{ "ModuleRelativePath", "Retail1GameMode.h" },
		{ "ToolTip", "Day has ended" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARetail1GameMode_FinishDay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARetail1GameMode, nullptr, "FinishDay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARetail1GameMode_FinishDay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARetail1GameMode_FinishDay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARetail1GameMode_FinishDay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARetail1GameMode_FinishDay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARetail1GameMode_GetProgress_Statics
	{
		struct Retail1GameMode_eventGetProgress_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARetail1GameMode_GetProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Retail1GameMode_eventGetProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARetail1GameMode_GetProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARetail1GameMode_GetProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARetail1GameMode_GetProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Daily" },
		{ "Comment", "/** Return the current time of day*/" },
		{ "ModuleRelativePath", "Retail1GameMode.h" },
		{ "ToolTip", "Return the current time of day" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARetail1GameMode_GetProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARetail1GameMode, nullptr, "GetProgress", nullptr, nullptr, sizeof(Retail1GameMode_eventGetProgress_Parms), Z_Construct_UFunction_ARetail1GameMode_GetProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARetail1GameMode_GetProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARetail1GameMode_GetProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARetail1GameMode_GetProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARetail1GameMode_GetProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARetail1GameMode_GetProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARetail1GameMode_PauseTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARetail1GameMode_PauseTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Daily" },
		{ "Comment", "/** Pauses the day timer*/" },
		{ "ModuleRelativePath", "Retail1GameMode.h" },
		{ "ToolTip", "Pauses the day timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARetail1GameMode_PauseTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARetail1GameMode, nullptr, "PauseTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARetail1GameMode_PauseTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARetail1GameMode_PauseTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARetail1GameMode_PauseTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARetail1GameMode_PauseTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARetail1GameMode_ResetTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARetail1GameMode_ResetTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Daily" },
		{ "Comment", "/** Resets the day timer*/" },
		{ "ModuleRelativePath", "Retail1GameMode.h" },
		{ "ToolTip", "Resets the day timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARetail1GameMode_ResetTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARetail1GameMode, nullptr, "ResetTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARetail1GameMode_ResetTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARetail1GameMode_ResetTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARetail1GameMode_ResetTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARetail1GameMode_ResetTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARetail1GameMode_ResumeTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARetail1GameMode_ResumeTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Daily" },
		{ "Comment", "/** Resumes (if paused) the day timer*/" },
		{ "ModuleRelativePath", "Retail1GameMode.h" },
		{ "ToolTip", "Resumes (if paused) the day timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARetail1GameMode_ResumeTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARetail1GameMode, nullptr, "ResumeTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARetail1GameMode_ResumeTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARetail1GameMode_ResumeTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARetail1GameMode_ResumeTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARetail1GameMode_ResumeTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARetail1GameMode_StartTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARetail1GameMode_StartTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Daily" },
		{ "Comment", "/** Starts the day timer*/" },
		{ "ModuleRelativePath", "Retail1GameMode.h" },
		{ "ToolTip", "Starts the day timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARetail1GameMode_StartTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARetail1GameMode, nullptr, "StartTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARetail1GameMode_StartTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARetail1GameMode_StartTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARetail1GameMode_StartTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARetail1GameMode_StartTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARetail1GameMode_UpdateProgress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARetail1GameMode_UpdateProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cleanup" },
		{ "Comment", "/** Updates the progress bar based on timer*/" },
		{ "ModuleRelativePath", "Retail1GameMode.h" },
		{ "ToolTip", "Updates the progress bar based on timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARetail1GameMode_UpdateProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARetail1GameMode, nullptr, "UpdateProgress", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARetail1GameMode_UpdateProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARetail1GameMode_UpdateProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARetail1GameMode_UpdateProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARetail1GameMode_UpdateProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARetail1GameMode_NoRegister()
	{
		return ARetail1GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARetail1GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
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
	UObject* (*const Z_Construct_UClass_ARetail1GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Retail1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARetail1GameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARetail1GameMode_FinishDay, "FinishDay" }, // 4174152436
		{ &Z_Construct_UFunction_ARetail1GameMode_GetProgress, "GetProgress" }, // 1243529262
		{ &Z_Construct_UFunction_ARetail1GameMode_PauseTimer, "PauseTimer" }, // 369511712
		{ &Z_Construct_UFunction_ARetail1GameMode_ResetTimer, "ResetTimer" }, // 3741248965
		{ &Z_Construct_UFunction_ARetail1GameMode_ResumeTimer, "ResumeTimer" }, // 1770522857
		{ &Z_Construct_UFunction_ARetail1GameMode_StartTimer, "StartTimer" }, // 2624068915
		{ &Z_Construct_UFunction_ARetail1GameMode_UpdateProgress, "UpdateProgress" }, // 3641797141
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetail1GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Retail1GameMode.h" },
		{ "ModuleRelativePath", "Retail1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** The instance of the HUD Widget class*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Retail1GameMode.h" },
		{ "ToolTip", "The instance of the HUD Widget class" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARetail1GameMode, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_CurrentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_CurrentWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_HUDWidgetClass_MetaData[] = {
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "Widget" },
		{ "Comment", "/** Widget class to use for HUD screen*/" },
		{ "ModuleRelativePath", "Retail1GameMode.h" },
		{ "ToolTip", "Widget class to use for HUD screen" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0024080000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARetail1GameMode, HUDWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_HUDWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_HUDWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_timerPaused_MetaData[] = {
		{ "Category", "Daily" },
		{ "Comment", "/** If this timer is currently paused*/" },
		{ "ModuleRelativePath", "Retail1GameMode.h" },
		{ "ToolTip", "If this timer is currently paused" },
	};
#endif
	void Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_timerPaused_SetBit(void* Obj)
	{
		((ARetail1GameMode*)Obj)->timerPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_timerPaused = { "timerPaused", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARetail1GameMode), &Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_timerPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_timerPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_timerPaused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_timerStarted_MetaData[] = {
		{ "Category", "Daily" },
		{ "Comment", "/** If this timer has been activated*/" },
		{ "ModuleRelativePath", "Retail1GameMode.h" },
		{ "ToolTip", "If this timer has been activated" },
	};
#endif
	void Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_timerStarted_SetBit(void* Obj)
	{
		((ARetail1GameMode*)Obj)->timerStarted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_timerStarted = { "timerStarted", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARetail1GameMode), &Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_timerStarted_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_timerStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_timerStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_progress_MetaData[] = {
		{ "Category", "Daily" },
		{ "Comment", "/** How much of the day has passed*/" },
		{ "ModuleRelativePath", "Retail1GameMode.h" },
		{ "ToolTip", "How much of the day has passed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_progress = { "progress", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARetail1GameMode, progress), METADATA_PARAMS(Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_progress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_timeToComplete_MetaData[] = {
		{ "Category", "Daily" },
		{ "Comment", "/** How long the shift is*/" },
		{ "ModuleRelativePath", "Retail1GameMode.h" },
		{ "ToolTip", "How long the shift is" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_timeToComplete = { "timeToComplete", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARetail1GameMode, timeToComplete), METADATA_PARAMS(Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_timeToComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_timeToComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_timer_MetaData[] = {
		{ "Category", "Daily" },
		{ "Comment", "/** THe timer handle for daily shift*/" },
		{ "ModuleRelativePath", "Retail1GameMode.h" },
		{ "ToolTip", "THe timer handle for daily shift" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_timer = { "timer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARetail1GameMode, timer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_timer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARetail1GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_CurrentWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_HUDWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_timerPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_timerStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_progress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_timeToComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetail1GameMode_Statics::NewProp_timer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARetail1GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARetail1GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARetail1GameMode_Statics::ClassParams = {
		&ARetail1GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARetail1GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARetail1GameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARetail1GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARetail1GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARetail1GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARetail1GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARetail1GameMode, 2391744125);
	template<> RETAIL1_API UClass* StaticClass<ARetail1GameMode>()
	{
		return ARetail1GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARetail1GameMode(Z_Construct_UClass_ARetail1GameMode, &ARetail1GameMode::StaticClass, TEXT("/Script/Retail1"), TEXT("ARetail1GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARetail1GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
