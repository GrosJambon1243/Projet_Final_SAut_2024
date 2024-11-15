// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyPlayerUi.generated.h"

/**
 * 
 */
UCLASS()
class UMyPlayerUi : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetPromptE(bool visible);
	
	UFUNCTION(BlueprintImplementableEvent)
	void ModifyPrompt(int text);
	
};