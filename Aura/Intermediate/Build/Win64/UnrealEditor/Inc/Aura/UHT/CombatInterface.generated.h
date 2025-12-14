// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interact/CombatInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAnimMontage;
class UNiagaraSystem;
struct FGameplayTag;
struct FTaggedMontage;
#ifdef AURA_CombatInterface_generated_h
#error "CombatInterface.generated.h already included, missing '#pragma once' in CombatInterface.h"
#endif
#define AURA_CombatInterface_generated_h

#define FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_Interact_CombatInterface_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTaggedMontage_Statics; \
	AURA_API static class UScriptStruct* StaticStruct();


template<> AURA_API UScriptStruct* StaticStruct<struct FTaggedMontage>();

#define FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_Interact_CombatInterface_h_31_SPARSE_DATA
#define FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_Interact_CombatInterface_h_31_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_Interact_CombatInterface_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_Interact_CombatInterface_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UNiagaraSystem* GetBloodEffect_Implementation() { return NULL; }; \
	virtual TArray<FTaggedMontage> GetAttackMontage_Implementation() { return TArray<FTaggedMontage>(); }; \
	virtual AActor* GetAvatar_Implementation() { return NULL; }; \
	virtual bool IsDead_Implementation() const { return false; }; \
	virtual UAnimMontage* GetHitReactMontage_Implementation() { return NULL; }; \
	virtual FVector GetCombatSocketLocation_Implementation(FGameplayTag const& MontageTag) { return FVector(ForceInit); }; \
 \
	DECLARE_FUNCTION(execGetBloodEffect); \
	DECLARE_FUNCTION(execGetAttackMontage); \
	DECLARE_FUNCTION(execGetAvatar); \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execGetHitReactMontage); \
	DECLARE_FUNCTION(execGetCombatSocketLocation);


#define FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_Interact_CombatInterface_h_31_ACCESSORS
#define FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_Interact_CombatInterface_h_31_CALLBACK_WRAPPERS
#define FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_Interact_CombatInterface_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AURA_API UCombatInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AURA_API UCombatInterface(UCombatInterface&&); \
	AURA_API UCombatInterface(const UCombatInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AURA_API, UCombatInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatInterface) \
	AURA_API virtual ~UCombatInterface();


#define FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_Interact_CombatInterface_h_31_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatInterface(); \
	friend struct Z_Construct_UClass_UCombatInterface_Statics; \
public: \
	DECLARE_CLASS(UCombatInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Aura"), AURA_API) \
	DECLARE_SERIALIZER(UCombatInterface)


#define FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_Interact_CombatInterface_h_31_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_Interact_CombatInterface_h_31_GENERATED_UINTERFACE_BODY() \
	FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_Interact_CombatInterface_h_31_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_Interact_CombatInterface_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatInterface() {} \
public: \
	typedef UCombatInterface UClassType; \
	typedef ICombatInterface ThisClass; \
	static TArray<FTaggedMontage> Execute_GetAttackMontage(UObject* O); \
	static AActor* Execute_GetAvatar(UObject* O); \
	static UNiagaraSystem* Execute_GetBloodEffect(UObject* O); \
	static FVector Execute_GetCombatSocketLocation(UObject* O, FGameplayTag const& MontageTag); \
	static UAnimMontage* Execute_GetHitReactMontage(UObject* O); \
	static bool Execute_IsDead(const UObject* O); \
	static void Execute_UpdateFacingTarget(UObject* O, FVector const& Target); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_Interact_CombatInterface_h_28_PROLOG
#define FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_Interact_CombatInterface_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_Interact_CombatInterface_h_31_SPARSE_DATA \
	FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_Interact_CombatInterface_h_31_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_Interact_CombatInterface_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_Interact_CombatInterface_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_Interact_CombatInterface_h_31_ACCESSORS \
	FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_Interact_CombatInterface_h_31_CALLBACK_WRAPPERS \
	FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_Interact_CombatInterface_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class UCombatInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_USER_Documents_GitHub_ProjectSupremacy_Aura_Source_Aura_Public_Interact_CombatInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
