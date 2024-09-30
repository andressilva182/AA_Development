// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AA_Development/AA_DevelopmentGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAA_DevelopmentGameMode() {}
// Cross Module References
	AA_DEVELOPMENT_API UClass* Z_Construct_UClass_AAA_DevelopmentGameMode();
	AA_DEVELOPMENT_API UClass* Z_Construct_UClass_AAA_DevelopmentGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AA_Development();
// End Cross Module References
	void AAA_DevelopmentGameMode::StaticRegisterNativesAAA_DevelopmentGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAA_DevelopmentGameMode);
	UClass* Z_Construct_UClass_AAA_DevelopmentGameMode_NoRegister()
	{
		return AAA_DevelopmentGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAA_DevelopmentGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAA_DevelopmentGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AA_Development,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAA_DevelopmentGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAA_DevelopmentGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AA_DevelopmentGameMode.h" },
		{ "ModuleRelativePath", "AA_DevelopmentGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAA_DevelopmentGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAA_DevelopmentGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAA_DevelopmentGameMode_Statics::ClassParams = {
		&AAA_DevelopmentGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAA_DevelopmentGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AAA_DevelopmentGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AAA_DevelopmentGameMode()
	{
		if (!Z_Registration_Info_UClass_AAA_DevelopmentGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAA_DevelopmentGameMode.OuterSingleton, Z_Construct_UClass_AAA_DevelopmentGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAA_DevelopmentGameMode.OuterSingleton;
	}
	template<> AA_DEVELOPMENT_API UClass* StaticClass<AAA_DevelopmentGameMode>()
	{
		return AAA_DevelopmentGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAA_DevelopmentGameMode);
	AAA_DevelopmentGameMode::~AAA_DevelopmentGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Andres_PC_Documents_Unreal_Projects_AA_Development_Source_AA_Development_AA_DevelopmentGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Andres_PC_Documents_Unreal_Projects_AA_Development_Source_AA_Development_AA_DevelopmentGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAA_DevelopmentGameMode, AAA_DevelopmentGameMode::StaticClass, TEXT("AAA_DevelopmentGameMode"), &Z_Registration_Info_UClass_AAA_DevelopmentGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAA_DevelopmentGameMode), 2879059510U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Andres_PC_Documents_Unreal_Projects_AA_Development_Source_AA_Development_AA_DevelopmentGameMode_h_3944925285(TEXT("/Script/AA_Development"),
		Z_CompiledInDeferFile_FID_Users_Andres_PC_Documents_Unreal_Projects_AA_Development_Source_AA_Development_AA_DevelopmentGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Andres_PC_Documents_Unreal_Projects_AA_Development_Source_AA_Development_AA_DevelopmentGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
