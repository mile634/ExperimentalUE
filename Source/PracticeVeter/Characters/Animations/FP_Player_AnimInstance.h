// © is here

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacterAnimInstance.h"
#include "FP_Player_AnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class PRACTICEVETER_API UFP_Player_AnimInstance : public UBaseCharacterAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeBeginPlay() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	
protected:
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Character | Animations | First Person")
	float PlayerCameraPitchAngle = 0.f;

	TWeakObjectPtr<class AFPPlayerCharacter> CachedFirstPersonCharacterOwner;
	
};
