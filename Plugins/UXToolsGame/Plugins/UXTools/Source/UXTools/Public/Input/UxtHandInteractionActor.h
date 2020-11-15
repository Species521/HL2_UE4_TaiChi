// Copyright (c) 2020 Microsoft Corporation.
// Licensed under the MIT License.

#pragma once

#include "CoreMinimal.h"
#include "EngineDefines.h"

#include "GameFramework/Actor.h"
#include "Interactions/UxtInteractionMode.h"

#include "UxtHandInteractionActor.generated.h"

class UProceduralMeshComponent;
class UUxtNearPointerComponent;
class UUxtFarPointerComponent;

/**
 * Actor that drives hand interactions with components that implement the far, grab and poke target interfaces.
 * A hand has two interaction modes:
 * - Near: interactions performed by poking or grabbing targets directly.
 * - Far: interactions performed by pointing at far targets from a distance via a hand ray.
 * The actor transitions between modes depending on whether there is a grab or poke target within the near activation distance.
 */
UCLASS(ClassGroup = UXTools)
class UXTOOLS_API AUxtHandInteractionActor : public AActor
{
	GENERATED_BODY()

public:
	AUxtHandInteractionActor(const FObjectInitializer& ObjectInitializer);

	//
	// UActorComponent interface

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintGetter)
	EControllerHand GetHand() const { return Hand; }
	UFUNCTION(BlueprintSetter)
	void SetHand(EControllerHand NewHand);

	UFUNCTION(BlueprintGetter)
	ECollisionChannel GetTraceChannel() const { return TraceChannel; }
	UFUNCTION(BlueprintSetter)
	void SetTraceChannel(ECollisionChannel NewTraceChannel);

	UFUNCTION(BlueprintGetter)
	float GetPokeRadius() const { return PokeRadius; }
	UFUNCTION(BlueprintSetter)
	void SetPokeRadius(float NewPokeRadius);

	UFUNCTION(BlueprintGetter)
	float GetRayStartOffset() const { return RayStartOffset; }
	UFUNCTION(BlueprintSetter)
	void SetRayStartOffset(float NewRayStartOffset);

	UFUNCTION(BlueprintGetter)
	float GetRayLength() const { return RayLength; }
	UFUNCTION(BlueprintSetter)
	void SetRayLength(float NewRayLength);

	UFUNCTION(BlueprintCallable, Category = "Hand Interaction")
	FVector GetHandVelocity() const { return Velocity; }
	UFUNCTION(BlueprintCallable, Category = "Hand Interaction")
	FVector GetHandAngularVelocity() const { return AngularVelocity; }

	// Size of the hand activation cone in degrees
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hand Interaction", AdvancedDisplay, meta = (ClampMin = "0.0", ClampMax = "90.0"))
	float ProximityConeAngle = 33.0f;

	// Offset of the tip of the hand activation cone behind the palm
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hand Interaction", AdvancedDisplay, meta = (ClampMin = "0.0"))
	float ProximityConeOffset = 8.0f;

	// The length of the side of the cone (note: not the height of the cone)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hand Interaction", AdvancedDisplay, meta = (ClampMin = "0.0"))
	float ProximityConeSideLength = 35.0f;

	// A lerp factor between the palm direction and the index finger direction used to build the cone direction
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hand Interaction", AdvancedDisplay, meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float ProximityConeAngleLerp = 0.9f;

	/** Create default visuals for the near cursor. Changes to this value after BeginPlay have no effect. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = "Hand Interaction")
	bool bUseDefaultNearCursor = true;

	/** Create default visuals for the far cursor. Changes to this value after BeginPlay have no effect. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = "Hand Interaction")
	bool bUseDefaultFarCursor = true;

	/** Create default visuals for the far beam. Changes to this value after BeginPlay have no effect. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = "Hand Interaction")
	bool bUseDefaultFarBeam = true;

	/** Show the near cursor on grab targets. Changes to this value after BeginPlay have no effect. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = "Hand Interaction", meta = (ExposeOnSpawn = true))
	bool bShowNearCursorOnGrabTargets = false;

	/** Active interaction modes */
	UPROPERTY(
		Transient, EditAnywhere, BlueprintReadWrite, Category = "Hand Interaction", meta = (Bitmask, BitmaskEnum = EUxtInteractionMode))
	int32 InteractionMode = static_cast<int32>(EUxtInteractionMode::Near | EUxtInteractionMode::Far);

