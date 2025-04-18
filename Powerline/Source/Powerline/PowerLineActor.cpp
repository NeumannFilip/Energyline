// Fill out your copyright notice in the Description page of Project Settings.

#include "PowerLineActor.h"
#include "Components/SplineComponent.h"
#include "Components/SplineMeshComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h" 

APowerLineActor::APowerLineActor()
{
    SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    RootComponent = SplineComponent;
    SplineComponent->SetMobility(EComponentMobility::Static);

    PrimaryActorTick.bCanEverTick = false;
}

void APowerLineActor::GenerateSplineMeshes()
{
    if (!SplineComponent) return;
    
    for (USplineMeshComponent* MeshComp : GeneratedSplineMeshes)
    {
        if (MeshComp)
        {
            MeshComp->DestroyComponent();
        }
    }
    GeneratedSplineMeshes.Empty();
    
    if (!CableMesh || SplineComponent->GetNumberOfSplinePoints() != 2)
    {
        return;
    }
    
    SplineComponent->UpdateSpline(); 

    USplineMeshComponent* SplineMesh = NewObject<USplineMeshComponent>(this);
    if (!SplineMesh) return;

    SplineMesh->SetStaticMesh(CableMesh);
    SplineMesh->SetForwardAxis(ESplineMeshAxis::X); 
    SplineMesh->SetMobility(EComponentMobility::Static);

    const FVector2D CableScale(CableThickness, CableThickness);
    SplineMesh->SetStartScale(CableScale);
    SplineMesh->SetEndScale(CableScale);

    SplineMesh->SetupAttachment(SplineComponent);
    SplineMesh->RegisterComponent();

    //Get spline data IN LOCAL space
    FVector StartPos, StartTangent, EndPos, EndTangent;
    SplineComponent->GetLocationAndTangentAtSplinePoint(0, StartPos, StartTangent, ESplineCoordinateSpace::Local);
    SplineComponent->GetLocationAndTangentAtSplinePoint(1, EndPos, EndTangent, ESplineCoordinateSpace::Local);

    SplineMesh->SetStartAndEnd(StartPos, StartTangent, EndPos, EndTangent, true /*bUpdateMesh*/);

    GeneratedSplineMeshes.Add(SplineMesh);
}

void APowerLineActor::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);
    GenerateSplineMeshes();
}

void APowerLineActor::BeginPlay()
{
    Super::BeginPlay();
    CheckEndpointsAndSetVisibility();
    
    GetWorldTimerManager().SetTimer(
        VisibilityCheckTimerHandle,
        this,
        &APowerLineActor::CheckEndpointsAndSetVisibility,
        1.0f,  
        true   
    );
}

void APowerLineActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    GetWorldTimerManager().ClearTimer(VisibilityCheckTimerHandle);
    Super::EndPlay(EndPlayReason);
}

void APowerLineActor::CheckEndpointsAndSetVisibility()
{
    AActor* StartActor = StartActorRef.Get();
    AActor* EndActor = EndActorRef.Get();
    
    const bool bShouldBeVisible = (StartActor != nullptr && EndActor != nullptr);
    const bool bIsCurrentlyHidden = IsHidden();
    
    if (bIsCurrentlyHidden != !bShouldBeVisible)
    {
        SetActorHiddenInGame(!bShouldBeVisible);
    }
}