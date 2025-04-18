// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TimerManager.h"
#include "PowerLineActor.generated.h"

class USplineComponent;
class USplineMeshComponent;
class UStaticMesh;

UCLASS()
class POWERLINE_API APowerLineActor : public AActor
{
    GENERATED_BODY()

public:
    APowerLineActor();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = PowerLine)
    TObjectPtr<USplineComponent> SplineComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PowerLine)
    TObjectPtr<UStaticMesh> CableMesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PowerLine, meta = (ClampMin = "0.1", UIMin = "0.1"))
    float CableThickness = 1.0f;
   
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = PowerLine, meta=(ExposeOnSpawn="false"))
    TSoftObjectPtr<AActor> StartActorRef;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = PowerLine, meta=(ExposeOnSpawn="false"))
    TSoftObjectPtr<AActor> EndActorRef;
    
    void GenerateSplineMeshes();

protected:
    
    virtual void BeginPlay() override;
    virtual void OnConstruction(const FTransform& Transform) override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    
    UFUNCTION()
    void CheckEndpointsAndSetVisibility();

private:
    
    UPROPERTY()
    TArray<TObjectPtr<USplineMeshComponent>> GeneratedSplineMeshes;

    
    FTimerHandle VisibilityCheckTimerHandle;
};