private:
	/** Generates a cone-shaped mesh for proximity testing. */
	void UpdateProximityMesh();

	/** Update the velocity of the hand. */
	void UpdateVelocity(float DeltaTime);

	/** Check if there are near interaction targets in the proximity cone to switch between near and far interaction.
	 *  The proximity cone is intended to represent a natural volume where a person would intend to interact with a physical object.
	 *  OutHasNearTarget is true if a near interaction target was found overlapping the proximity cone.
	 *  Returns false if hands are not tracking.
	 */
	bool QueryProximityVolume(bool& OutHasNearTarget);

	/** Determine if the hand pose is valid for making selections. */
	bool IsInPointingPose() const;

#if ENABLE_VISUAL_LOG
	void VLogHandJoints() const;
	void VLogProximityQuery(
		const FVector& ConeTip, const FQuat& ConeOrientation, const TArray<FOverlapResult>& Overlaps, bool bHasNearTarget) const;
#endif // ENABLE_VISUAL_LOG

private:
	/** Articulated hand used to drive interactions. */
	UPROPERTY(
		EditAnywhere, BlueprintGetter = "GetHand", BlueprintSetter = "SetHand", Category = "Hand Interaction",
		meta = (ExposeOnSpawn = true))
	EControllerHand Hand;

	/** Offset from the hand ray origin at which the far ray used for far target selection starts. */
	UPROPERTY(EditAnywhere, BlueprintGetter = "GetRayStartOffset", BlueprintSetter = "SetRayStartOffset", Category = "Hand Interaction")
	float RayStartOffset = 5.0f;

	/** Length of the far ray */
	UPROPERTY(EditAnywhere, BlueprintGetter = "GetRayLength", BlueprintSetter = "SetRayLength", Category = "Hand Interaction")
	float RayLength = 500.0f;

	/** Maximum distance around the finger tip at which we look for poke targets. */
	UPROPERTY(EditAnywhere, BlueprintGetter = "GetPokeRadius", BlueprintSetter = "SetPokeRadius", Category = "Hand Interaction")
	float PokeRadius = 20.0f;

	/** Trace channel used for targeting queries. */
	UPROPERTY(EditAnywhere, BlueprintGetter = "GetTraceChannel", BlueprintSetter = "SetTraceChannel", Category = "Hand Interaction")
	TEnumAsByte<ECollisionChannel> TraceChannel = ECollisionChannel::ECC_Visibility;

	UPROPERTY(Transient)
	UUxtNearPointerComponent* NearPointer;

	UPROPERTY(Transient)
	UUxtFarPointerComponent* FarPointer;

	/** Runtime mesh component used for detecting proximity of near interaction targets. */
	UPROPERTY(VisibleAnywhere, Transient, Category = "Hand Interaction")
	UProceduralMeshComponent* ProximityTrigger;

	/** Set to true for visualizing the proximity mesh. */
	bool bRenderProximityMesh = false;

	/** The current velocity of the hand. */
	FVector Velocity = FVector::ZeroVector;

	/** The current angular velocity of the hand. */
	FVector AngularVelocity = FVector::ZeroVector;

	// Velocity internal state
	static const int VelocityUpdateInterval = 6;
	uint64 CurrentFrame = 0;
	FVector VelocityPositionsCache[VelocityUpdateInterval];
	FVector VelocityNormalsCache[VelocityUpdateInterval];
	FVector VelocityPositionsSum = FVector::ZeroVector;
	FVector VelocityNormalsSum = FVector::ZeroVector;
};
