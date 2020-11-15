// Copyright (c) 2020 Microsoft Corporation.
// Licensed under the MIT License.

#pragma once

#include "CoreMinimal.h"

#include "Behaviors/UxtHandConstraintComponent.h"

#include "HandConstraintListener.generated.h"

/** Listens to and counts events raised by a UxtHandConstraintComponent. */
UCLASS()
class UXTOOLSTESTS_API UHandConstraintListener : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void OnConstraintActivated() { NumConstraintActivated++; }

	UFUNCTION()
	void OnConstraintDeactivated() { NumConstraintDeactivated++; }

	UFUNCTION()
	void OnBeginTracking(EControllerHand TrackedHand) { NumBeginTracking++; }

	UFUNCTION()
	void OnEndTracking(EControllerHand TrackedHand) { NumEndTracking++; }

public:
	int NumConstraintActivated = 0;
	int NumConstraintDeactivated = 0;
	int NumBeginTracking = 0;
	int NumEndTracking = 0;
};
