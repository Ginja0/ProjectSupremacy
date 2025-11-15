#pragma once

#include "GameplayEffectTypes.h"
#include "AuraAbilityTypes.generated.h"

USTRUCT(BlueprintType)
struct FAuraGameplayContext : public FGameplayEffectContext
{
	GENERATED_BODY()

	
public:

	bool IsCriticalHit() const { return bIsCriticalHit; }
	bool IsBlockedHit() const { return bIsBlockedHit; }

															void SetIsCriticalHit(bool bInIsCriticalHit) {bIsCriticalHit = bInIsCriticalHit; }
	void SetIsBlockedHit(bool bInIsBlockedHit) { bIsBlockedHit = bInIsBlockedHit; }

	virtual UScriptStruct* GetScriptStruct() const override
	{
		return StaticStruct();
	}

	/** Creates a copy of this context, used to duplicate for later modifications */
	virtual FAuraGameplayContext* Duplicate() const
	{
		FAuraGameplayContext* NewContext = new FAuraGameplayContext();
		*NewContext = *this;
		if (GetHitResult())
		{
			// Does a deep copy of the hit result
			NewContext->AddHitResult(*GetHitResult(), true);
		}
		return NewContext;
	}

	virtual bool NetSerialize(FArchive& Ar, class UPackageMap* Map, bool& bOutSuccess) override;

	

	

protected:

	bool bIsBlockedHit = false;
	bool bIsCriticalHit = false;

	
};

template<>
struct TStructOpsTypeTraits<FAuraGameplayContext> : TStructOpsTypeTraitsBase2<FAuraGameplayContext>
{
	enum
	{
		WithNetSerializer = true,
		WithCopy = true
	};
};
