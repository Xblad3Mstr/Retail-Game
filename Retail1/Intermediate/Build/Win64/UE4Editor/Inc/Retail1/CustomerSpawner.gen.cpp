// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Retail1/Public/CustomerSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomerSpawner() {}
// Cross Module References
	RETAIL1_API UClass* Z_Construct_UClass_ACustomerSpawner_NoRegister();
	RETAIL1_API UClass* Z_Construct_UClass_ACustomerSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Retail1();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	RETAIL1_API UClass* Z_Construct_UClass_ACustomer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACustomerSpawner::execSetSpawningActive)
	{
		P_GET_UBOOL(Z_Param_bShouldSpawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpawningActive(Z_Param_bShouldSpawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomerSpawner::execGetRandomPointInVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetRandomPointInVolume();
		P_NATIVE_END;
	}
	void ACustomerSpawner::StaticRegisterNativesACustomerSpawner()
	{
		UClass* Class = ACustomerSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRandomPointInVolume", &ACustomerSpawner::execGetRandomPointInVolume },
			{ "SetSpawningActive", &ACustomerSpawner::execSetSpawningActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACustomerSpawner_GetRandomPointInVolume_Statics
	{
		struct CustomerSpawner_eventGetRandomPointInVolume_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACustomerSpawner_GetRandomPointInVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomerSpawner_eventGetRandomPointInVolume_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACustomerSpawner_GetRandomPointInVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomerSpawner_GetRandomPointInVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomerSpawner_GetRandomPointInVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/** Find a random point within the BoxComponent*/" },
		{ "ModuleRelativePath", "Public/CustomerSpawner.h" },
		{ "ToolTip", "Find a random point within the BoxComponent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomerSpawner_GetRandomPointInVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomerSpawner, nullptr, "GetRandomPointInVolume", nullptr, nullptr, sizeof(CustomerSpawner_eventGetRandomPointInVolume_Parms), Z_Construct_UFunction_ACustomerSpawner_GetRandomPointInVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomerSpawner_GetRandomPointInVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomerSpawner_GetRandomPointInVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomerSpawner_GetRandomPointInVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomerSpawner_GetRandomPointInVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomerSpawner_GetRandomPointInVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomerSpawner_SetSpawningActive_Statics
	{
		struct CustomerSpawner_eventSetSpawningActive_Parms
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
	void Z_Construct_UFunction_ACustomerSpawner_SetSpawningActive_Statics::NewProp_bShouldSpawn_SetBit(void* Obj)
	{
		((CustomerSpawner_eventSetSpawningActive_Parms*)Obj)->bShouldSpawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACustomerSpawner_SetSpawningActive_Statics::NewProp_bShouldSpawn = { "bShouldSpawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomerSpawner_eventSetSpawningActive_Parms), &Z_Construct_UFunction_ACustomerSpawner_SetSpawningActive_Statics::NewProp_bShouldSpawn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACustomerSpawner_SetSpawningActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomerSpawner_SetSpawningActive_Statics::NewProp_bShouldSpawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomerSpawner_SetSpawningActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/** Toggle spawning on and off*/" },
		{ "ModuleRelativePath", "Public/CustomerSpawner.h" },
		{ "ToolTip", "Toggle spawning on and off" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomerSpawner_SetSpawningActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomerSpawner, nullptr, "SetSpawningActive", nullptr, nullptr, sizeof(CustomerSpawner_eventSetSpawningActive_Parms), Z_Construct_UFunction_ACustomerSpawner_SetSpawningActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomerSpawner_SetSpawningActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomerSpawner_SetSpawningActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomerSpawner_SetSpawningActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomerSpawner_SetSpawningActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomerSpawner_SetSpawningActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACustomerSpawner_NoRegister()
	{
		return ACustomerSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ACustomerSpawner_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WhatToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WhatToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACustomerSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Retail1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACustomerSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACustomerSpawner_GetRandomPointInVolume, "GetRandomPointInVolume" }, // 2380595368
		{ &Z_Construct_UFunction_ACustomerSpawner_SetSpawningActive, "SetSpawningActive" }, // 489602928
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomerSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CustomerSpawner.h" },
		{ "ModuleRelativePath", "Public/CustomerSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomerSpawner_Statics::NewProp_WhereToSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Spawning" },
		{ "Comment", "/** Box component to specify where Customers should be spawned*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CustomerSpawner.h" },
		{ "ToolTip", "Box component to specify where Customers should be spawned" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomerSpawner_Statics::NewProp_WhereToSpawn = { "WhereToSpawn", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomerSpawner, WhereToSpawn), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACustomerSpawner_Statics::NewProp_WhereToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomerSpawner_Statics::NewProp_WhereToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomerSpawner_Statics::NewProp_SpawnDelayRangeHigh_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/** Maximum Spawn Delay*/" },
		{ "ModuleRelativePath", "Public/CustomerSpawner.h" },
		{ "ToolTip", "Maximum Spawn Delay" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACustomerSpawner_Statics::NewProp_SpawnDelayRangeHigh = { "SpawnDelayRangeHigh", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomerSpawner, SpawnDelayRangeHigh), METADATA_PARAMS(Z_Construct_UClass_ACustomerSpawner_Statics::NewProp_SpawnDelayRangeHigh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomerSpawner_Statics::NewProp_SpawnDelayRangeHigh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomerSpawner_Statics::NewProp_SpawnDelayRangeLow_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/** Minimum Spawn Delay*/" },
		{ "ModuleRelativePath", "Public/CustomerSpawner.h" },
		{ "ToolTip", "Minimum Spawn Delay" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACustomerSpawner_Statics::NewProp_SpawnDelayRangeLow = { "SpawnDelayRangeLow", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomerSpawner, SpawnDelayRangeLow), METADATA_PARAMS(Z_Construct_UClass_ACustomerSpawner_Statics::NewProp_SpawnDelayRangeLow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomerSpawner_Statics::NewProp_SpawnDelayRangeLow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomerSpawner_Statics::NewProp_WhatToSpawn_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/** The Customer to spawn*/" },
		{ "ModuleRelativePath", "Public/CustomerSpawner.h" },
		{ "ToolTip", "The Customer to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACustomerSpawner_Statics::NewProp_WhatToSpawn = { "WhatToSpawn", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomerSpawner, WhatToSpawn), Z_Construct_UClass_ACustomer_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACustomerSpawner_Statics::NewProp_WhatToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomerSpawner_Statics::NewProp_WhatToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACustomerSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomerSpawner_Statics::NewProp_WhereToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomerSpawner_Statics::NewProp_SpawnDelayRangeHigh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomerSpawner_Statics::NewProp_SpawnDelayRangeLow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomerSpawner_Statics::NewProp_WhatToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACustomerSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomerSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACustomerSpawner_Statics::ClassParams = {
		&ACustomerSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACustomerSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACustomerSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACustomerSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomerSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACustomerSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACustomerSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACustomerSpawner, 124527570);
	template<> RETAIL1_API UClass* StaticClass<ACustomerSpawner>()
	{
		return ACustomerSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACustomerSpawner(Z_Construct_UClass_ACustomerSpawner, &ACustomerSpawner::StaticClass, TEXT("/Script/Retail1"), TEXT("ACustomerSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomerSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
