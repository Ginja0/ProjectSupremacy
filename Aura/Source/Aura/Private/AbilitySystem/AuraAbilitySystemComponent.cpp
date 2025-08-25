// Copyright Mythos Architects


#include "AbilitySystem/AuraAbilitySystemComponent.h"

#include "AuraGameplayTags.h"

void UAuraAbilitySystemComponent::AbilityActorInfoSet()
{
	OnGameplayEffectAppliedDelegateToSelf.AddUObject(this, &UAuraAbilitySystemComponent::EffectApplied);

	
}

void UAuraAbilitySystemComponent::EffectApplied(UAbilitySystemComponent* AbilitySystemComponent,
	const FGameplayEffectSpec& Spec, FActiveGameplayEffectHandle ActiveGamplayEffectHandle)
{
	FGameplayTagContainer TagContainer;
	Spec.GetAllAssetTags(TagContainer);

	EffectAssetTags.Broadcast(TagContainer);

}
