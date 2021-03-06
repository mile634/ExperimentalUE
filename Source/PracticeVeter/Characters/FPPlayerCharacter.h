// © is here

#pragma once

#include "CoreMinimal.h"
#include "PlayerCharacter.h"
#include "FPPlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class PRACTICEVETER_API AFPPlayerCharacter : public APlayerCharacter
{
	GENERATED_BODY()

public:
	AFPPlayerCharacter(const FObjectInitializer &ObjectInitializer);
	
protected:
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category = "Character | First Person")
	class USkeletalMeshComponent *FirstPersonMeshComponent;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category = "Character | First Person")
	class UCameraComponent *FirstPersonCameraComponent;

	
	
};
