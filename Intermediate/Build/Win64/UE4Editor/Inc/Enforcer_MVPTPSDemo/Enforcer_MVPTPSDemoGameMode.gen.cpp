// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Enforcer_MVPTPSDemoGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnforcer_MVPTPSDemoGameMode() {}
// Cross Module References
	ENFORCER_MVPTPSDEMO_API UClass* Z_Construct_UClass_AEnforcer_MVPTPSDemoGameMode_NoRegister();
	ENFORCER_MVPTPSDEMO_API UClass* Z_Construct_UClass_AEnforcer_MVPTPSDemoGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Enforcer_MVPTPSDemo();
// End Cross Module References
	void AEnforcer_MVPTPSDemoGameMode::StaticRegisterNativesAEnforcer_MVPTPSDemoGameMode()
	{
	}
	UClass* Z_Construct_UClass_AEnforcer_MVPTPSDemoGameMode_NoRegister()
	{
		return AEnforcer_MVPTPSDemoGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AEnforcer_MVPTPSDemoGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Enforcer_MVPTPSDemo,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Enforcer_MVPTPSDemoGameMode.h" },
				{ "ModuleRelativePath", "Enforcer_MVPTPSDemoGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AEnforcer_MVPTPSDemoGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AEnforcer_MVPTPSDemoGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnforcer_MVPTPSDemoGameMode, 2526812673);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnforcer_MVPTPSDemoGameMode(Z_Construct_UClass_AEnforcer_MVPTPSDemoGameMode, &AEnforcer_MVPTPSDemoGameMode::StaticClass, TEXT("/Script/Enforcer_MVPTPSDemo"), TEXT("AEnforcer_MVPTPSDemoGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnforcer_MVPTPSDemoGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
