// © is here


#include "FP_Player_AnimInstance.h"

#include "PracticeVeter/Characters/FPPlayerCharacter.h"

void UFP_Player_AnimInstance::NativeBeginPlay()
{
	Super::NativeBeginPlay();
	checkf(TryGetPawnOwner()->IsA<AFPPlayerCharacter>(), TEXT("UFP_Player_AnimInstance::NativeBeginPlay() only FPPlayerCharacter can use this anim instance"));

	CachedFirstPersonCharacterOwner = StaticCast<AFPPlayerCharacter*>(TryGetPawnOwner());
}

void UFP_Player_AnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	if(!CachedFirstPersonCharacterOwner.IsValid())
	{
		return;
	}
	APlayerController *Controller = CachedFirstPersonCharacterOwner->GetController<APlayerController>();
	if(IsValid(Controller))
	{
		PlayerCameraPitchAngle = Controller->GetControlRotation().Pitch;
	}
}
