// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
#ifdef UXTOOLS_UxtGrabTarget_generated_h
#error "UxtGrabTarget.generated.h already included, missing '#pragma once' in UxtGrabTarget.h"
#endif
#define UXTOOLS_UxtGrabTarget_generated_h

#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_17_SPARSE_DATA
#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_17_RPC_WRAPPERS \
	virtual bool IsGrabFocusable_Implementation(const UPrimitiveComponent* Primitive) const { return false; }; \
 \
	DECLARE_FUNCTION(execIsGrabFocusable);


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsGrabFocusable_Implementation(const UPrimitiveComponent* Primitive) const { return false; }; \
 \
	DECLARE_FUNCTION(execIsGrabFocusable);


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_17_EVENT_PARMS \
	struct UxtGrabTarget_eventIsGrabFocusable_Parms \
	{ \
		const UPrimitiveComponent* Primitive; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UxtGrabTarget_eventIsGrabFocusable_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_17_CALLBACK_WRAPPERS
#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtGrabTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtGrabTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtGrabTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtGrabTarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtGrabTarget(UUxtGrabTarget&&); \
	NO_API UUxtGrabTarget(const UUxtGrabTarget&); \
public:


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtGrabTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtGrabTarget(UUxtGrabTarget&&); \
	NO_API UUxtGrabTarget(const UUxtGrabTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtGrabTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtGrabTarget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtGrabTarget)


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUxtGrabTarget(); \
	friend struct Z_Construct_UClass_UUxtGrabTarget_Statics; \
public: \
	DECLARE_CLASS(UUxtGrabTarget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtGrabTarget)


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_17_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_17_GENERATED_UINTERFACE_BODY() \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_17_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_17_GENERATED_UINTERFACE_BODY() \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUxtGrabTarget() {} \
public: \
	typedef UUxtGrabTarget UClassType; \
	typedef IUxtGrabTarget ThisClass; \
	static bool Execute_IsGrabFocusable(const UObject* O, const UPrimitiveComponent* Primitive); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_17_INCLASS_IINTERFACE \
protected: \
	virtual ~IUxtGrabTarget() {} \
public: \
	typedef UUxtGrabTarget UClassType; \
	typedef IUxtGrabTarget ThisClass; \
	static bool Execute_IsGrabFocusable(const UObject* O, const UPrimitiveComponent* Primitive); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_14_PROLOG \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_17_EVENT_PARMS


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_17_SPARSE_DATA \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_17_RPC_WRAPPERS \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_17_CALLBACK_WRAPPERS \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_17_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_17_SPARSE_DATA \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_17_CALLBACK_WRAPPERS \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtGrabTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
