// '©' is here again, creating from Rider

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorWithUTF16_rider.generated.h"

UCLASS()
class PRACTICEVETER_API AActorWithUTF16_rider : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AActorWithUTF16_rider();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
