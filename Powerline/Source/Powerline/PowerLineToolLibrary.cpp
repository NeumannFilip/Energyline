// Fill out your copyright notice in the Description page of Project Settings.


#include "PowerLineToolLibrary.h"
#include "PowerLineActor.h"
#include "Components/SplineComponent.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"

#if WITH_EDITOR
#include "Editor.h"
#include "Selection.h"
#include "ScopedTransaction.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Widgets/Notifications/SNotificationList.h"
#endif

void UPowerLineToolLibrary::CreatePowerLineFromSelectedActors(const UObject* WorldContextObject,
	TSubclassOf<APowerLineActor> PowerLineClass)
{
	#if WITH_EDITOR
    UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
    if (!World || !GEditor)
    {
        UE_LOG(LogTemp, Error, TEXT("PowerLineTool: Invalid World or Editor context."));
        return;
    }

    if (!PowerLineClass)
    {
         FNotificationInfo Info(FText::FromString("PowerLine Tool Error: No PowerLine Actor Class specified!"));
         Info.ExpireDuration = 5.0f; Info.bUseSuccessFailIcons = true;
         TSharedPtr<SNotificationItem> Notification = FSlateNotificationManager::Get().AddNotification(Info);
         if (Notification.IsValid()) { Notification->SetCompletionState(SNotificationItem::CS_Fail); }
         UE_LOG(LogTemp, Error, TEXT("PowerLineTool: PowerLineClass is null."));
         return;
    }

    TArray<AActor*> SelectedActors;
    GEditor->GetSelectedActors()->GetSelectedObjects(SelectedActors);

    if (SelectedActors.Num() < 2)
    {
       FNotificationInfo Info(FText::FromString("PowerLine Tool: Select at least 2 actors to connect!"));
       Info.ExpireDuration = 5.0f; Info.bUseSuccessFailIcons = true;
       TSharedPtr<SNotificationItem> Notification = FSlateNotificationManager::Get().AddNotification(Info);
       if (Notification.IsValid()) { Notification->SetCompletionState(SNotificationItem::CS_Fail); }
       UE_LOG(LogTemp, Warning, TEXT("PowerLineTool: Select at least 2 actors!"));
       return;
    }

    
    const FScopedTransaction Transaction(FText::FromString("Create Power Line Segments"));
    World->Modify();

    int32 SegmentsCreated = 0;
    TArray<AActor*> NewSegmentActors; 
    
    for (int32 i = 0; i < SelectedActors.Num() - 1; ++i)
    {
        AActor* StartActor = SelectedActors[i];
        AActor* EndActor = SelectedActors[i + 1];
        
        if (!StartActor || !EndActor)
        {
            UE_LOG(LogTemp, Warning, TEXT("PowerLineTool: Skipping segment due to invalid actor at index %d or %d."), i, i+1);
            continue;
        }
        
        FActorSpawnParameters SpawnParams;
        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
        SpawnParams.bCreateActorPackage = true; 
        
        APowerLineActor* NewSegmentActor = World->SpawnActor<APowerLineActor>( 
            PowerLineClass,
            StartActor->GetActorLocation(),
            FRotator::ZeroRotator,
            SpawnParams
        );

        if (NewSegmentActor && NewSegmentActor->SplineComponent)
        {
            NewSegmentActor->Modify(); 
            NewSegmentActor->SplineComponent->Modify(); 
            
            NewSegmentActor->StartActorRef = StartActor;
            NewSegmentActor->EndActorRef = EndActor;
            
            NewSegmentActor->SplineComponent->ClearSplinePoints(false); 
            NewSegmentActor->SplineComponent->AddSplinePoint(StartActor->GetActorLocation(), ESplineCoordinateSpace::World, false);
            NewSegmentActor->SplineComponent->AddSplinePoint(EndActor->GetActorLocation(), ESplineCoordinateSpace::World, false);
            NewSegmentActor->SplineComponent->UpdateSpline(); 
            FString ActorLabel = FString::Printf(TEXT("PowerLineSegment_%s_to_%s"), *StartActor->GetActorLabel(), *EndActor->GetActorLabel());
            NewSegmentActor->SetActorLabel(ActorLabel);
            
            NewSegmentActor->GenerateSplineMeshes();

            SegmentsCreated++;
            NewSegmentActors.Add(NewSegmentActor); 
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("PowerLineTool: Failed to spawn PowerLineActor segment for %s to %s"), *StartActor->GetActorLabel(), *EndActor->GetActorLabel());
        }
    } 


    if (SegmentsCreated > 0)
    {
        
        GEditor->SelectNone(false, true);
        for(AActor* SegmentActor : NewSegmentActors)
        {
            GEditor->SelectActor(SegmentActor, true, false); 
        }
        GEditor->NoteSelectionChange();
        
        FNotificationInfo Info(FText::Format(FText::FromString("Created {0} Power Line segment(s)"), FText::AsNumber(SegmentsCreated)));
        Info.ExpireDuration = 5.0f; Info.bUseSuccessFailIcons = true;
        TSharedPtr<SNotificationItem> Notification = FSlateNotificationManager::Get().AddNotification(Info);
         if (Notification.IsValid()) { Notification->SetCompletionState(SNotificationItem::CS_Success); }
        UE_LOG(LogTemp, Log, TEXT("PowerLineTool: Successfully created %d segment(s)"), SegmentsCreated);
    }
    else
    {
         UE_LOG(LogTemp, Warning, TEXT("PowerLineTool: No segments were created."));
    }


#else
    UE_LOG(LogTemp, Error, TEXT("CreatePowerLineFromSelectedActors can only be called in the Editor."));
#endif 
}
