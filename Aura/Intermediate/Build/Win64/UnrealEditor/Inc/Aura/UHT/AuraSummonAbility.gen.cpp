// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/Abilities/AuraSummonAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraSummonAbility() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAuraGameplayAbility();
	AURA_API UClass* Z_Construct_UClass_UAuraSummonAbility();
	AURA_API UClass* Z_Construct_UClass_UAuraSummonAbility_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	DEFINE_FUNCTION(UAuraSummonAbility::execGetSpawnLocations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetSpawnLocations();
		P_NATIVE_END;
	}
	void UAuraSummonAbility::StaticRegisterNativesUAuraSummonAbility()
	{
		UClass* Class = UAuraSummonAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSpawnLocations", &UAuraSummonAbility::execGetSpawnLocations },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAuraSummonAbility_GetSpawnLocations_Statics
	{
		struct AuraSummonAbility_eventGetSpawnLocations_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraSummonAbility_GetSpawnLocations_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAuraSummonAbility_GetSpawnLocations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraSummonAbility_eventGetSpawnLocations_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraSummonAbility_GetSpawnLocations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraSummonAbility_GetSpawnLocations_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraSummonAbility_GetSpawnLocations_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraSummonAbility_GetSpawnLocations_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/AuraSummonAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraSummonAbility_GetSpawnLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraSummonAbility, nullptr, "GetSpawnLocations", nullptr, nullptr, Z_Construct_UFunction_UAuraSummonAbility_GetSpawnLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraSummonAbility_GetSpawnLocations_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraSummonAbility_GetSpawnLocations_Statics::AuraSummonAbility_eventGetSpawnLocations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraSummonAbility_GetSpawnLocations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraSummonAbility_GetSpawnLocations_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraSummonAbility_GetSpawnLocations_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraSummonAbility_GetSpawnLocations_Statics::AuraSummonAbility_eventGetSpawnLocations_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraSummonAbility_GetSpawnLocations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraSummonAbility_GetSpawnLocations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraSummonAbility);
	UClass* Z_Construct_UClass_UAuraSummonAbility_NoRegister()
	{
		return UAuraSummonAbility::StaticClass();
	}
	struct Z_Construct_UClass_UAuraSummonAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumMinions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumMinions;
		static const UECodeGen_Private::FClassPropertyParams NewProp_MinionClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinionClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MinionClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpawnDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpawnDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpawnDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpawnDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnSpread_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnSpread;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuraSummonAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAuraGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraSummonAbility_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAuraSummonAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAuraSummonAbility_GetSpawnLocations, "GetSpawnLocations" }, // 1931835201
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraSummonAbility_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraSummonAbility_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/AuraSummonAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/AuraSummonAbility.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraSummonAbility_Statics::NewProp_NumMinions_MetaData[] = {
		{ "Category", "Summoning" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/AuraSummonAbility.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAuraSummonAbility_Statics::NewProp_NumMinions = { "NumMinions", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraSummonAbility, NumMinions), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraSummonAbility_Statics::NewProp_NumMinions_MetaData), Z_Construct_UClass_UAuraSummonAbility_Statics::NewProp_NumMinions_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAuraSummonAbility_Statics::NewProp_MinionClasses_Inner = { "MinionClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraSummonAbility_Statics::NewProp_MinionClasses_MetaData[] = {
		{ "Category", "Summoning" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/AuraSummonAbility.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAuraSummonAbility_Statics::NewProp_MinionClasses = { "MinionClasses", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraSummonAbility, MinionClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraSummonAbility_Statics::NewProp_MinionClasses_MetaData), Z_Construct_UClass_UAuraSummonAbility_Statics::NewProp_MinionClasses_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraSummonAbility_Statics::NewProp_MinSpawnDistance_MetaData[] = {
		{ "Category", "Summoning" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/AuraSummonAbility.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAuraSummonAbility_Statics::NewProp_MinSpawnDistance = { "MinSpawnDistance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraSummonAbility, MinSpawnDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraSummonAbility_Statics::NewProp_MinSpawnDistance_MetaData), Z_Construct_UClass_UAuraSummonAbility_Statics::NewProp_MinSpawnDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraSummonAbility_Statics::NewProp_MaxSpawnDistance_MetaData[] = {
		{ "Category", "Summoning" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/AuraSummonAbility.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAuraSummonAbility_Statics::NewProp_MaxSpawnDistance = { "MaxSpawnDistance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraSummonAbility, MaxSpawnDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraSummonAbility_Statics::NewProp_MaxSpawnDistance_MetaData), Z_Construct_UClass_UAuraSummonAbility_Statics::NewProp_MaxSpawnDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraSummonAbility_Statics::NewProp_SpawnSpread_MetaData[] = {
		{ "Category", "Summoning" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/AuraSummonAbility.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAuraSummonAbility_Statics::NewProp_SpawnSpread = { "SpawnSpread", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraSummonAbility, SpawnSpread), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraSummonAbility_Statics::NewProp_SpawnSpread_MetaData), Z_Construct_UClass_UAuraSummonAbility_Statics::NewProp_SpawnSpread_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAuraSummonAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraSummonAbility_Statics::NewProp_NumMinions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraSummonAbility_Statics::NewProp_MinionClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraSummonAbility_Statics::NewProp_MinionClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraSummonAbility_Statics::NewProp_MinSpawnDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraSummonAbility_Statics::NewProp_MaxSpawnDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraSummonAbility_Statics::NewProp_SpawnSpread,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuraSummonAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraSummonAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraSummonAbility_Statics::ClassParams = {
		&UAuraSummonAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAuraSummonAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAuraSummonAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraSummonAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraSummonAbility_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraSummonAbility_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAuraSummonAbility()
	{
		if (!Z_Registration_Info_UClass_UAuraSummonAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraSummonAbility.OuterSingleton, Z_Construct_UClass_UAuraSummonAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAuraSummonAbility.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UAuraSummonAbility>()
	{
		return UAuraSummonAbility::StaticClass();
	}
	UAuraSummonAbility::UAuraSummonAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraSummonAbility);
	UAuraSummonAbility::~UAuraSummonAbility() {}
	struct Z_CompiledInDeferFile_FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraSummonAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraSummonAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAuraSummonAbility, UAuraSummonAbility::StaticClass, TEXT("UAuraSummonAbility"), &Z_Registration_Info_UClass_UAuraSummonAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraSummonAbility), 4207986029U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraSummonAbility_h_2070191433(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraSummonAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_AbilitySystem_Abilities_AuraSummonAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
