// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Retail1/Public/Customer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomer() {}
// Cross Module References
	RETAIL1_API UClass* Z_Construct_UClass_ACustomer_NoRegister();
	RETAIL1_API UClass* Z_Construct_UClass_ACustomer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Retail1();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	DEFINE_FUNCTION(ACustomer::execGetItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomer::execFailCustomer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FailCustomer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomer::execFinishWrongCustomer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishWrongCustomer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomer::execFinishCustomer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishCustomer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomer::execResumeTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResumeTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomer::execPauseTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomer::execStartTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomer::execUpdateProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateProgress();
		P_NATIVE_END;
	}
	void ACustomer::StaticRegisterNativesACustomer()
	{
		UClass* Class = ACustomer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FailCustomer", &ACustomer::execFailCustomer },
			{ "FinishCustomer", &ACustomer::execFinishCustomer },
			{ "FinishWrongCustomer", &ACustomer::execFinishWrongCustomer },
			{ "GetItem", &ACustomer::execGetItem },
			{ "PauseTimer", &ACustomer::execPauseTimer },
			{ "ResumeTimer", &ACustomer::execResumeTimer },
			{ "StartTimer", &ACustomer::execStartTimer },
			{ "UpdateProgress", &ACustomer::execUpdateProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACustomer_FailCustomer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomer_FailCustomer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Customer" },
		{ "Comment", "/** Player has failed Customer*/" },
		{ "ModuleRelativePath", "Public/Customer.h" },
		{ "ToolTip", "Player has failed Customer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomer_FailCustomer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomer, nullptr, "FailCustomer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomer_FailCustomer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomer_FailCustomer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomer_FailCustomer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomer_FailCustomer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomer_FinishCustomer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomer_FinishCustomer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Customer" },
		{ "Comment", "/** Player has completed Customer*/" },
		{ "ModuleRelativePath", "Public/Customer.h" },
		{ "ToolTip", "Player has completed Customer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomer_FinishCustomer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomer, nullptr, "FinishCustomer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomer_FinishCustomer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomer_FinishCustomer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomer_FinishCustomer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomer_FinishCustomer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomer_FinishWrongCustomer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomer_FinishWrongCustomer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Customer" },
		{ "Comment", "/** Player has completed Customer with wrong Item*/" },
		{ "ModuleRelativePath", "Public/Customer.h" },
		{ "ToolTip", "Player has completed Customer with wrong Item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomer_FinishWrongCustomer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomer, nullptr, "FinishWrongCustomer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomer_FinishWrongCustomer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomer_FinishWrongCustomer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomer_FinishWrongCustomer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomer_FinishWrongCustomer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomer_GetItem_Statics
	{
		struct Customer_eventGetItem_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ACustomer_GetItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Customer_eventGetItem_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACustomer_GetItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomer_GetItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomer_GetItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Customer" },
		{ "Comment", "/** Return the item this customer wants*/" },
		{ "ModuleRelativePath", "Public/Customer.h" },
		{ "ToolTip", "Return the item this customer wants" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomer_GetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomer, nullptr, "GetItem", nullptr, nullptr, sizeof(Customer_eventGetItem_Parms), Z_Construct_UFunction_ACustomer_GetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomer_GetItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomer_GetItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomer_GetItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomer_GetItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomer_GetItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomer_PauseTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomer_PauseTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Customer" },
		{ "Comment", "/** Pauses the Customer timer*/" },
		{ "ModuleRelativePath", "Public/Customer.h" },
		{ "ToolTip", "Pauses the Customer timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomer_PauseTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomer, nullptr, "PauseTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomer_PauseTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomer_PauseTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomer_PauseTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomer_PauseTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomer_ResumeTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomer_ResumeTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Customer" },
		{ "Comment", "/** Resumes (if paused) the Customer timer*/" },
		{ "ModuleRelativePath", "Public/Customer.h" },
		{ "ToolTip", "Resumes (if paused) the Customer timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomer_ResumeTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomer, nullptr, "ResumeTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomer_ResumeTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomer_ResumeTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomer_ResumeTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomer_ResumeTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomer_StartTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomer_StartTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Customer" },
		{ "Comment", "/** Starts the Customer timer*/" },
		{ "ModuleRelativePath", "Public/Customer.h" },
		{ "ToolTip", "Starts the Customer timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomer_StartTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomer, nullptr, "StartTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomer_StartTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomer_StartTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomer_StartTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomer_StartTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomer_UpdateProgress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomer_UpdateProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Customer" },
		{ "Comment", "/** Updates the progress bar based on timer*/" },
		{ "ModuleRelativePath", "Public/Customer.h" },
		{ "ToolTip", "Updates the progress bar based on timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomer_UpdateProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomer, nullptr, "UpdateProgress", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomer_UpdateProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomer_UpdateProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomer_UpdateProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomer_UpdateProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACustomer_NoRegister()
	{
		return ACustomer::StaticClass();
	}
	struct Z_Construct_UClass_ACustomer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_correctItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_correctItem;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_item;
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
	UObject* (*const Z_Construct_UClass_ACustomer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Retail1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACustomer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACustomer_FailCustomer, "FailCustomer" }, // 1311596418
		{ &Z_Construct_UFunction_ACustomer_FinishCustomer, "FinishCustomer" }, // 2400554090
		{ &Z_Construct_UFunction_ACustomer_FinishWrongCustomer, "FinishWrongCustomer" }, // 1344810574
		{ &Z_Construct_UFunction_ACustomer_GetItem, "GetItem" }, // 2696198302
		{ &Z_Construct_UFunction_ACustomer_PauseTimer, "PauseTimer" }, // 1365371205
		{ &Z_Construct_UFunction_ACustomer_ResumeTimer, "ResumeTimer" }, // 3872668363
		{ &Z_Construct_UFunction_ACustomer_StartTimer, "StartTimer" }, // 270566836
		{ &Z_Construct_UFunction_ACustomer_UpdateProgress, "UpdateProgress" }, // 244501052
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Customer.h" },
		{ "ModuleRelativePath", "Public/Customer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomer_Statics::NewProp_correctItem_MetaData[] = {
		{ "Category", "Customer" },
		{ "ModuleRelativePath", "Public/Customer.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACustomer_Statics::NewProp_correctItem = { "correctItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomer, correctItem), METADATA_PARAMS(Z_Construct_UClass_ACustomer_Statics::NewProp_correctItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomer_Statics::NewProp_correctItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomer_Statics::NewProp_timerPaused_MetaData[] = {
		{ "Category", "Customer" },
		{ "Comment", "/** If this timer is currently paused*/" },
		{ "ModuleRelativePath", "Public/Customer.h" },
		{ "ToolTip", "If this timer is currently paused" },
	};
#endif
	void Z_Construct_UClass_ACustomer_Statics::NewProp_timerPaused_SetBit(void* Obj)
	{
		((ACustomer*)Obj)->timerPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACustomer_Statics::NewProp_timerPaused = { "timerPaused", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACustomer), &Z_Construct_UClass_ACustomer_Statics::NewProp_timerPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACustomer_Statics::NewProp_timerPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomer_Statics::NewProp_timerPaused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomer_Statics::NewProp_timerStarted_MetaData[] = {
		{ "Category", "Customer" },
		{ "Comment", "/** If this timer has been activated*/" },
		{ "ModuleRelativePath", "Public/Customer.h" },
		{ "ToolTip", "If this timer has been activated" },
	};
#endif
	void Z_Construct_UClass_ACustomer_Statics::NewProp_timerStarted_SetBit(void* Obj)
	{
		((ACustomer*)Obj)->timerStarted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACustomer_Statics::NewProp_timerStarted = { "timerStarted", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACustomer), &Z_Construct_UClass_ACustomer_Statics::NewProp_timerStarted_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACustomer_Statics::NewProp_timerStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomer_Statics::NewProp_timerStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomer_Statics::NewProp_item_MetaData[] = {
		{ "Category", "Customer" },
		{ "Comment", "/** What item this Customer wants */" },
		{ "ModuleRelativePath", "Public/Customer.h" },
		{ "ToolTip", "What item this Customer wants" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACustomer_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomer, item), METADATA_PARAMS(Z_Construct_UClass_ACustomer_Statics::NewProp_item_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomer_Statics::NewProp_item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomer_Statics::NewProp_progress_MetaData[] = {
		{ "Category", "Customer" },
		{ "Comment", "/** How much time has passed on this Customer*/" },
		{ "ModuleRelativePath", "Public/Customer.h" },
		{ "ToolTip", "How much time has passed on this Customer" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACustomer_Statics::NewProp_progress = { "progress", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomer, progress), METADATA_PARAMS(Z_Construct_UClass_ACustomer_Statics::NewProp_progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomer_Statics::NewProp_progress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomer_Statics::NewProp_timeToComplete_MetaData[] = {
		{ "Category", "Customer" },
		{ "Comment", "/** How long this Customer will take*/" },
		{ "ModuleRelativePath", "Public/Customer.h" },
		{ "ToolTip", "How long this Customer will take" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACustomer_Statics::NewProp_timeToComplete = { "timeToComplete", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomer, timeToComplete), METADATA_PARAMS(Z_Construct_UClass_ACustomer_Statics::NewProp_timeToComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomer_Statics::NewProp_timeToComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomer_Statics::NewProp_timer_MetaData[] = {
		{ "Category", "Customer" },
		{ "Comment", "/** THe timer handle for Customer time*/" },
		{ "ModuleRelativePath", "Public/Customer.h" },
		{ "ToolTip", "THe timer handle for Customer time" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACustomer_Statics::NewProp_timer = { "timer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomer, timer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ACustomer_Statics::NewProp_timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomer_Statics::NewProp_timer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACustomer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomer_Statics::NewProp_correctItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomer_Statics::NewProp_timerPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomer_Statics::NewProp_timerStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomer_Statics::NewProp_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomer_Statics::NewProp_progress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomer_Statics::NewProp_timeToComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomer_Statics::NewProp_timer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACustomer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACustomer_Statics::ClassParams = {
		&ACustomer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACustomer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACustomer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACustomer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACustomer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACustomer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACustomer, 1298774328);
	template<> RETAIL1_API UClass* StaticClass<ACustomer>()
	{
		return ACustomer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACustomer(Z_Construct_UClass_ACustomer, &ACustomer::StaticClass, TEXT("/Script/Retail1"), TEXT("ACustomer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
