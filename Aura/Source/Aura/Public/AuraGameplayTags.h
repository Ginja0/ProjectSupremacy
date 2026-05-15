// Copyright Mythos Architects

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"


/**
 * AuraGamplayTags
 * Singleton containing native gameplaytags
 * 
 */
struct FAuraGameplayTags
{
public:
	static const FAuraGameplayTags& Get() { return GameplayTags;}
	static void InitializeGameplayTags();

	//Primary Attributes
	FGameplayTag Attributes_Primary_Strength;
	FGameplayTag Attributes_Primary_Intelligence;
	FGameplayTag Attributes_Primary_Resilence;
	FGameplayTag Attributes_Primary_Vigor;


	
	//Secondary Attributes
	FGameplayTag Attributes_Secondary_Armor;
	FGameplayTag Attributes_Secondary_ArmorPenetration;
	FGameplayTag Attributes_Secondary_BlockChance;
	FGameplayTag Attributes_Secondary_CriticalHitChance;
	FGameplayTag Attributes_Secondary_CriticalHitDamage;
	FGameplayTag Attributes_Secondary_CriticalHitResistance;
	FGameplayTag Attributes_Secondary_HealthRegeneration;
	FGameplayTag Attributes_Secondary_ManaRegeneration;
	FGameplayTag Attributes_Secondary_MaxHealth;
	FGameplayTag Attributes_Secondary_MaxMana;

	//Resistance
	FGameplayTag Attributes_Resistance_Arcane;
	FGameplayTag Attributes_Resistance_Fire;
	FGameplayTag Attributes_Resistance_Lightning;
	FGameplayTag Attributes_Resistance_Physical;

	//Inputs
	FGameplayTag InputTag_LMB;
	FGameplayTag InputTag_RMB;
	FGameplayTag InputTag_1;
	FGameplayTag InputTag_2;
	FGameplayTag InputTag_3;
	FGameplayTag InputTag_4;

	//Damage Types
	FGameplayTag Damage;
	FGameplayTag Damage_Arcane;
	FGameplayTag Damage_Fire;
	FGameplayTag Damage_Lightning;
	FGameplayTag Damage_Physical;

	FGameplayTag Abilities_Attack;

	//Montage Tags
	FGameplayTag Montage_Attack_1;
	FGameplayTag Montage_Attack_2;
	FGameplayTag Montage_Attack_3;
	FGameplayTag Montage_Attack_4;

	
	FGameplayTag CombatSocket_Weapon;
	FGameplayTag CombatSocket_RightHand;
	FGameplayTag  CombatSocket_LeftHand;
	FGameplayTag  CombatSocket_Tail;

	TMap<FGameplayTag, FGameplayTag> DamageTypesToResistances;
	
	FGameplayTag Effects_HitReact;



private:
	static FAuraGameplayTags GameplayTags;
};
