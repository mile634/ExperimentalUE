// © is here

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Turret.generated.h"

UENUM(BlueprintType)
enum class ETurrentState: uint8
{
	Searching,
	Firing
};
//class UWeaponBarrelComponent;

UCLASS()
class PRACTICEVETER_API ATurret : public APawn
{
	GENERATED_BODY()
public:
	ATurret();
	//virtual void Tick(float DeltaTime) override;

	//void SetCurrentTarget(AActor *NewTarget);

protected:

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category="Components")
	USceneComponent* TurretBaseComponent;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category="Components")
	USceneComponent* TurretBarellComponent;
	
	//UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category="Components")
	//UWeaponBarrelComponent* WeaponBarell;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Turret parameters", meta=(ClampMin=0.f, UIMin=0.f))
	float BaseSearchingRotationRate = 60.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Turret parameters", meta=(ClampMin=0.f, UIMin=0.f))
	float BarellPitchRotationRate = 60.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Turret parameters", meta=(ClampMin=0.f, UIMin=0.f))
	float MaxBarellPitchAngle = 60.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Turret parameters")
	float MinBarellPitchAngle = -30.f;
private:
	
	//void SearchingMovement(float DeltaTime);
	//void FiringMovement(float DeltaTime);
	
	ETurrentState CurrentTurretState = ETurrentState::Searching;
	//void SetCurrentTurretState(ETurrentState NewState);

	AActor* CurrentTarger = nullptr;
};
