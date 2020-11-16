// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "EnemyController.generated.h"

/**
 * 
 */
UCLASS()
class FINAL_API AEnemyController : public APlayerController
{
    GENERATED_BODY()

        UFUNCTION()
        void derp();
};
