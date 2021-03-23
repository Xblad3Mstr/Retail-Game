// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Retail1/Public/Coworker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoworker() {}
// Cross Module References
	RETAIL1_API UClass* Z_Construct_UClass_ACoworker_NoRegister();
	RETAIL1_API UClass* Z_Construct_UClass_ACoworker();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Retail1();
// End Cross Module References
	DEFINE_FUNCTION(ACoworker::execSetCanLoot)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanLoot(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoworker::execGetCanLoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCanLoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoworker::execSetPettyCash)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPettyCash(Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoworker::execGetPettyCash)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPettyCash();
		P_NATIVE_END;
	}
	void ACoworker::StaticRegisterNativesACoworker()
	{
		UClass* Class = ACoworker::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCanLoot", &ACoworker::execGetCanLoot },
			{ "GetPettyCash", &ACoworker::execGetPettyCash },
			{ "SetCanLoot", &ACoworker::execSetCanLoot },
			{ "SetPettyCash", &ACoworker::execSetPettyCash },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACoworker_GetCanLoot_Statics
	{
		struct Coworker_eventGetCanLoot_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACoworker_GetCanLoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Coworker_eventGetCanLoot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACoworker_GetCanLoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Coworker_eventGetCanLoot_Parms), &Z_Construct_UFunction_ACoworker_GetCanLoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoworker_GetCanLoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoworker_GetCanLoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoworker_GetCanLoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coworker" },
		{ "Comment", "/** Get if this coworker can be looted*/" },
		{ "ModuleRelativePath", "Public/Coworker.h" },
		{ "ToolTip", "Get if this coworker can be looted" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoworker_GetCanLoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoworker, nullptr, "GetCanLoot", nullptr, nullptr, sizeof(Coworker_eventGetCanLoot_Parms), Z_Construct_UFunction_ACoworker_GetCanLoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoworker_GetCanLoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoworker_GetCanLoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoworker_GetCanLoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoworker_GetCanLoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACoworker_GetCanLoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoworker_GetPettyCash_Statics
	{
		struct Coworker_eventGetPettyCash_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACoworker_GetPettyCash_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Coworker_eventGetPettyCash_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoworker_GetPettyCash_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoworker_GetPettyCash_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoworker_GetPettyCash_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coworker" },
		{ "Comment", "/** Get the amount of petty cash this coworker has*/" },
		{ "ModuleRelativePath", "Public/Coworker.h" },
		{ "ToolTip", "Get the amount of petty cash this coworker has" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoworker_GetPettyCash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoworker, nullptr, "GetPettyCash", nullptr, nullptr, sizeof(Coworker_eventGetPettyCash_Parms), Z_Construct_UFunction_ACoworker_GetPettyCash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoworker_GetPettyCash_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoworker_GetPettyCash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoworker_GetPettyCash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoworker_GetPettyCash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACoworker_GetPettyCash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoworker_SetCanLoot_Statics
	{
		struct Coworker_eventSetCanLoot_Parms
		{
			bool value;
		};
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACoworker_SetCanLoot_Statics::NewProp_value_SetBit(void* Obj)
	{
		((Coworker_eventSetCanLoot_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACoworker_SetCanLoot_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Coworker_eventSetCanLoot_Parms), &Z_Construct_UFunction_ACoworker_SetCanLoot_Statics::NewProp_value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoworker_SetCanLoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoworker_SetCanLoot_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoworker_SetCanLoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coworker" },
		{ "Comment", "/** Set the amount of petty cash this coworker has*/" },
		{ "ModuleRelativePath", "Public/Coworker.h" },
		{ "ToolTip", "Set the amount of petty cash this coworker has" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoworker_SetCanLoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoworker, nullptr, "SetCanLoot", nullptr, nullptr, sizeof(Coworker_eventSetCanLoot_Parms), Z_Construct_UFunction_ACoworker_SetCanLoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoworker_SetCanLoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoworker_SetCanLoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoworker_SetCanLoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoworker_SetCanLoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACoworker_SetCanLoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoworker_SetPettyCash_Statics
	{
		struct Coworker_eventSetPettyCash_Parms
		{
			float amount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACoworker_SetPettyCash_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Coworker_eventSetPettyCash_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoworker_SetPettyCash_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoworker_SetPettyCash_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoworker_SetPettyCash_Statics::Function_MetaDataParams[] = {
		{ "Category", "Coworker" },
		{ "Comment", "/** Set the amount of petty cash this coworker has*/" },
		{ "ModuleRelativePath", "Public/Coworker.h" },
		{ "ToolTip", "Set the amount of petty cash this coworker has" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoworker_SetPettyCash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoworker, nullptr, "SetPettyCash", nullptr, nullptr, sizeof(Coworker_eventSetPettyCash_Parms), Z_Construct_UFunction_ACoworker_SetPettyCash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoworker_SetPettyCash_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoworker_SetPettyCash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoworker_SetPettyCash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoworker_SetPettyCash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACoworker_SetPettyCash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACoworker_NoRegister()
	{
		return ACoworker::StaticClass();
	}
	struct Z_Construct_UClass_ACoworker_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pettyCash_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_pettyCash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_canBeLooted_MetaData[];
#endif
		static void NewProp_canBeLooted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canBeLooted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACoworker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Retail1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACoworker_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACoworker_GetCanLoot, "GetCanLoot" }, // 3428296773
		{ &Z_Construct_UFunction_ACoworker_GetPettyCash, "GetPettyCash" }, // 2311825228
		{ &Z_Construct_UFunction_ACoworker_SetCanLoot, "SetCanLoot" }, // 2917750573
		{ &Z_Construct_UFunction_ACoworker_SetPettyCash, "SetPettyCash" }, // 1449968624
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoworker_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Coworker.h" },
		{ "ModuleRelativePath", "Public/Coworker.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoworker_Statics::NewProp_pettyCash_MetaData[] = {
		{ "Category", "Coworker" },
		{ "ModuleRelativePath", "Public/Coworker.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACoworker_Statics::NewProp_pettyCash = { "pettyCash", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoworker, pettyCash), METADATA_PARAMS(Z_Construct_UClass_ACoworker_Statics::NewProp_pettyCash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoworker_Statics::NewProp_pettyCash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoworker_Statics::NewProp_canBeLooted_MetaData[] = {
		{ "Category", "Coworker" },
		{ "ModuleRelativePath", "Public/Coworker.h" },
	};
#endif
	void Z_Construct_UClass_ACoworker_Statics::NewProp_canBeLooted_SetBit(void* Obj)
	{
		((ACoworker*)Obj)->canBeLooted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACoworker_Statics::NewProp_canBeLooted = { "canBeLooted", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACoworker), &Z_Construct_UClass_ACoworker_Statics::NewProp_canBeLooted_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACoworker_Statics::NewProp_canBeLooted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoworker_Statics::NewProp_canBeLooted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoworker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoworker_Statics::NewProp_pettyCash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoworker_Statics::NewProp_canBeLooted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoworker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoworker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACoworker_Statics::ClassParams = {
		&ACoworker::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACoworker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACoworker_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACoworker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACoworker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACoworker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACoworker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACoworker, 33119692);
	template<> RETAIL1_API UClass* StaticClass<ACoworker>()
	{
		return ACoworker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACoworker(Z_Construct_UClass_ACoworker, &ACoworker::StaticClass, TEXT("/Script/Retail1"), TEXT("ACoworker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoworker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
