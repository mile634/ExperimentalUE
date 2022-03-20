// © is here


#include "PawnWithCopyRight.h"

// Sets default values
APawnWithCopyRight::APawnWithCopyRight()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APawnWithCopyRight::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APawnWithCopyRight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APawnWithCopyRight::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

