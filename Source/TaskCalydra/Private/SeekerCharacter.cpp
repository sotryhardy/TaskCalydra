// Fill out your copyright notice in the Description page of Project Settings.


#include "SeekerCharacter.h"
#include "SeekerComponent.h"

// Sets default values
ASeekerCharacter::ASeekerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (!RootComponent)
	{
		RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	}

	if (!SeekerComponent)
	{
		SeekerComponent = CreateDefaultSubobject<USeekerComponent>(TEXT("SeekerComponent"));
	}

}

// Called when the game starts or when spawned
void ASeekerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASeekerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASeekerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

