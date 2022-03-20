// No non-ascii symbols here


#include "MyCharacterNoUTF16.h"

// Sets default values
AMyCharacterNoUTF16::AMyCharacterNoUTF16()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



	
}

// Called when the game starts or when spawned
void AMyCharacterNoUTF16::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacterNoUTF16::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacterNoUTF16::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

