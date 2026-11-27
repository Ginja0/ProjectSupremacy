// Copyright Mythos Architects

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include  "GameplayTagContainer.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "WaitCooldownChange.generated.h"


class UAbilitySystemComponent;
struct FActiveGameplayEffect;
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCooldownChangeSignature,float,TimeRemaining);
/**
 * 
 */
UCLASS(BlueprintType, meta=(ExposedAsyncProxy = "ASyncTask"))
class AURA_API UWaitCooldownChange : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
	
	public:
	UPROPERTY(BlueprintAssignable)
	FCooldownChangeSignature CooldownStart;
	
	UPROPERTY(BlueprintAssignable)
	FCooldownChangeSignature CooldownEnd;
	
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalMethod = "true"))
	static UWaitCooldownChange* UWaitForCooldownChange(UAbilitySystemComponent* AbilitySystemComponent, const FGameplayTag& InCooldownTag);
	
	UFUNCTION(BlueprintCallable)
	void EndTask();
	
	protected:
	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> ASC;
	
	
	FGameplayTag CooldownTag;
	
	void CooldownTagChanged(const FGameplayTag InCooldownTag, int32 NewCount);
	void OnActiveEffectAdded(UAbilitySystemComponent* TargetASC, const FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveEffectHandle);
};
