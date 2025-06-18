// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/UI/Widget/AuraUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraUserWidget() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAuraUserWidget();
	AURA_API UClass* Z_Construct_UClass_UAuraUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	static FName NAME_UAuraUserWidget_WidgetControllerSet = FName(TEXT("WidgetControllerSet"));
	void UAuraUserWidget::WidgetControllerSet()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAuraUserWidget_WidgetControllerSet),NULL);
	}
	void UAuraUserWidget::StaticRegisterNativesUAuraUserWidget()
	{
	}
	struct Z_Construct_UFunction_UAuraUserWidget_WidgetControllerSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraUserWidget_WidgetControllerSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widget/AuraUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraUserWidget_WidgetControllerSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraUserWidget, nullptr, "WidgetControllerSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraUserWidget_WidgetControllerSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraUserWidget_WidgetControllerSet_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAuraUserWidget_WidgetControllerSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraUserWidget_WidgetControllerSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraUserWidget);
	UClass* Z_Construct_UClass_UAuraUserWidget_NoRegister()
	{
		return UAuraUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UAuraUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WidgetController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuraUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraUserWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAuraUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAuraUserWidget_WidgetControllerSet, "WidgetControllerSet" }, // 2147179199
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraUserWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraUserWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Widget/AuraUserWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Widget/AuraUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraUserWidget_Statics::NewProp_WidgetController_MetaData[] = {
		{ "Category", "AuraUserWidget" },
		{ "ModuleRelativePath", "Public/UI/Widget/AuraUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAuraUserWidget_Statics::NewProp_WidgetController = { "WidgetController", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraUserWidget, WidgetController), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraUserWidget_Statics::NewProp_WidgetController_MetaData), Z_Construct_UClass_UAuraUserWidget_Statics::NewProp_WidgetController_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAuraUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraUserWidget_Statics::NewProp_WidgetController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuraUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraUserWidget_Statics::ClassParams = {
		&UAuraUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAuraUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAuraUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraUserWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraUserWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAuraUserWidget()
	{
		if (!Z_Registration_Info_UClass_UAuraUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraUserWidget.OuterSingleton, Z_Construct_UClass_UAuraUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAuraUserWidget.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UAuraUserWidget>()
	{
		return UAuraUserWidget::StaticClass();
	}
	UAuraUserWidget::UAuraUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraUserWidget);
	UAuraUserWidget::~UAuraUserWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_UI_Widget_AuraUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_UI_Widget_AuraUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAuraUserWidget, UAuraUserWidget::StaticClass, TEXT("UAuraUserWidget"), &Z_Registration_Info_UClass_UAuraUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraUserWidget), 21255260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_UI_Widget_AuraUserWidget_h_4231580122(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_UI_Widget_AuraUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_UI_Widget_AuraUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
