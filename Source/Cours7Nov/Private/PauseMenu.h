// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Slider.h"
#include "PauseMenu.generated.h"

/**
 * 
 */
UCLASS()
class UPauseMenu : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	
	UPROPERTY(meta=(BindWidget))
	USlider* MouseSlider;
	UPROPERTY(meta=(BindWidget))
	class UButton* ContinueButton;
	UPROPERTY(meta=(BindWidget))
	class UButton* QuitButton;
	UPROPERTY(meta=(BindWidget))
	USlider* MusicSlider;

	UFUNCTION()
	void OnSliderValueChanged(float value);
	UFUNCTION()
	void OnMusicSliderValueChanged(float value);
	UFUNCTION()
	void OnClicked();

	UFUNCTION()
	void Quit();

	APlayerController* PlayerController;
	
	class AMusicManager* MusicManager;

	
	
};
