// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WantedComponent.generated.h"

UENUM()
enum Status
{
	None     UMETA(DisplayName = "None"),
	Further  UMETA(DisplayName = "Further"),
	Closest  UMETA(DisplayName = "Closest"),
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TASKCALYDRA_API UWantedComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWantedComponent();
	void SetWanted(bool newStatus);
	void SetDistanceStatus(Status status);
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	bool IsWanted = false;
	Status DistanceStatus;
		
};
