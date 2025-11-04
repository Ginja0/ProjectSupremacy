// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AuraAbilityTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraAbilityTypes() {}
// Cross Module References
	AURA_API UScriptStruct* Z_Construct_UScriptStruct_FAuraGameplayContext();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContext();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References

static_assert(std::is_polymorphic<FAuraGameplayContext>() == std::is_polymorphic<FGameplayEffectContext>(), "USTRUCT FAuraGameplayContext cannot be polymorphic unless super FGameplayEffectContext is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AuraGameplayContext;
class UScriptStruct* FAuraGameplayContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AuraGameplayContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AuraGameplayContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuraGameplayContext, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("AuraGameplayContext"));
	}
	return Z_Registration_Info_UScriptStruct_AuraGameplayContext.OuterSingleton;
}
template<> AURA_API UScriptStruct* StaticStruct<FAuraGameplayContext>()
{
	return FAuraGameplayContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAuraGameplayContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuraGameplayContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AuraAbilityTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAuraGameplayContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuraGameplayContext>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuraGameplayContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
		Z_Construct_UScriptStruct_FGameplayEffectContext,
		&NewStructOps,
		"AuraGameplayContext",
		nullptr,
		0,
		sizeof(FAuraGameplayContext),
		alignof(FAuraGameplayContext),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraGameplayContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAuraGameplayContext_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAuraGameplayContext()
	{
		if (!Z_Registration_Info_UScriptStruct_AuraGameplayContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AuraGameplayContext.InnerSingleton, Z_Construct_UScriptStruct_FAuraGameplayContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AuraGameplayContext.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_AuraAbilityTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_AuraAbilityTypes_h_Statics::ScriptStructInfo[] = {
		{ FAuraGameplayContext::StaticStruct, Z_Construct_UScriptStruct_FAuraGameplayContext_Statics::NewStructOps, TEXT("AuraGameplayContext"), &Z_Registration_Info_UScriptStruct_AuraGameplayContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAuraGameplayContext), 3178897152U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_AuraAbilityTypes_h_1173695867(TEXT("/Script/Aura"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_AuraAbilityTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_AuraAbilityTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
