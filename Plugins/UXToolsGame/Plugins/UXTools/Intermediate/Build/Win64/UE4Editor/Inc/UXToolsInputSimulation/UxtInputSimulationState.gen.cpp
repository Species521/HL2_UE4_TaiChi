// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXToolsInputSimulation/Public/UxtInputSimulationState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtInputSimulationState() {}
// Cross Module References
	UXTOOLSINPUTSIMULATION_API UEnum* Z_Construct_UEnum_UXToolsInputSimulation_EUxtInputSimulationHandMode();
	UPackage* Z_Construct_UPackage__Script_UXToolsInputSimulation();
	UXTOOLSINPUTSIMULATION_API UClass* Z_Construct_UClass_UUxtInputSimulationState_NoRegister();
	UXTOOLSINPUTSIMULATION_API UClass* Z_Construct_UClass_UUxtInputSimulationState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* EUxtInputSimulationHandMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXToolsInputSimulation_EUxtInputSimulationHandMode, Z_Construct_UPackage__Script_UXToolsInputSimulation(), TEXT("EUxtInputSimulationHandMode"));
		}
		return Singleton;
	}
	template<> UXTOOLSINPUTSIMULATION_API UEnum* StaticEnum<EUxtInputSimulationHandMode>()
	{
		return EUxtInputSimulationHandMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUxtInputSimulationHandMode(EUxtInputSimulationHandMode_StaticEnum, TEXT("/Script/UXToolsInputSimulation"), TEXT("EUxtInputSimulationHandMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXToolsInputSimulation_EUxtInputSimulationHandMode_Hash() { return 3731014979U; }
	UEnum* Z_Construct_UEnum_UXToolsInputSimulation_EUxtInputSimulationHandMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXToolsInputSimulation();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUxtInputSimulationHandMode"), 0, Get_Z_Construct_UEnum_UXToolsInputSimulation_EUxtInputSimulationHandMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUxtInputSimulationHandMode::Movement", (int64)EUxtInputSimulationHandMode::Movement },
				{ "EUxtInputSimulationHandMode::Rotation", (int64)EUxtInputSimulationHandMode::Rotation },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/UxtInputSimulationState.h" },
				{ "Movement.Comment", "/** Move hands when adding input */" },
				{ "Movement.Name", "EUxtInputSimulationHandMode::Movement" },
				{ "Movement.ToolTip", "Move hands when adding input" },
				{ "Rotation.Comment", "/** Rotate hands when adding input */" },
				{ "Rotation.Name", "EUxtInputSimulationHandMode::Rotation" },
				{ "Rotation.ToolTip", "Rotate hands when adding input" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXToolsInputSimulation,
				nullptr,
				"EUxtInputSimulationHandMode",
				"EUxtInputSimulationHandMode",
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
	DEFINE_FUNCTION(UUxtInputSimulationState::execTogglePoseForControlledHands)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PoseName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TogglePoseForControlledHands(Z_Param_PoseName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtInputSimulationState::execResetTargetPose)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetTargetPose(EControllerHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtInputSimulationState::execSetTargetPose)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_GET_PROPERTY(FNameProperty,Z_Param_PoseName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetPose(EControllerHand(Z_Param_Hand),Z_Param_PoseName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtInputSimulationState::execGetTargetPose)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetTargetPose(EControllerHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtInputSimulationState::execSetDefaultHandRotation)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultHandRotation(EControllerHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtInputSimulationState::execSetDefaultHandLocation)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultHandLocation(EControllerHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtInputSimulationState::execAddHandRotationInput)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_RotationAxis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddHandRotationInput(EAxis::Type(Z_Param_RotationAxis),Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtInputSimulationState::execAddHandMovementInput)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_TranslationAxis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddHandMovementInput(EAxis::Type(Z_Param_TranslationAxis),Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtInputSimulationState::execAddHandInput)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Axis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddHandInput(EAxis::Type(Z_Param_Axis),Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtInputSimulationState::execGetTargetHandTransform)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_TargetTransform);
		P_GET_UBOOL_REF(Z_Param_Out_bAnimate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTargetHandTransform(EControllerHand(Z_Param_Hand),Z_Param_Out_TargetTransform,Z_Param_Out_bAnimate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtInputSimulationState::execSetHandControlEnabled)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetHandControlEnabled(EControllerHand(Z_Param_Hand),Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtInputSimulationState::execGetControlledHands)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<EControllerHand>*)Z_Param__Result=P_THIS->GetControlledHands();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtInputSimulationState::execIsAnyHandControlled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAnyHandControlled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtInputSimulationState::execIsHandControlled)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHandControlled(EControllerHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtInputSimulationState::execSetHandVisibility)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_GET_UBOOL(Z_Param_bIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHandVisibility(EControllerHand(Z_Param_Hand),Z_Param_bIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtInputSimulationState::execIsHandVisible)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHandVisible(EControllerHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtInputSimulationState::execResetHandState)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetHandState(EControllerHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtInputSimulationState::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	void UUxtInputSimulationState::StaticRegisterNativesUUxtInputSimulationState()
	{
		UClass* Class = UUxtInputSimulationState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddHandInput", &UUxtInputSimulationState::execAddHandInput },
			{ "AddHandMovementInput", &UUxtInputSimulationState::execAddHandMovementInput },
			{ "AddHandRotationInput", &UUxtInputSimulationState::execAddHandRotationInput },
			{ "GetControlledHands", &UUxtInputSimulationState::execGetControlledHands },
			{ "GetTargetHandTransform", &UUxtInputSimulationState::execGetTargetHandTransform },
			{ "GetTargetPose", &UUxtInputSimulationState::execGetTargetPose },
			{ "IsAnyHandControlled", &UUxtInputSimulationState::execIsAnyHandControlled },
			{ "IsHandControlled", &UUxtInputSimulationState::execIsHandControlled },
			{ "IsHandVisible", &UUxtInputSimulationState::execIsHandVisible },
			{ "Reset", &UUxtInputSimulationState::execReset },
			{ "ResetHandState", &UUxtInputSimulationState::execResetHandState },
			{ "ResetTargetPose", &UUxtInputSimulationState::execResetTargetPose },
			{ "SetDefaultHandLocation", &UUxtInputSimulationState::execSetDefaultHandLocation },
			{ "SetDefaultHandRotation", &UUxtInputSimulationState::execSetDefaultHandRotation },
			{ "SetHandControlEnabled", &UUxtInputSimulationState::execSetHandControlEnabled },
			{ "SetHandVisibility", &UUxtInputSimulationState::execSetHandVisibility },
			{ "SetTargetPose", &UUxtInputSimulationState::execSetTargetPose },
			{ "TogglePoseForControlledHands", &UUxtInputSimulationState::execTogglePoseForControlledHands },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtInputSimulationState_AddHandInput_Statics
	{
		struct UxtInputSimulationState_eventAddHandInput_Parms
		{
			TEnumAsByte<EAxis::Type> Axis;
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Axis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtInputSimulationState_AddHandInput_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInputSimulationState_eventAddHandInput_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtInputSimulationState_AddHandInput_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInputSimulationState_eventAddHandInput_Parms, Axis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtInputSimulationState_AddHandInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_AddHandInput_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_AddHandInput_Statics::NewProp_Axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInputSimulationState_AddHandInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "InputSimulation" },
		{ "Comment", "/** Add hand movement or rotation, depending on hand input mode. */" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationState.h" },
		{ "ToolTip", "Add hand movement or rotation, depending on hand input mode." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInputSimulationState_AddHandInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInputSimulationState, nullptr, "AddHandInput", nullptr, nullptr, sizeof(UxtInputSimulationState_eventAddHandInput_Parms), Z_Construct_UFunction_UUxtInputSimulationState_AddHandInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_AddHandInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInputSimulationState_AddHandInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_AddHandInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInputSimulationState_AddHandInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtInputSimulationState_AddHandInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtInputSimulationState_AddHandMovementInput_Statics
	{
		struct UxtInputSimulationState_eventAddHandMovementInput_Parms
		{
			TEnumAsByte<EAxis::Type> TranslationAxis;
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TranslationAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtInputSimulationState_AddHandMovementInput_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInputSimulationState_eventAddHandMovementInput_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtInputSimulationState_AddHandMovementInput_Statics::NewProp_TranslationAxis = { "TranslationAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInputSimulationState_eventAddHandMovementInput_Parms, TranslationAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtInputSimulationState_AddHandMovementInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_AddHandMovementInput_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_AddHandMovementInput_Statics::NewProp_TranslationAxis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInputSimulationState_AddHandMovementInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "InputSimulation" },
		{ "Comment", "/** Add hand movement input along a local axis to all controlled hands. */" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationState.h" },
		{ "ToolTip", "Add hand movement input along a local axis to all controlled hands." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInputSimulationState_AddHandMovementInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInputSimulationState, nullptr, "AddHandMovementInput", nullptr, nullptr, sizeof(UxtInputSimulationState_eventAddHandMovementInput_Parms), Z_Construct_UFunction_UUxtInputSimulationState_AddHandMovementInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_AddHandMovementInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInputSimulationState_AddHandMovementInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_AddHandMovementInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInputSimulationState_AddHandMovementInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtInputSimulationState_AddHandMovementInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtInputSimulationState_AddHandRotationInput_Statics
	{
		struct UxtInputSimulationState_eventAddHandRotationInput_Parms
		{
			TEnumAsByte<EAxis::Type> RotationAxis;
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotationAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtInputSimulationState_AddHandRotationInput_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInputSimulationState_eventAddHandRotationInput_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtInputSimulationState_AddHandRotationInput_Statics::NewProp_RotationAxis = { "RotationAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInputSimulationState_eventAddHandRotationInput_Parms, RotationAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtInputSimulationState_AddHandRotationInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_AddHandRotationInput_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_AddHandRotationInput_Statics::NewProp_RotationAxis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInputSimulationState_AddHandRotationInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "InputSimulation" },
		{ "Comment", "/** Add hand rotation input about a local axis to all controlled hands. */" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationState.h" },
		{ "ToolTip", "Add hand rotation input about a local axis to all controlled hands." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInputSimulationState_AddHandRotationInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInputSimulationState, nullptr, "AddHandRotationInput", nullptr, nullptr, sizeof(UxtInputSimulationState_eventAddHandRotationInput_Parms), Z_Construct_UFunction_UUxtInputSimulationState_AddHandRotationInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_AddHandRotationInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInputSimulationState_AddHandRotationInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_AddHandRotationInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInputSimulationState_AddHandRotationInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtInputSimulationState_AddHandRotationInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtInputSimulationState_GetControlledHands_Statics
	{
		struct UxtInputSimulationState_eventGetControlledHands_Parms
		{
			TArray<EControllerHand> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUxtInputSimulationState_GetControlledHands_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInputSimulationState_eventGetControlledHands_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtInputSimulationState_GetControlledHands_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtInputSimulationState_GetControlledHands_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtInputSimulationState_GetControlledHands_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_GetControlledHands_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_GetControlledHands_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_GetControlledHands_Statics::NewProp_ReturnValue_Inner_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInputSimulationState_GetControlledHands_Statics::Function_MetaDataParams[] = {
		{ "Category", "InputSimulation" },
		{ "Comment", "/** Find all hands that are currently controlled. */" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationState.h" },
		{ "ToolTip", "Find all hands that are currently controlled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInputSimulationState_GetControlledHands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInputSimulationState, nullptr, "GetControlledHands", nullptr, nullptr, sizeof(UxtInputSimulationState_eventGetControlledHands_Parms), Z_Construct_UFunction_UUxtInputSimulationState_GetControlledHands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_GetControlledHands_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInputSimulationState_GetControlledHands_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_GetControlledHands_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInputSimulationState_GetControlledHands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtInputSimulationState_GetControlledHands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtInputSimulationState_GetTargetHandTransform_Statics
	{
		struct UxtInputSimulationState_eventGetTargetHandTransform_Parms
		{
			EControllerHand Hand;
			FTransform TargetTransform;
			bool bAnimate;
		};
		static void NewProp_bAnimate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnimate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetTransform;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtInputSimulationState_GetTargetHandTransform_Statics::NewProp_bAnimate_SetBit(void* Obj)
	{
		((UxtInputSimulationState_eventGetTargetHandTransform_Parms*)Obj)->bAnimate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtInputSimulationState_GetTargetHandTransform_Statics::NewProp_bAnimate = { "bAnimate", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtInputSimulationState_eventGetTargetHandTransform_Parms), &Z_Construct_UFunction_UUxtInputSimulationState_GetTargetHandTransform_Statics::NewProp_bAnimate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtInputSimulationState_GetTargetHandTransform_Statics::NewProp_TargetTransform = { "TargetTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInputSimulationState_eventGetTargetHandTransform_Parms, TargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtInputSimulationState_GetTargetHandTransform_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInputSimulationState_eventGetTargetHandTransform_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtInputSimulationState_GetTargetHandTransform_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtInputSimulationState_GetTargetHandTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_GetTargetHandTransform_Statics::NewProp_bAnimate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_GetTargetHandTransform_Statics::NewProp_TargetTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_GetTargetHandTransform_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_GetTargetHandTransform_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInputSimulationState_GetTargetHandTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "InputSimulation" },
		{ "Comment", "/** Get the current target transform for a hand.\n\x09 *  If bAnimate is true then the transform should be blended over time,\n\x09 *  otherwise the target transform should be applied immediately.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationState.h" },
		{ "ToolTip", "Get the current target transform for a hand.\nIf bAnimate is true then the transform should be blended over time,\notherwise the target transform should be applied immediately." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInputSimulationState_GetTargetHandTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInputSimulationState, nullptr, "GetTargetHandTransform", nullptr, nullptr, sizeof(UxtInputSimulationState_eventGetTargetHandTransform_Parms), Z_Construct_UFunction_UUxtInputSimulationState_GetTargetHandTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_GetTargetHandTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInputSimulationState_GetTargetHandTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_GetTargetHandTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInputSimulationState_GetTargetHandTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtInputSimulationState_GetTargetHandTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtInputSimulationState_GetTargetPose_Statics
	{
		struct UxtInputSimulationState_eventGetTargetPose_Parms
		{
			EControllerHand Hand;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUxtInputSimulationState_GetTargetPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInputSimulationState_eventGetTargetPose_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtInputSimulationState_GetTargetPose_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInputSimulationState_eventGetTargetPose_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtInputSimulationState_GetTargetPose_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtInputSimulationState_GetTargetPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_GetTargetPose_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_GetTargetPose_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_GetTargetPose_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInputSimulationState_GetTargetPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "InputSimulation" },
		{ "Comment", "/** Get the current animation pose of a hand.\n\x09 *  If the hand is currently controlled by user input it will use the current target pose,\n\x09 *  otherwise the default pose is used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationState.h" },
		{ "ToolTip", "Get the current animation pose of a hand.\nIf the hand is currently controlled by user input it will use the current target pose,\notherwise the default pose is used." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInputSimulationState_GetTargetPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInputSimulationState, nullptr, "GetTargetPose", nullptr, nullptr, sizeof(UxtInputSimulationState_eventGetTargetPose_Parms), Z_Construct_UFunction_UUxtInputSimulationState_GetTargetPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_GetTargetPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInputSimulationState_GetTargetPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_GetTargetPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInputSimulationState_GetTargetPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtInputSimulationState_GetTargetPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtInputSimulationState_IsAnyHandControlled_Statics
	{
		struct UxtInputSimulationState_eventIsAnyHandControlled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtInputSimulationState_IsAnyHandControlled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtInputSimulationState_eventIsAnyHandControlled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtInputSimulationState_IsAnyHandControlled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtInputSimulationState_eventIsAnyHandControlled_Parms), &Z_Construct_UFunction_UUxtInputSimulationState_IsAnyHandControlled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtInputSimulationState_IsAnyHandControlled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_IsAnyHandControlled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInputSimulationState_IsAnyHandControlled_Statics::Function_MetaDataParams[] = {
		{ "Category", "InputSimulation" },
		{ "Comment", "/** True if any hand is currently controlled by the user. */" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationState.h" },
		{ "ToolTip", "True if any hand is currently controlled by the user." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInputSimulationState_IsAnyHandControlled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInputSimulationState, nullptr, "IsAnyHandControlled", nullptr, nullptr, sizeof(UxtInputSimulationState_eventIsAnyHandControlled_Parms), Z_Construct_UFunction_UUxtInputSimulationState_IsAnyHandControlled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_IsAnyHandControlled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInputSimulationState_IsAnyHandControlled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_IsAnyHandControlled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInputSimulationState_IsAnyHandControlled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtInputSimulationState_IsAnyHandControlled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtInputSimulationState_IsHandControlled_Statics
	{
		struct UxtInputSimulationState_eventIsHandControlled_Parms
		{
			EControllerHand Hand;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtInputSimulationState_IsHandControlled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtInputSimulationState_eventIsHandControlled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtInputSimulationState_IsHandControlled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtInputSimulationState_eventIsHandControlled_Parms), &Z_Construct_UFunction_UUxtInputSimulationState_IsHandControlled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtInputSimulationState_IsHandControlled_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInputSimulationState_eventIsHandControlled_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtInputSimulationState_IsHandControlled_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtInputSimulationState_IsHandControlled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_IsHandControlled_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_IsHandControlled_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_IsHandControlled_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInputSimulationState_IsHandControlled_Statics::Function_MetaDataParams[] = {
		{ "Category", "InputSimulation" },
		{ "Comment", "/** True if the hand is currently controlled by the user. */" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationState.h" },
		{ "ToolTip", "True if the hand is currently controlled by the user." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInputSimulationState_IsHandControlled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInputSimulationState, nullptr, "IsHandControlled", nullptr, nullptr, sizeof(UxtInputSimulationState_eventIsHandControlled_Parms), Z_Construct_UFunction_UUxtInputSimulationState_IsHandControlled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_IsHandControlled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInputSimulationState_IsHandControlled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_IsHandControlled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInputSimulationState_IsHandControlled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtInputSimulationState_IsHandControlled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtInputSimulationState_IsHandVisible_Statics
	{
		struct UxtInputSimulationState_eventIsHandVisible_Parms
		{
			EControllerHand Hand;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtInputSimulationState_IsHandVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtInputSimulationState_eventIsHandVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtInputSimulationState_IsHandVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtInputSimulationState_eventIsHandVisible_Parms), &Z_Construct_UFunction_UUxtInputSimulationState_IsHandVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtInputSimulationState_IsHandVisible_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInputSimulationState_eventIsHandVisible_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtInputSimulationState_IsHandVisible_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtInputSimulationState_IsHandVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_IsHandVisible_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_IsHandVisible_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_IsHandVisible_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInputSimulationState_IsHandVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "InputSimulation" },
		{ "Comment", "/** True if the hand is currently visible. */" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationState.h" },
		{ "ToolTip", "True if the hand is currently visible." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInputSimulationState_IsHandVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInputSimulationState, nullptr, "IsHandVisible", nullptr, nullptr, sizeof(UxtInputSimulationState_eventIsHandVisible_Parms), Z_Construct_UFunction_UUxtInputSimulationState_IsHandVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_IsHandVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInputSimulationState_IsHandVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_IsHandVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInputSimulationState_IsHandVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtInputSimulationState_IsHandVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtInputSimulationState_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInputSimulationState_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "InputSimulation" },
		{ "Comment", "/** Reset to default. */" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationState.h" },
		{ "ToolTip", "Reset to default." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInputSimulationState_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInputSimulationState, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInputSimulationState_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInputSimulationState_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtInputSimulationState_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtInputSimulationState_ResetHandState_Statics
	{
		struct UxtInputSimulationState_eventResetHandState_Parms
		{
			EControllerHand Hand;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtInputSimulationState_ResetHandState_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInputSimulationState_eventResetHandState_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtInputSimulationState_ResetHandState_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtInputSimulationState_ResetHandState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_ResetHandState_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_ResetHandState_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInputSimulationState_ResetHandState_Statics::Function_MetaDataParams[] = {
		{ "Category", "InputSimulation" },
		{ "Comment", "/** Reset hand state to default. */" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationState.h" },
		{ "ToolTip", "Reset hand state to default." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInputSimulationState_ResetHandState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInputSimulationState, nullptr, "ResetHandState", nullptr, nullptr, sizeof(UxtInputSimulationState_eventResetHandState_Parms), Z_Construct_UFunction_UUxtInputSimulationState_ResetHandState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_ResetHandState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInputSimulationState_ResetHandState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_ResetHandState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInputSimulationState_ResetHandState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtInputSimulationState_ResetHandState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtInputSimulationState_ResetTargetPose_Statics
	{
		struct UxtInputSimulationState_eventResetTargetPose_Parms
		{
			EControllerHand Hand;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtInputSimulationState_ResetTargetPose_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInputSimulationState_eventResetTargetPose_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtInputSimulationState_ResetTargetPose_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtInputSimulationState_ResetTargetPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_ResetTargetPose_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_ResetTargetPose_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInputSimulationState_ResetTargetPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "InputSimulation" },
		{ "Comment", "/** Reset the default target animation pose for a hand. */" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationState.h" },
		{ "ToolTip", "Reset the default target animation pose for a hand." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInputSimulationState_ResetTargetPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInputSimulationState, nullptr, "ResetTargetPose", nullptr, nullptr, sizeof(UxtInputSimulationState_eventResetTargetPose_Parms), Z_Construct_UFunction_UUxtInputSimulationState_ResetTargetPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_ResetTargetPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInputSimulationState_ResetTargetPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_ResetTargetPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInputSimulationState_ResetTargetPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtInputSimulationState_ResetTargetPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtInputSimulationState_SetDefaultHandLocation_Statics
	{
		struct UxtInputSimulationState_eventSetDefaultHandLocation_Parms
		{
			EControllerHand Hand;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtInputSimulationState_SetDefaultHandLocation_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInputSimulationState_eventSetDefaultHandLocation_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtInputSimulationState_SetDefaultHandLocation_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtInputSimulationState_SetDefaultHandLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_SetDefaultHandLocation_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_SetDefaultHandLocation_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInputSimulationState_SetDefaultHandLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "InputSimulation" },
		{ "Comment", "/** Set the mesh for the given hand to the default location. */" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationState.h" },
		{ "ToolTip", "Set the mesh for the given hand to the default location." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInputSimulationState_SetDefaultHandLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInputSimulationState, nullptr, "SetDefaultHandLocation", nullptr, nullptr, sizeof(UxtInputSimulationState_eventSetDefaultHandLocation_Parms), Z_Construct_UFunction_UUxtInputSimulationState_SetDefaultHandLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_SetDefaultHandLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInputSimulationState_SetDefaultHandLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_SetDefaultHandLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInputSimulationState_SetDefaultHandLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtInputSimulationState_SetDefaultHandLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtInputSimulationState_SetDefaultHandRotation_Statics
	{
		struct UxtInputSimulationState_eventSetDefaultHandRotation_Parms
		{
			EControllerHand Hand;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtInputSimulationState_SetDefaultHandRotation_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInputSimulationState_eventSetDefaultHandRotation_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtInputSimulationState_SetDefaultHandRotation_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtInputSimulationState_SetDefaultHandRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_SetDefaultHandRotation_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_SetDefaultHandRotation_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInputSimulationState_SetDefaultHandRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "InputSimulation" },
		{ "Comment", "/** Set the rotation for the given hand to the rest rotation. */" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationState.h" },
		{ "ToolTip", "Set the rotation for the given hand to the rest rotation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInputSimulationState_SetDefaultHandRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInputSimulationState, nullptr, "SetDefaultHandRotation", nullptr, nullptr, sizeof(UxtInputSimulationState_eventSetDefaultHandRotation_Parms), Z_Construct_UFunction_UUxtInputSimulationState_SetDefaultHandRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_SetDefaultHandRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInputSimulationState_SetDefaultHandRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_SetDefaultHandRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInputSimulationState_SetDefaultHandRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtInputSimulationState_SetDefaultHandRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtInputSimulationState_SetHandControlEnabled_Statics
	{
		struct UxtInputSimulationState_eventSetHandControlEnabled_Parms
		{
			EControllerHand Hand;
			bool bEnabled;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtInputSimulationState_SetHandControlEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtInputSimulationState_eventSetHandControlEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtInputSimulationState_SetHandControlEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtInputSimulationState_eventSetHandControlEnabled_Parms), &Z_Construct_UFunction_UUxtInputSimulationState_SetHandControlEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUxtInputSimulationState_SetHandControlEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UxtInputSimulationState_eventSetHandControlEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtInputSimulationState_SetHandControlEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtInputSimulationState_eventSetHandControlEnabled_Parms), &Z_Construct_UFunction_UUxtInputSimulationState_SetHandControlEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtInputSimulationState_SetHandControlEnabled_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInputSimulationState_eventSetHandControlEnabled_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtInputSimulationState_SetHandControlEnabled_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtInputSimulationState_SetHandControlEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_SetHandControlEnabled_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_SetHandControlEnabled_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_SetHandControlEnabled_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_SetHandControlEnabled_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInputSimulationState_SetHandControlEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "InputSimulation" },
		{ "Comment", "/** Enable control of a simulated hand by the user.\n\x09 *  Returns true if hand control was successfully changed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationState.h" },
		{ "ToolTip", "Enable control of a simulated hand by the user.\nReturns true if hand control was successfully changed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInputSimulationState_SetHandControlEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInputSimulationState, nullptr, "SetHandControlEnabled", nullptr, nullptr, sizeof(UxtInputSimulationState_eventSetHandControlEnabled_Parms), Z_Construct_UFunction_UUxtInputSimulationState_SetHandControlEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_SetHandControlEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInputSimulationState_SetHandControlEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_SetHandControlEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInputSimulationState_SetHandControlEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtInputSimulationState_SetHandControlEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtInputSimulationState_SetHandVisibility_Statics
	{
		struct UxtInputSimulationState_eventSetHandVisibility_Parms
		{
			EControllerHand Hand;
			bool bIsVisible;
		};
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtInputSimulationState_SetHandVisibility_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((UxtInputSimulationState_eventSetHandVisibility_Parms*)Obj)->bIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtInputSimulationState_SetHandVisibility_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtInputSimulationState_eventSetHandVisibility_Parms), &Z_Construct_UFunction_UUxtInputSimulationState_SetHandVisibility_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtInputSimulationState_SetHandVisibility_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInputSimulationState_eventSetHandVisibility_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtInputSimulationState_SetHandVisibility_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtInputSimulationState_SetHandVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_SetHandVisibility_Statics::NewProp_bIsVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_SetHandVisibility_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_SetHandVisibility_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInputSimulationState_SetHandVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "InputSimulation" },
		{ "Comment", "/** Set the hand visibility. */" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationState.h" },
		{ "ToolTip", "Set the hand visibility." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInputSimulationState_SetHandVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInputSimulationState, nullptr, "SetHandVisibility", nullptr, nullptr, sizeof(UxtInputSimulationState_eventSetHandVisibility_Parms), Z_Construct_UFunction_UUxtInputSimulationState_SetHandVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_SetHandVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInputSimulationState_SetHandVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_SetHandVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInputSimulationState_SetHandVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtInputSimulationState_SetHandVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtInputSimulationState_SetTargetPose_Statics
	{
		struct UxtInputSimulationState_eventSetTargetPose_Parms
		{
			EControllerHand Hand;
			FName PoseName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PoseName;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUxtInputSimulationState_SetTargetPose_Statics::NewProp_PoseName = { "PoseName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInputSimulationState_eventSetTargetPose_Parms, PoseName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtInputSimulationState_SetTargetPose_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInputSimulationState_eventSetTargetPose_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtInputSimulationState_SetTargetPose_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtInputSimulationState_SetTargetPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_SetTargetPose_Statics::NewProp_PoseName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_SetTargetPose_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_SetTargetPose_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInputSimulationState_SetTargetPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "InputSimulation" },
		{ "Comment", "/** Set the target animation pose for a hand. */" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationState.h" },
		{ "ToolTip", "Set the target animation pose for a hand." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInputSimulationState_SetTargetPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInputSimulationState, nullptr, "SetTargetPose", nullptr, nullptr, sizeof(UxtInputSimulationState_eventSetTargetPose_Parms), Z_Construct_UFunction_UUxtInputSimulationState_SetTargetPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_SetTargetPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInputSimulationState_SetTargetPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_SetTargetPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInputSimulationState_SetTargetPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtInputSimulationState_SetTargetPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtInputSimulationState_TogglePoseForControlledHands_Statics
	{
		struct UxtInputSimulationState_eventTogglePoseForControlledHands_Parms
		{
			FName PoseName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PoseName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUxtInputSimulationState_TogglePoseForControlledHands_Statics::NewProp_PoseName = { "PoseName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInputSimulationState_eventTogglePoseForControlledHands_Parms, PoseName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtInputSimulationState_TogglePoseForControlledHands_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationState_TogglePoseForControlledHands_Statics::NewProp_PoseName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInputSimulationState_TogglePoseForControlledHands_Statics::Function_MetaDataParams[] = {
		{ "Category", "InputSimulation" },
		{ "Comment", "/** Toggle the target pose for all currently controlled hands.\n\x09 *  - If all hands use the target pose already, all hands will reset to the default pose.\n\x09 *  - If any hand does NOT use the target pose already, all hands will use it.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationState.h" },
		{ "ToolTip", "Toggle the target pose for all currently controlled hands.\n- If all hands use the target pose already, all hands will reset to the default pose.\n- If any hand does NOT use the target pose already, all hands will use it." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInputSimulationState_TogglePoseForControlledHands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInputSimulationState, nullptr, "TogglePoseForControlledHands", nullptr, nullptr, sizeof(UxtInputSimulationState_eventTogglePoseForControlledHands_Parms), Z_Construct_UFunction_UUxtInputSimulationState_TogglePoseForControlledHands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_TogglePoseForControlledHands_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInputSimulationState_TogglePoseForControlledHands_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationState_TogglePoseForControlledHands_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInputSimulationState_TogglePoseForControlledHands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtInputSimulationState_TogglePoseForControlledHands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUxtInputSimulationState_NoRegister()
	{
		return UUxtInputSimulationState::StaticClass();
	}
	struct Z_Construct_UClass_UUxtInputSimulationState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeHeadOrientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeHeadOrientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeHeadPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeHeadPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandInputMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HandInputMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HandInputMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtInputSimulationState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UXToolsInputSimulation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtInputSimulationState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtInputSimulationState_AddHandInput, "AddHandInput" }, // 830427994
		{ &Z_Construct_UFunction_UUxtInputSimulationState_AddHandMovementInput, "AddHandMovementInput" }, // 1662728003
		{ &Z_Construct_UFunction_UUxtInputSimulationState_AddHandRotationInput, "AddHandRotationInput" }, // 1938318485
		{ &Z_Construct_UFunction_UUxtInputSimulationState_GetControlledHands, "GetControlledHands" }, // 1210937149
		{ &Z_Construct_UFunction_UUxtInputSimulationState_GetTargetHandTransform, "GetTargetHandTransform" }, // 130122704
		{ &Z_Construct_UFunction_UUxtInputSimulationState_GetTargetPose, "GetTargetPose" }, // 3455444520
		{ &Z_Construct_UFunction_UUxtInputSimulationState_IsAnyHandControlled, "IsAnyHandControlled" }, // 1007451004
		{ &Z_Construct_UFunction_UUxtInputSimulationState_IsHandControlled, "IsHandControlled" }, // 1250359447
		{ &Z_Construct_UFunction_UUxtInputSimulationState_IsHandVisible, "IsHandVisible" }, // 2574748181
		{ &Z_Construct_UFunction_UUxtInputSimulationState_Reset, "Reset" }, // 1928299684
		{ &Z_Construct_UFunction_UUxtInputSimulationState_ResetHandState, "ResetHandState" }, // 4149873693
		{ &Z_Construct_UFunction_UUxtInputSimulationState_ResetTargetPose, "ResetTargetPose" }, // 1410488116
		{ &Z_Construct_UFunction_UUxtInputSimulationState_SetDefaultHandLocation, "SetDefaultHandLocation" }, // 2033264818
		{ &Z_Construct_UFunction_UUxtInputSimulationState_SetDefaultHandRotation, "SetDefaultHandRotation" }, // 2260355868
		{ &Z_Construct_UFunction_UUxtInputSimulationState_SetHandControlEnabled, "SetHandControlEnabled" }, // 2475408702
		{ &Z_Construct_UFunction_UUxtInputSimulationState_SetHandVisibility, "SetHandVisibility" }, // 544368913
		{ &Z_Construct_UFunction_UUxtInputSimulationState_SetTargetPose, "SetTargetPose" }, // 3202675045
		{ &Z_Construct_UFunction_UUxtInputSimulationState_TogglePoseForControlledHands, "TogglePoseForControlledHands" }, // 1256207178
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtInputSimulationState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Simulation state for head movement and hand gestures.\n */" },
		{ "IncludePath", "UxtInputSimulationState.h" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationState.h" },
		{ "ToolTip", "Simulation state for head movement and hand gestures." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtInputSimulationState_Statics::NewProp_RelativeHeadOrientation_MetaData[] = {
		{ "Category", "InputSimulation" },
		{ "Comment", "/** Head orientation relative to the character controller. */" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationState.h" },
		{ "ToolTip", "Head orientation relative to the character controller." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtInputSimulationState_Statics::NewProp_RelativeHeadOrientation = { "RelativeHeadOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtInputSimulationState, RelativeHeadOrientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UClass_UUxtInputSimulationState_Statics::NewProp_RelativeHeadOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtInputSimulationState_Statics::NewProp_RelativeHeadOrientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtInputSimulationState_Statics::NewProp_RelativeHeadPosition_MetaData[] = {
		{ "Category", "InputSimulation" },
		{ "Comment", "/** Head position relative to the character controller. */" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationState.h" },
		{ "ToolTip", "Head position relative to the character controller." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtInputSimulationState_Statics::NewProp_RelativeHeadPosition = { "RelativeHeadPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtInputSimulationState, RelativeHeadPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UUxtInputSimulationState_Statics::NewProp_RelativeHeadPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtInputSimulationState_Statics::NewProp_RelativeHeadPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtInputSimulationState_Statics::NewProp_HandInputMode_MetaData[] = {
		{ "Category", "InputSimulation" },
		{ "Comment", "/** If true, input will be interpreted as hand rotation instead of movement. */" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationState.h" },
		{ "ToolTip", "If true, input will be interpreted as hand rotation instead of movement." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUxtInputSimulationState_Statics::NewProp_HandInputMode = { "HandInputMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtInputSimulationState, HandInputMode), Z_Construct_UEnum_UXToolsInputSimulation_EUxtInputSimulationHandMode, METADATA_PARAMS(Z_Construct_UClass_UUxtInputSimulationState_Statics::NewProp_HandInputMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtInputSimulationState_Statics::NewProp_HandInputMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUxtInputSimulationState_Statics::NewProp_HandInputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtInputSimulationState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtInputSimulationState_Statics::NewProp_RelativeHeadOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtInputSimulationState_Statics::NewProp_RelativeHeadPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtInputSimulationState_Statics::NewProp_HandInputMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtInputSimulationState_Statics::NewProp_HandInputMode_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtInputSimulationState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtInputSimulationState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtInputSimulationState_Statics::ClassParams = {
		&UUxtInputSimulationState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtInputSimulationState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtInputSimulationState_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtInputSimulationState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtInputSimulationState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtInputSimulationState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtInputSimulationState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtInputSimulationState, 1829244206);
	template<> UXTOOLSINPUTSIMULATION_API UClass* StaticClass<UUxtInputSimulationState>()
	{
		return UUxtInputSimulationState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtInputSimulationState(Z_Construct_UClass_UUxtInputSimulationState, &UUxtInputSimulationState::StaticClass, TEXT("/Script/UXToolsInputSimulation"), TEXT("UUxtInputSimulationState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtInputSimulationState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
