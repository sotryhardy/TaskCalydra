// Fill out your copyright notice in the Description page of Project Settings.


#include "SeekerComponent.h"
#include "../WantedActor.h"
#include "SeekerCharacter.h"

// Sets default values for this component's properties
USeekerComponent::USeekerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	if (!SeekingRadius)
	{
		SeekingRadius = CreateDefaultSubobject<USphereComponent>(TEXT("SeekingRadius"));
	}

}


// Called when the game starts
void USeekerComponent::BeginPlay()
{
	Super::BeginPlay();

	SeekingRadius->AttachTo(GetOwner()->GetRootComponent());

	SeekingRadius->InitSphereRadius(Radius);
	SeekingRadius->SetCollisionResponseToAllChannels(ECR_Overlap);

}


// Called every frame
void USeekerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	TArray<AActor*> OverlappingWanteds;
	TArray<AActor*> OverlappingWantedsWithComponent;

	GetOwner()->GetOverlappingActors(OverlappingWanteds, AWantedActor::StaticClass());				// I dont know why it doesn't work

	if (OverlappingWanteds.Num())
	{
		UE_LOG(LogTemp, Warning, TEXT("OverlappingPawns have %i"), OverlappingWanteds.Num());
	}

	//TODO:

	//there is my pseudocode algorytm if GetOverlappingActors() worked:

	//for(auto& Wanted :   OverlappingWanteds)
	//{
	//	for (auto& component : Wanted)
	//	{
	//		if (component.GetKey == "WantedComponent")
	//		{
	//			if (RayCast to check is Wanted in line of sight)
	//			{
	//				OverlappingWantedsWithComponent.Add(Wanted);
	//				AWantedActor* CastedWanted = Cast<AWantedActor>(Wanted);				
	//				CastedWanted->WantedComponent->SetWanted(true);

	//				UE_LOG(LogTemp, Warning, TEXT("WantedActor %s was found in distance %i"), Wanted.GetName(), normalize vector to get distance);
	//			}
	//			
	//		}
	//	}
	//}

	//if (OverlappingWantedsWithComponent.Num())
	//{
	//	OverlappingWantedsWithComponent.Sort();
	//	Cast<AWantedActor>(OverlappingWantedsWithComponent[0])->WantedComponent->SetWanted(Status::Closest);
	//	Cast<AWantedActor>(OverlappingWantedsWithComponent.Last())->WantedComponent->SetWanted(Status::Closest);
	//}
}


