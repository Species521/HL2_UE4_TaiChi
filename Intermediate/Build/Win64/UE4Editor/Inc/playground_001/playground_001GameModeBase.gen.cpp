// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "playground_001/playground_001GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeplayground_001GameModeBase() {}
// Cross Module References
	PLAYGROUND_001_API UClass* Z_Construct_UClass_Aplayground_001GameModeBase_NoRegister();
	PLAYGROUND_001_API UClass* Z_Construct_UClass_Aplayground_001GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_playground_001();
// End Cross Module References
	void Aplayground_001GameModeBase::StaticRegisterNativesAplayground_001GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_Aplayground_001GameModeBase_NoRegister()
	{
		return Aplayground_001GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_Aplayground_001GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aplayground_001GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_playground_001,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aplayground_001GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "playground_001GameModeBase.h" },
		{ "ModuleRelativePath", "playground_001GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aplayground_001GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aplayground_001GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aplayground_001GameModeBase_Statics::ClassParams = {
		&Aplayground_001GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_Aplayground_001GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aplayground_001GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aplayground_001GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aplayground_001GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aplayground_001GameModeBase, 2037244076);
	template<> PLAYGROUND_001_API UClass* StaticClass<Aplayground_001GameModeBase>()
	{
		return Aplayground_001GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aplayground_001GameModeBase(Z_Construct_UClass_Aplayground_001GameModeBase, &Aplayground_001GameModeBase::StaticClass, TEXT("/Script/playground_001"), TEXT("Aplayground_001GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aplayground_001GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
