// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PowerLineToolLibrary.generated.h"

class APowerLineActor;

UCLASS()
class POWERLINE_API UPowerLineToolLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category=PowerLineTool, meta = (WorldContext = WorldContextObject))
	static void CreatePowerLineFromSelectedActors(const UObject* WorldContextObject, TSubclassOf<APowerLineActor> PowerLineClass);
};
