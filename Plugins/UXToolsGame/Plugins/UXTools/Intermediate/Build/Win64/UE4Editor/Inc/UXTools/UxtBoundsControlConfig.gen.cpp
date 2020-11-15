// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtBoundsControlConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtBoundsControlConfig() {}
// Cross Module References
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtAffordanceAction();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtAffordanceKind();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtAffordancePlacement();
	UXTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUxtAffordanceConfig();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtBoundsControlConfig_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtBoundsControlConfig();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
// End Cross Module References
	static UEnum* EUxtAffordanceAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtAffordanceAction, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtAffordanceAction"));
		}
		return Singleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtAffordanceAction>()
	{
		return EUxtAffordanceAction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUxtAffordanceAction(EUxtAffordanceAction_StaticEnum, TEXT("/Script/UXTools"), TEXT("EUxtAffordanceAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXTools_EUxtAffordanceAction_Hash() { return 3684070556U; }
	UEnum* Z_Construct_UEnum_UXTools_EUxtAffordanceAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUxtAffordanceAction"), 0, Get_Z_Construct_UEnum_UXTools_EUxtAffordanceAction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUxtAffordanceAction::Resize", (int64)EUxtAffordanceAction::Resize },
				{ "EUxtAffordanceAction::Translate", (int64)EUxtAffordanceAction::Translate },
				{ "EUxtAffordanceAction::Scale", (int64)EUxtAffordanceAction::Scale },
				{ "EUxtAffordanceAction::Rotate", (int64)EUxtAffordanceAction::Rotate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Defines which effect moving an affordance has on the bounding box. */" },
				{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlConfig.h" },
				{ "Resize.Comment", "/** Move only one side of the bounding box. */" },
				{ "Resize.Name", "EUxtAffordanceAction::Resize" },
				{ "Resize.ToolTip", "Move only one side of the bounding box." },
				{ "Rotate.Comment", "/** Rotate the bounding box about its center point. */" },
				{ "Rotate.Name", "EUxtAffordanceAction::Rotate" },
				{ "Rotate.ToolTip", "Rotate the bounding box about its center point." },
				{ "Scale.Comment", "/** Scale the bounding box, moving both sides in opposite directions. */" },
				{ "Scale.Name", "EUxtAffordanceAction::Scale" },
				{ "Scale.ToolTip", "Scale the bounding box, moving both sides in opposite directions." },
				{ "ToolTip", "Defines which effect moving an affordance has on the bounding box." },
				{ "Translate.Comment", "/** Move both sides of the bounding box. */" },
				{ "Translate.Name", "EUxtAffordanceAction::Translate" },
				{ "Translate.ToolTip", "Move both sides of the bounding box." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
				nullptr,
				"EUxtAffordanceAction",
				"EUxtAffordanceAction",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EUxtAffordanceKind_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtAffordanceKind, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtAffordanceKind"));
		}
		return Singleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtAffordanceKind>()
	{
		return EUxtAffordanceKind_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUxtAffordanceKind(EUxtAffordanceKind_StaticEnum, TEXT("/Script/UXTools"), TEXT("EUxtAffordanceKind"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXTools_EUxtAffordanceKind_Hash() { return 2719574707U; }
	UEnum* Z_Construct_UEnum_UXTools_EUxtAffordanceKind()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUxtAffordanceKind"), 0, Get_Z_Construct_UEnum_UXTools_EUxtAffordanceKind_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUxtAffordanceKind::Center", (int64)EUxtAffordanceKind::Center },
				{ "EUxtAffordanceKind::Face", (int64)EUxtAffordanceKind::Face },
				{ "EUxtAffordanceKind::Edge", (int64)EUxtAffordanceKind::Edge },
				{ "EUxtAffordanceKind::Corner", (int64)EUxtAffordanceKind::Corner },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Center.Name", "EUxtAffordanceKind::Center" },
				{ "Comment", "/** Defines the kind of actor that should be spawned for an affordance. */" },
				{ "Corner.Name", "EUxtAffordanceKind::Corner" },
				{ "Edge.Name", "EUxtAffordanceKind::Edge" },
				{ "Face.Name", "EUxtAffordanceKind::Face" },
				{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlConfig.h" },
				{ "ToolTip", "Defines the kind of actor that should be spawned for an affordance." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
				nullptr,
				"EUxtAffordanceKind",
				"EUxtAffordanceKind",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EUxtAffordancePlacement_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtAffordancePlacement, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtAffordancePlacement"));
		}
		return Singleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtAffordancePlacement>()
	{
		return EUxtAffordancePlacement_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUxtAffordancePlacement(EUxtAffordancePlacement_StaticEnum, TEXT("/Script/UXTools"), TEXT("EUxtAffordancePlacement"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXTools_EUxtAffordancePlacement_Hash() { return 3922291227U; }
	UEnum* Z_Construct_UEnum_UXTools_EUxtAffordancePlacement()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUxtAffordancePlacement"), 0, Get_Z_Construct_UEnum_UXTools_EUxtAffordancePlacement_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUxtAffordancePlacement::Center", (int64)EUxtAffordancePlacement::Center },
				{ "EUxtAffordancePlacement::FaceFront", (int64)EUxtAffordancePlacement::FaceFront },
				{ "EUxtAffordancePlacement::FaceBack", (int64)EUxtAffordancePlacement::FaceBack },
				{ "EUxtAffordancePlacement::FaceRight", (int64)EUxtAffordancePlacement::FaceRight },
				{ "EUxtAffordancePlacement::FaceLeft", (int64)EUxtAffordancePlacement::FaceLeft },
				{ "EUxtAffordancePlacement::FaceTop", (int64)EUxtAffordancePlacement::FaceTop },
				{ "EUxtAffordancePlacement::FaceBottom", (int64)EUxtAffordancePlacement::FaceBottom },
				{ "EUxtAffordancePlacement::EdgeFrontRight", (int64)EUxtAffordancePlacement::EdgeFrontRight },
				{ "EUxtAffordancePlacement::EdgeFrontLeft", (int64)EUxtAffordancePlacement::EdgeFrontLeft },
				{ "EUxtAffordancePlacement::EdgeFrontTop", (int64)EUxtAffordancePlacement::EdgeFrontTop },
				{ "EUxtAffordancePlacement::EdgeFrontBottom", (int64)EUxtAffordancePlacement::EdgeFrontBottom },
				{ "EUxtAffordancePlacement::EdgeBackRight", (int64)EUxtAffordancePlacement::EdgeBackRight },
				{ "EUxtAffordancePlacement::EdgeBackLeft", (int64)EUxtAffordancePlacement::EdgeBackLeft },
				{ "EUxtAffordancePlacement::EdgeBackTop", (int64)EUxtAffordancePlacement::EdgeBackTop },
				{ "EUxtAffordancePlacement::EdgeBackBottom", (int64)EUxtAffordancePlacement::EdgeBackBottom },
				{ "EUxtAffordancePlacement::EdgeRightTop", (int64)EUxtAffordancePlacement::EdgeRightTop },
				{ "EUxtAffordancePlacement::EdgeRightBottom", (int64)EUxtAffordancePlacement::EdgeRightBottom },
				{ "EUxtAffordancePlacement::EdgeLeftTop", (int64)EUxtAffordancePlacement::EdgeLeftTop },
				{ "EUxtAffordancePlacement::EdgeLeftBottom", (int64)EUxtAffordancePlacement::EdgeLeftBottom },
				{ "EUxtAffordancePlacement::CornerFrontRightTop", (int64)EUxtAffordancePlacement::CornerFrontRightTop },
				{ "EUxtAffordancePlacement::CornerFrontRightBottom", (int64)EUxtAffordancePlacement::CornerFrontRightBottom },
				{ "EUxtAffordancePlacement::CornerFrontLeftTop", (int64)EUxtAffordancePlacement::CornerFrontLeftTop },
				{ "EUxtAffordancePlacement::CornerFrontLeftBottom", (int64)EUxtAffordancePlacement::CornerFrontLeftBottom },
				{ "EUxtAffordancePlacement::CornerBackRightTop", (int64)EUxtAffordancePlacement::CornerBackRightTop },
				{ "EUxtAffordancePlacement::CornerBackRightBottom", (int64)EUxtAffordancePlacement::CornerBackRightBottom },
				{ "EUxtAffordancePlacement::CornerBackLeftTop", (int64)EUxtAffordancePlacement::CornerBackLeftTop },
				{ "EUxtAffordancePlacement::CornerBackLeftBottom", (int64)EUxtAffordancePlacement::CornerBackLeftBottom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Center.Name", "EUxtAffordancePlacement::Center" },
				{ "Comment", "/** Supported placements for affordances. */" },
				{ "CornerBackLeftBottom.Name", "EUxtAffordancePlacement::CornerBackLeftBottom" },
				{ "CornerBackLeftTop.Name", "EUxtAffordancePlacement::CornerBackLeftTop" },
				{ "CornerBackRightBottom.Name", "EUxtAffordancePlacement::CornerBackRightBottom" },
				{ "CornerBackRightTop.Name", "EUxtAffordancePlacement::CornerBackRightTop" },
				{ "CornerFrontLeftBottom.Name", "EUxtAffordancePlacement::CornerFrontLeftBottom" },
				{ "CornerFrontLeftTop.Name", "EUxtAffordancePlacement::CornerFrontLeftTop" },
				{ "CornerFrontRightBottom.Name", "EUxtAffordancePlacement::CornerFrontRightBottom" },
				{ "CornerFrontRightTop.Name", "EUxtAffordancePlacement::CornerFrontRightTop" },
				{ "EdgeBackBottom.Name", "EUxtAffordancePlacement::EdgeBackBottom" },
				{ "EdgeBackLeft.Name", "EUxtAffordancePlacement::EdgeBackLeft" },
				{ "EdgeBackRight.Name", "EUxtAffordancePlacement::EdgeBackRight" },
				{ "EdgeBackTop.Name", "EUxtAffordancePlacement::EdgeBackTop" },
				{ "EdgeFrontBottom.Name", "EUxtAffordancePlacement::EdgeFrontBottom" },
				{ "EdgeFrontLeft.Name", "EUxtAffordancePlacement::EdgeFrontLeft" },
				{ "EdgeFrontRight.Name", "EUxtAffordancePlacement::EdgeFrontRight" },
				{ "EdgeFrontTop.Name", "EUxtAffordancePlacement::EdgeFrontTop" },
				{ "EdgeLeftBottom.Name", "EUxtAffordancePlacement::EdgeLeftBottom" },
				{ "EdgeLeftTop.Name", "EUxtAffordancePlacement::EdgeLeftTop" },
				{ "EdgeRightBottom.Name", "EUxtAffordancePlacement::EdgeRightBottom" },
				{ "EdgeRightTop.Name", "EUxtAffordancePlacement::EdgeRightTop" },
				{ "FaceBack.Name", "EUxtAffordancePlacement::FaceBack" },
				{ "FaceBottom.Name", "EUxtAffordancePlacement::FaceBottom" },
				{ "FaceFront.Name", "EUxtAffordancePlacement::FaceFront" },
				{ "FaceLeft.Name", "EUxtAffordancePlacement::FaceLeft" },
				{ "FaceRight.Name", "EUxtAffordancePlacement::FaceRight" },
				{ "FaceTop.Name", "EUxtAffordancePlacement::FaceTop" },
				{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlConfig.h" },
				{ "ToolTip", "Supported placements for affordances." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
				nullptr,
				"EUxtAffordancePlacement",
				"EUxtAffordancePlacement",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FUxtAffordanceConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UXTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FUxtAffordanceConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUxtAffordanceConfig, Z_Construct_UPackage__Script_UXTools(), TEXT("UxtAffordanceConfig"), sizeof(FUxtAffordanceConfig), Get_Z_Construct_UScriptStruct_FUxtAffordanceConfig_Hash());
	}
	return Singleton;
}
template<> UXTOOLS_API UScriptStruct* StaticStruct<FUxtAffordanceConfig>()
{
	return FUxtAffordanceConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUxtAffordanceConfig(FUxtAffordanceConfig::StaticStruct, TEXT("/Script/UXTools"), TEXT("UxtAffordanceConfig"), false, nullptr, nullptr);
static struct FScriptStruct_UXTools_StaticRegisterNativesFUxtAffordanceConfig
{
	FScriptStruct_UXTools_StaticRegisterNativesFUxtAffordanceConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UxtAffordanceConfig")),new UScriptStruct::TCppStructOps<FUxtAffordanceConfig>);
	}
} ScriptStruct_UXTools_StaticRegisterNativesFUxtAffordanceConfig;
	struct Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUniformAction_MetaData[];
#endif
		static void NewProp_bUniformAction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUniformAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Action;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Placement_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Placement;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Placement_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Affordances are grabbable actors placed on the bounding box which enable interaction. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlConfig.h" },
		{ "ToolTip", "Affordances are grabbable actors placed on the bounding box which enable interaction." },
	};
#endif
	void* Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUxtAffordanceConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_bUniformAction_MetaData[] = {
		{ "Category", "BoundsControl" },
		{ "Comment", "/** Apply action in all directions uniformly.\n\x09 * If true transform is changed equally along every unconstrained axis.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlConfig.h" },
		{ "ToolTip", "Apply action in all directions uniformly.\nIf true transform is changed equally along every unconstrained axis." },
	};
#endif
	void Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_bUniformAction_SetBit(void* Obj)
	{
		((FUxtAffordanceConfig*)Obj)->bUniformAction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_bUniformAction = { "bUniformAction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUxtAffordanceConfig), &Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_bUniformAction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_bUniformAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_bUniformAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "BoundsControl" },
		{ "Comment", "/** Action to perform when the affordance is grabbed. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlConfig.h" },
		{ "ToolTip", "Action to perform when the affordance is grabbed." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtAffordanceConfig, Action), Z_Construct_UEnum_UXTools_EUxtAffordanceAction, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_Action_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_Placement_MetaData[] = {
		{ "Category", "BoundsControl" },
		{ "Comment", "/** Preset type of the affordance. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlConfig.h" },
		{ "ToolTip", "Preset type of the affordance." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_Placement = { "Placement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtAffordanceConfig, Placement), Z_Construct_UEnum_UXTools_EUxtAffordancePlacement, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_Placement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_Placement_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_Placement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_bUniformAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_Action_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_Placement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_Placement_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		&NewStructOps,
		"UxtAffordanceConfig",
		sizeof(FUxtAffordanceConfig),
		alignof(FUxtAffordanceConfig),
		Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUxtAffordanceConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUxtAffordanceConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UxtAffordanceConfig"), sizeof(FUxtAffordanceConfig), Get_Z_Construct_UScriptStruct_FUxtAffordanceConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUxtAffordanceConfig_Hash() { return 521366049U; }
	void UUxtBoundsControlConfig::StaticRegisterNativesUUxtBoundsControlConfig()
	{
	}
	UClass* Z_Construct_UClass_UUxtBoundsControlConfig_NoRegister()
	{
		return UUxtBoundsControlConfig::StaticClass();
	}
	struct Z_Construct_UClass_UUxtBoundsControlConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedAxes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LockedAxes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Affordances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Affordances;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Affordances_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtBoundsControlConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundsControlConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "UXTools" },
		{ "Comment", "/** Data asset that stores the configuration of a bounds control. */" },
		{ "IncludePath", "Controls/UxtBoundsControlConfig.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlConfig.h" },
		{ "ToolTip", "Data asset that stores the configuration of a bounds control." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_LockedAxes_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EUxtAxisFlags" },
		{ "Category", "BoundsControl" },
		{ "Comment", "/** Locked axes when changing bounds. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlConfig.h" },
		{ "ToolTip", "Locked axes when changing bounds." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_LockedAxes = { "LockedAxes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBoundsControlConfig, LockedAxes), METADATA_PARAMS(Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_LockedAxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_LockedAxes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_Affordances_MetaData[] = {
		{ "Category", "BoundsControl" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_Affordances = { "Affordances", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBoundsControlConfig, Affordances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_Affordances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_Affordances_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_Affordances_Inner = { "Affordances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUxtAffordanceConfig, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtBoundsControlConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_LockedAxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_Affordances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_Affordances_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtBoundsControlConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtBoundsControlConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtBoundsControlConfig_Statics::ClassParams = {
		&UUxtBoundsControlConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUxtBoundsControlConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundsControlConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtBoundsControlConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundsControlConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtBoundsControlConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtBoundsControlConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtBoundsControlConfig, 4049209069);
	template<> UXTOOLS_API UClass* StaticClass<UUxtBoundsControlConfig>()
	{
		return UUxtBoundsControlConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtBoundsControlConfig(Z_Construct_UClass_UUxtBoundsControlConfig, &UUxtBoundsControlConfig::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtBoundsControlConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtBoundsControlConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
