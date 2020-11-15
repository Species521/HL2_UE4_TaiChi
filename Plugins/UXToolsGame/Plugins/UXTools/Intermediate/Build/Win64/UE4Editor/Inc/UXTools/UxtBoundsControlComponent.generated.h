// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUxtBoundsControlComponent;
struct FUxtAffordanceConfig;
class UUxtGrabTargetComponent;
struct FUxtGrabPointerData;
class UUxtNearPointerComponent;
class UUxtFarPointerComponent;
enum class EUxtAffordanceKind : uint8;
class UStaticMesh;
struct FBox;
class AActor;
#ifdef UXTOOLS_UxtBoundsControlComponent_generated_h
#error "UxtBoundsControlComponent.generated.h already included, missing '#pragma once' in UxtBoundsControlComponent.h"
#endif
#define UXTOOLS_UxtBoundsControlComponent_generated_h

#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUxtAffordanceInstance_Statics; \
	UXTOOLS_API static class UScriptStruct* StaticStruct();


template<> UXTOOLS_API UScriptStruct* StaticStruct<struct FUxtAffordanceInstance>();

#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_55_DELEGATE \
struct _Script_UXTools_eventUxtBoundsControlManipulationEndedDelegate_Parms \
{ \
	UUxtBoundsControlComponent* Manipulator; \
	FUxtAffordanceConfig AffordanceInfo; \
	UUxtGrabTargetComponent* GrabbedComponent; \
}; \
static inline void FUxtBoundsControlManipulationEndedDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtBoundsControlManipulationEndedDelegate, UUxtBoundsControlComponent* Manipulator, FUxtAffordanceConfig const& AffordanceInfo, UUxtGrabTargetComponent* GrabbedComponent) \
{ \
	_Script_UXTools_eventUxtBoundsControlManipulationEndedDelegate_Parms Parms; \
	Parms.Manipulator=Manipulator; \
	Parms.AffordanceInfo=AffordanceInfo; \
	Parms.GrabbedComponent=GrabbedComponent; \
	UxtBoundsControlManipulationEndedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_51_DELEGATE \
struct _Script_UXTools_eventUxtBoundsControlManipulationStartedDelegate_Parms \
{ \
	UUxtBoundsControlComponent* Manipulator; \
	FUxtAffordanceConfig AffordanceInfo; \
	UUxtGrabTargetComponent* GrabbedComponent; \
}; \
static inline void FUxtBoundsControlManipulationStartedDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtBoundsControlManipulationStartedDelegate, UUxtBoundsControlComponent* Manipulator, FUxtAffordanceConfig const& AffordanceInfo, UUxtGrabTargetComponent* GrabbedComponent) \
{ \
	_Script_UXTools_eventUxtBoundsControlManipulationStartedDelegate_Parms Parms; \
	Parms.Manipulator=Manipulator; \
	Parms.AffordanceInfo=AffordanceInfo; \
	Parms.GrabbedComponent=GrabbedComponent; \
	UxtBoundsControlManipulationStartedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_63_SPARSE_DATA
#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_63_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAffordanceEndGrab); \
	DECLARE_FUNCTION(execOnAffordanceUpdateGrab); \
	DECLARE_FUNCTION(execOnAffordanceBeginGrab); \
	DECLARE_FUNCTION(execOnAffordanceExitGrabFocus); \
	DECLARE_FUNCTION(execOnAffordanceExitFarFocus); \
	DECLARE_FUNCTION(execOnAffordanceEnterGrabFocus); \
	DECLARE_FUNCTION(execOnAffordanceEnterFarFocus); \
	DECLARE_FUNCTION(execComputeBoundsFromComponents); \
	DECLARE_FUNCTION(execGetAffordanceKindMesh); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execGetInitBoundsFromActor); \
	DECLARE_FUNCTION(execGetBoundsControlActor);


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAffordanceEndGrab); \
	DECLARE_FUNCTION(execOnAffordanceUpdateGrab); \
	DECLARE_FUNCTION(execOnAffordanceBeginGrab); \
	DECLARE_FUNCTION(execOnAffordanceExitGrabFocus); \
	DECLARE_FUNCTION(execOnAffordanceExitFarFocus); \
	DECLARE_FUNCTION(execOnAffordanceEnterGrabFocus); \
	DECLARE_FUNCTION(execOnAffordanceEnterFarFocus); \
	DECLARE_FUNCTION(execComputeBoundsFromComponents); \
	DECLARE_FUNCTION(execGetAffordanceKindMesh); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execGetInitBoundsFromActor); \
	DECLARE_FUNCTION(execGetBoundsControlActor);


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtBoundsControlComponent(); \
	friend struct Z_Construct_UClass_UUxtBoundsControlComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtBoundsControlComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtBoundsControlComponent)


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUUxtBoundsControlComponent(); \
	friend struct Z_Construct_UClass_UUxtBoundsControlComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtBoundsControlComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtBoundsControlComponent)


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtBoundsControlComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtBoundsControlComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtBoundsControlComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtBoundsControlComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtBoundsControlComponent(UUxtBoundsControlComponent&&); \
	NO_API UUxtBoundsControlComponent(const UUxtBoundsControlComponent&); \
public:


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_63_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtBoundsControlComponent(UUxtBoundsControlComponent&&); \
	NO_API UUxtBoundsControlComponent(const UUxtBoundsControlComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtBoundsControlComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtBoundsControlComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUxtBoundsControlComponent)


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_63_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bInitBoundsFromActor() { return STRUCT_OFFSET(UUxtBoundsControlComponent, bInitBoundsFromActor); } \
	FORCEINLINE static uint32 __PPO__Bounds() { return STRUCT_OFFSET(UUxtBoundsControlComponent, Bounds); } \
	FORCEINLINE static uint32 __PPO__ParameterCollection() { return STRUCT_OFFSET(UUxtBoundsControlComponent, ParameterCollection); } \
	FORCEINLINE static uint32 __PPO__BoundsControlActor() { return STRUCT_OFFSET(UUxtBoundsControlComponent, BoundsControlActor); } \
	FORCEINLINE static uint32 __PPO__BoundsControlGrabbable() { return STRUCT_OFFSET(UUxtBoundsControlComponent, BoundsControlGrabbable); } \
	FORCEINLINE static uint32 __PPO__PrimitiveAffordanceMap() { return STRUCT_OFFSET(UUxtBoundsControlComponent, PrimitiveAffordanceMap); } \
	FORCEINLINE static uint32 __PPO__InitialBounds() { return STRUCT_OFFSET(UUxtBoundsControlComponent, InitialBounds); } \
	FORCEINLINE static uint32 __PPO__InitialTransform() { return STRUCT_OFFSET(UUxtBoundsControlComponent, InitialTransform); }


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_60_PROLOG
#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_63_PRIVATE_PROPERTY_OFFSET \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_63_SPARSE_DATA \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_63_RPC_WRAPPERS \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_63_INCLASS \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_63_PRIVATE_PROPERTY_OFFSET \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_63_SPARSE_DATA \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_63_INCLASS_NO_PURE_DECLS \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtBoundsControlComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
