// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtRingCursorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtRingCursorComponent() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtRingCursorComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtRingCursorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUxtRingCursorComponent::execSetBorderColor)
	{
		P_GET_STRUCT(FColor,Z_Param_NewBorderColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBorderColor(Z_Param_NewBorderColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtRingCursorComponent::execGetBorderColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=P_THIS->GetBorderColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtRingCursorComponent::execSetRingColor)
	{
		P_GET_STRUCT(FColor,Z_Param_NewRingColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRingColor(Z_Param_NewRingColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtRingCursorComponent::execGetRingColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=P_THIS->GetRingColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtRingCursorComponent::execSetRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRadius(Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtRingCursorComponent::execGetRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRadius();
		P_NATIVE_END;
	}
	void UUxtRingCursorComponent::StaticRegisterNativesUUxtRingCursorComponent()
	{
		UClass* Class = UUxtRingCursorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBorderColor", &UUxtRingCursorComponent::execGetBorderColor },
			{ "GetRadius", &UUxtRingCursorComponent::execGetRadius },
			{ "GetRingColor", &UUxtRingCursorComponent::execGetRingColor },
			{ "SetBorderColor", &UUxtRingCursorComponent::execSetBorderColor },
			{ "SetRadius", &UUxtRingCursorComponent::execSetRadius },
			{ "SetRingColor", &UUxtRingCursorComponent::execSetRingColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtRingCursorComponent_GetBorderColor_Statics
	{
		struct UxtRingCursorComponent_eventGetBorderColor_Parms
		{
			FColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtRingCursorComponent_GetBorderColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtRingCursorComponent_eventGetBorderColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtRingCursorComponent_GetBorderColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtRingCursorComponent_GetBorderColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtRingCursorComponent_GetBorderColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Controls/UxtRingCursorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtRingCursorComponent_GetBorderColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtRingCursorComponent, nullptr, "GetBorderColor", nullptr, nullptr, sizeof(UxtRingCursorComponent_eventGetBorderColor_Parms), Z_Construct_UFunction_UUxtRingCursorComponent_GetBorderColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtRingCursorComponent_GetBorderColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtRingCursorComponent_GetBorderColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtRingCursorComponent_GetBorderColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtRingCursorComponent_GetBorderColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtRingCursorComponent_GetBorderColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtRingCursorComponent_GetRadius_Statics
	{
		struct UxtRingCursorComponent_eventGetRadius_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtRingCursorComponent_GetRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtRingCursorComponent_eventGetRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtRingCursorComponent_GetRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtRingCursorComponent_GetRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtRingCursorComponent_GetRadius_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Controls/UxtRingCursorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtRingCursorComponent_GetRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtRingCursorComponent, nullptr, "GetRadius", nullptr, nullptr, sizeof(UxtRingCursorComponent_eventGetRadius_Parms), Z_Construct_UFunction_UUxtRingCursorComponent_GetRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtRingCursorComponent_GetRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtRingCursorComponent_GetRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtRingCursorComponent_GetRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtRingCursorComponent_GetRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtRingCursorComponent_GetRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtRingCursorComponent_GetRingColor_Statics
	{
		struct UxtRingCursorComponent_eventGetRingColor_Parms
		{
			FColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtRingCursorComponent_GetRingColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtRingCursorComponent_eventGetRingColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtRingCursorComponent_GetRingColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtRingCursorComponent_GetRingColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtRingCursorComponent_GetRingColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Controls/UxtRingCursorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtRingCursorComponent_GetRingColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtRingCursorComponent, nullptr, "GetRingColor", nullptr, nullptr, sizeof(UxtRingCursorComponent_eventGetRingColor_Parms), Z_Construct_UFunction_UUxtRingCursorComponent_GetRingColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtRingCursorComponent_GetRingColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtRingCursorComponent_GetRingColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtRingCursorComponent_GetRingColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtRingCursorComponent_GetRingColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtRingCursorComponent_GetRingColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtRingCursorComponent_SetBorderColor_Statics
	{
		struct UxtRingCursorComponent_eventSetBorderColor_Parms
		{
			FColor NewBorderColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewBorderColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtRingCursorComponent_SetBorderColor_Statics::NewProp_NewBorderColor = { "NewBorderColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtRingCursorComponent_eventSetBorderColor_Parms, NewBorderColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtRingCursorComponent_SetBorderColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtRingCursorComponent_SetBorderColor_Statics::NewProp_NewBorderColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtRingCursorComponent_SetBorderColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Controls/UxtRingCursorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtRingCursorComponent_SetBorderColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtRingCursorComponent, nullptr, "SetBorderColor", nullptr, nullptr, sizeof(UxtRingCursorComponent_eventSetBorderColor_Parms), Z_Construct_UFunction_UUxtRingCursorComponent_SetBorderColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtRingCursorComponent_SetBorderColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtRingCursorComponent_SetBorderColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtRingCursorComponent_SetBorderColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtRingCursorComponent_SetBorderColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtRingCursorComponent_SetBorderColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtRingCursorComponent_SetRadius_Statics
	{
		struct UxtRingCursorComponent_eventSetRadius_Parms
		{
			float Radius;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtRingCursorComponent_SetRadius_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtRingCursorComponent_eventSetRadius_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtRingCursorComponent_SetRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtRingCursorComponent_SetRadius_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtRingCursorComponent_SetRadius_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Controls/UxtRingCursorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtRingCursorComponent_SetRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtRingCursorComponent, nullptr, "SetRadius", nullptr, nullptr, sizeof(UxtRingCursorComponent_eventSetRadius_Parms), Z_Construct_UFunction_UUxtRingCursorComponent_SetRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtRingCursorComponent_SetRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtRingCursorComponent_SetRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtRingCursorComponent_SetRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtRingCursorComponent_SetRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtRingCursorComponent_SetRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtRingCursorComponent_SetRingColor_Statics
	{
		struct UxtRingCursorComponent_eventSetRingColor_Parms
		{
			FColor NewRingColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRingColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtRingCursorComponent_SetRingColor_Statics::NewProp_NewRingColor = { "NewRingColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtRingCursorComponent_eventSetRingColor_Parms, NewRingColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtRingCursorComponent_SetRingColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtRingCursorComponent_SetRingColor_Statics::NewProp_NewRingColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtRingCursorComponent_SetRingColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Controls/UxtRingCursorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtRingCursorComponent_SetRingColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtRingCursorComponent, nullptr, "SetRingColor", nullptr, nullptr, sizeof(UxtRingCursorComponent_eventSetRingColor_Parms), Z_Construct_UFunction_UUxtRingCursorComponent_SetRingColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtRingCursorComponent_SetRingColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtRingCursorComponent_SetRingColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtRingCursorComponent_SetRingColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtRingCursorComponent_SetRingColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtRingCursorComponent_SetRingColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUxtRingCursorComponent_NoRegister()
	{
		return UUxtRingCursorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtRingCursorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInstanceBorder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInstanceBorder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInstanceRing_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInstanceRing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PressMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FocusMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BorderColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RingColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtRingCursorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtRingCursorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtRingCursorComponent_GetBorderColor, "GetBorderColor" }, // 838171060
		{ &Z_Construct_UFunction_UUxtRingCursorComponent_GetRadius, "GetRadius" }, // 610776188
		{ &Z_Construct_UFunction_UUxtRingCursorComponent_GetRingColor, "GetRingColor" }, // 3156058388
		{ &Z_Construct_UFunction_UUxtRingCursorComponent_SetBorderColor, "SetBorderColor" }, // 467593317
		{ &Z_Construct_UFunction_UUxtRingCursorComponent_SetRadius, "SetRadius" }, // 496189930
		{ &Z_Construct_UFunction_UUxtRingCursorComponent_SetRingColor, "SetRingColor" }, // 1448727918
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtRingCursorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Displays a flat ring facing -X. The ring radius can be set directly or via the component scale.\n */" },
		{ "HideCategories", "StaticMesh Materials Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Controls/UxtRingCursorComponent.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtRingCursorComponent.h" },
		{ "ToolTip", "Displays a flat ring facing -X. The ring radius can be set directly or via the component scale." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_Radius_MetaData[] = {
		{ "BlueprintGetter", "GetRadius" },
		{ "BlueprintSetter", "SetRadius" },
		{ "Category", "Ring Cursor" },
		{ "ModuleRelativePath", "Public/Controls/UxtRingCursorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0040000000002004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtRingCursorComponent, Radius), METADATA_PARAMS(Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_MaterialInstanceBorder_MetaData[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtRingCursorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_MaterialInstanceBorder = { "MaterialInstanceBorder", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtRingCursorComponent, MaterialInstanceBorder), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_MaterialInstanceBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_MaterialInstanceBorder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_MaterialInstanceRing_MetaData[] = {
		{ "Comment", "/** Dynamic instance of the ring material. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtRingCursorComponent.h" },
		{ "ToolTip", "Dynamic instance of the ring material." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_MaterialInstanceRing = { "MaterialInstanceRing", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtRingCursorComponent, MaterialInstanceRing), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_MaterialInstanceRing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_MaterialInstanceRing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_PressMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtRingCursorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_PressMesh = { "PressMesh", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtRingCursorComponent, PressMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_PressMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_PressMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_FocusMesh_MetaData[] = {
		{ "Comment", "/** Cursor meshes. Swapping dynamically on the fly depends on its state. **/" },
		{ "ModuleRelativePath", "Public/Controls/UxtRingCursorComponent.h" },
		{ "ToolTip", "Cursor meshes. Swapping dynamically on the fly depends on its state. *" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_FocusMesh = { "FocusMesh", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtRingCursorComponent, FocusMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_FocusMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_FocusMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_BorderColor_MetaData[] = {
		{ "BlueprintGetter", "GetBorderColor" },
		{ "BlueprintSetter", "SetBorderColor" },
		{ "Category", "Ring Cursor" },
		{ "ModuleRelativePath", "Public/Controls/UxtRingCursorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_BorderColor = { "BorderColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtRingCursorComponent, BorderColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_BorderColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_BorderColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_RingColor_MetaData[] = {
		{ "BlueprintGetter", "GetRingColor" },
		{ "BlueprintSetter", "SetRingColor" },
		{ "Category", "Ring Cursor" },
		{ "ModuleRelativePath", "Public/Controls/UxtRingCursorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_RingColor = { "RingColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtRingCursorComponent, RingColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_RingColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_RingColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtRingCursorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_MaterialInstanceBorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_MaterialInstanceRing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_PressMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_FocusMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_BorderColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtRingCursorComponent_Statics::NewProp_RingColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtRingCursorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtRingCursorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtRingCursorComponent_Statics::ClassParams = {
		&UUxtRingCursorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtRingCursorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRingCursorComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtRingCursorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRingCursorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtRingCursorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtRingCursorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtRingCursorComponent, 2229821148);
	template<> UXTOOLS_API UClass* StaticClass<UUxtRingCursorComponent>()
	{
		return UUxtRingCursorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtRingCursorComponent(Z_Construct_UClass_UUxtRingCursorComponent, &UUxtRingCursorComponent::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtRingCursorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtRingCursorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
