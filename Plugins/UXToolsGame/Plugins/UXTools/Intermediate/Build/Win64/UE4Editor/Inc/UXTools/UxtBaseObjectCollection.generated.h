// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef UXTOOLS_UxtBaseObjectCollection_generated_h
#error "UxtBaseObjectCollection.generated.h already included, missing '#pragma once' in UxtBaseObjectCollection.h"
#endif
#define UXTOOLS_UxtBaseObjectCollection_generated_h

#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Private_Controls_UxtBaseObjectCollection_h_15_DELEGATE \
struct _Script_UXTools_eventUxtSortScrollingObjectCollectionDelegate_Parms \
{ \
	const AActor* LHS; \
	const AActor* RHS; \
	bool ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	_Script_UXTools_eventUxtSortScrollingObjectCollectionDelegate_Parms() \
		: ReturnValue(false) \
	{ \
	} \
}; \
static inline bool FUxtSortScrollingObjectCollectionDelegate_DelegateWrapper(const FScriptDelegate& UxtSortScrollingObjectCollectionDelegate, const AActor* LHS, const AActor* RHS) \
{ \
	_Script_UXTools_eventUxtSortScrollingObjectCollectionDelegate_Parms Parms; \
	Parms.LHS=LHS; \
	Parms.RHS=RHS; \
	UxtSortScrollingObjectCollectionDelegate.ProcessDelegate<UObject>(&Parms); \
	return !!Parms.ReturnValue; \
}


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Private_Controls_UxtBaseObjectCollection_h_23_SPARSE_DATA
#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Private_Controls_UxtBaseObjectCollection_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCompareString); \
	DECLARE_FUNCTION(execCompareText); \
	DECLARE_FUNCTION(execSetSortCallback);


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Private_Controls_UxtBaseObjectCollection_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCompareString); \
	DECLARE_FUNCTION(execCompareText); \
	DECLARE_FUNCTION(execSetSortCallback);


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Private_Controls_UxtBaseObjectCollection_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtBaseObjectCollection(); \
	friend struct Z_Construct_UClass_UUxtBaseObjectCollection_Statics; \
public: \
	DECLARE_CLASS(UUxtBaseObjectCollection, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtBaseObjectCollection)


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Private_Controls_UxtBaseObjectCollection_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUUxtBaseObjectCollection(); \
	friend struct Z_Construct_UClass_UUxtBaseObjectCollection_Statics; \
public: \
	DECLARE_CLASS(UUxtBaseObjectCollection, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtBaseObjectCollection)


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Private_Controls_UxtBaseObjectCollection_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtBaseObjectCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtBaseObjectCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtBaseObjectCollection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtBaseObjectCollection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtBaseObjectCollection(UUxtBaseObjectCollection&&); \
	NO_API UUxtBaseObjectCollection(const UUxtBaseObjectCollection&); \
public:


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Private_Controls_UxtBaseObjectCollection_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtBaseObjectCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtBaseObjectCollection(UUxtBaseObjectCollection&&); \
	NO_API UUxtBaseObjectCollection(const UUxtBaseObjectCollection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtBaseObjectCollection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtBaseObjectCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtBaseObjectCollection)


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Private_Controls_UxtBaseObjectCollection_h_23_PRIVATE_PROPERTY_OFFSET
#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Private_Controls_UxtBaseObjectCollection_h_20_PROLOG
#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Private_Controls_UxtBaseObjectCollection_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Private_Controls_UxtBaseObjectCollection_h_23_PRIVATE_PROPERTY_OFFSET \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Private_Controls_UxtBaseObjectCollection_h_23_SPARSE_DATA \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Private_Controls_UxtBaseObjectCollection_h_23_RPC_WRAPPERS \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Private_Controls_UxtBaseObjectCollection_h_23_INCLASS \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Private_Controls_UxtBaseObjectCollection_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Private_Controls_UxtBaseObjectCollection_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Private_Controls_UxtBaseObjectCollection_h_23_PRIVATE_PROPERTY_OFFSET \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Private_Controls_UxtBaseObjectCollection_h_23_SPARSE_DATA \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Private_Controls_UxtBaseObjectCollection_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Private_Controls_UxtBaseObjectCollection_h_23_INCLASS_NO_PURE_DECLS \
	playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Private_Controls_UxtBaseObjectCollection_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtBaseObjectCollection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID playground_001_Plugins_UXToolsGame_Plugins_UXTools_Source_UXTools_Private_Controls_UxtBaseObjectCollection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
