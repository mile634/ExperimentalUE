// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneratorActor.h"

void AGeneratorActor::SwitchGenerator()
{
	bIsOn = !bIsOn;
	//
	//OnGeneratorSwitched.ExecuteIfBound(bIsOn);
	if(OnGeneratorSwitched.IsBound())
	{
		OnGeneratorSwitched.Broadcast(bIsOn);
	}

#ifdef blablabla
	OnGeneratorSwitched.IsBoud()
#endif
	
}
