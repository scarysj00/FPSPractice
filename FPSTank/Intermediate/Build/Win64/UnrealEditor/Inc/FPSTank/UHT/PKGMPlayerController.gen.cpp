// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/Controller/PKGMPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePKGMPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	FPSTANK_API UClass* Z_Construct_UClass_APKGMPlayerController();
	FPSTANK_API UClass* Z_Construct_UClass_APKGMPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPSTank();
// End Cross Module References
	void APKGMPlayerController::StaticRegisterNativesAPKGMPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APKGMPlayerController);
	UClass* Z_Construct_UClass_APKGMPlayerController_NoRegister()
	{
		return APKGMPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_APKGMPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APKGMPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSTank,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APKGMPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APKGMPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Actors/Controller/PKGMPlayerController.h" },
		{ "ModuleRelativePath", "Actors/Controller/PKGMPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APKGMPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APKGMPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APKGMPlayerController_Statics::ClassParams = {
		&APKGMPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APKGMPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_APKGMPlayerController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APKGMPlayerController()
	{
		if (!Z_Registration_Info_UClass_APKGMPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APKGMPlayerController.OuterSingleton, Z_Construct_UClass_APKGMPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APKGMPlayerController.OuterSingleton;
	}
	template<> FPSTANK_API UClass* StaticClass<APKGMPlayerController>()
	{
		return APKGMPlayerController::StaticClass();
	}
	APKGMPlayerController::APKGMPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APKGMPlayerController);
	APKGMPlayerController::~APKGMPlayerController() {}
	struct Z_CompiledInDeferFile_FID_FPSTank_Source_FPSTank_Actors_Controller_PKGMPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPSTank_Source_FPSTank_Actors_Controller_PKGMPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APKGMPlayerController, APKGMPlayerController::StaticClass, TEXT("APKGMPlayerController"), &Z_Registration_Info_UClass_APKGMPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APKGMPlayerController), 3259674583U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPSTank_Source_FPSTank_Actors_Controller_PKGMPlayerController_h_2226548708(TEXT("/Script/FPSTank"),
		Z_CompiledInDeferFile_FID_FPSTank_Source_FPSTank_Actors_Controller_PKGMPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPSTank_Source_FPSTank_Actors_Controller_PKGMPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
