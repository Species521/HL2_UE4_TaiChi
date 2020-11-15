// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUxtToggleStateComponent;
#ifdef UXTOOLS_UxtToggleStateComponent_generated_h
#error "UxtToggleStateComponent.generated.h already included, missing '#pragma once' in UxtToggleStateComponent.h"
#endif
#define UXTOOLS_UxtToggleStateComponent_generated_h

#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleStateComponent_h_17_DELEGATE \
struct _Script_UXTools_eventUxtToggledDelegate_Parms \
{ \
	UUxtToggleStateComponent* ToggleState; \
}; \
static inline void FUxtToggledDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtToggledDelegate, UUxtToggleStateComponent* ToggleState) \
{ \
	_Script_UXTools_eventUxtToggledDelegate_Parms Parms; \
	Parms.ToggleState=ToggleState; \
	UxtToggledDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleStateComponent_h_25_SPARSE_DATA
#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleStateComponent_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsChecked); \
	DECLARE_FUNCTION(execSetIsChecked);


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleStateComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsChecked); \
	DECLARE_FUNCTION(execSetIsChecked);


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleStateComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtToggleStateComponent(); \
	friend struct Z_Construct_UClass_UUxtToggleStateComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtToggleStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtToggleStateComponent)


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleStateComponent_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUUxtToggleStateComponent(); \
	friend struct Z_Construct_UClass_UUxtToggleStateComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtToggleStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtToggleStateComponent)


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleStateComponent_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtToggleStateComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtToggleStateComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtToggleStateComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtToggleStateComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtToggleStateComponent(UUxtToggleStateComponent&&); \
	NO_API UUxtToggleStateComponent(const UUxtToggleStateComponent&); \
public:


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleStateComponent_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtToggleStateComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtToggleStateComponent(UUxtToggleStateComponent&&); \
	NO_API UUxtToggleStateComponent(const UUxtToggleStateComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtToggleStateComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtToggleStateComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtToggleStateComponent)


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleStateComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsChecked() { return STRUCT_OFFSET(UUxtToggleStateComponent, bIsChecked); }


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleStateComponent_h_22_PROLOG
#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleStateComponent_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleStateComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleStateComponent_h_25_SPARSE_DATA \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleStateComponent_h_25_RPC_WRAPPERS \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleStateComponent_h_25_INCLASS \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleStateComponent_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleStateComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleStateComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleStateComponent_h_25_SPARSE_DATA \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleStateComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleStateComponent_h_25_INCLASS_NO_PURE_DECLS \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleStateComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtToggleStateComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleStateComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
