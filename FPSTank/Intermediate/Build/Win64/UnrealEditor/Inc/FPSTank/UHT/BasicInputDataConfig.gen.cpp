// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/Input/BasicInputDataConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicInputDataConfig() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FPSTANK_API UClass* Z_Construct_UClass_UBasicInputDataConfig();
	FPSTANK_API UClass* Z_Construct_UClass_UBasicInputDataConfig_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPSTank();
// End Cross Module References
	void UBasicInputDataConfig::StaticRegisterNativesUBasicInputDataConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBasicInputDataConfig);
	UClass* Z_Construct_UClass_UBasicInputDataConfig_NoRegister()
	{
		return UBasicInputDataConfig::StaticClass();
	}
	struct Z_Construct_UClass_UBasicInputDataConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBasicInputDataConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSTank,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBasicInputDataConfig_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicInputDataConfig_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Data/Input/BasicInputDataConfig.h" },
		{ "ModuleRelativePath", "Data/Input/BasicInputDataConfig.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasicInputDataConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasicInputDataConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasicInputDataConfig_Statics::ClassParams = {
		&UBasicInputDataConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBasicInputDataConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UBasicInputDataConfig_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBasicInputDataConfig()
	{
		if (!Z_Registration_Info_UClass_UBasicInputDataConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasicInputDataConfig.OuterSingleton, Z_Construct_UClass_UBasicInputDataConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBasicInputDataConfig.OuterSingleton;
	}
	template<> FPSTANK_API UClass* StaticClass<UBasicInputDataConfig>()
	{
		return UBasicInputDataConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasicInputDataConfig);
	UBasicInputDataConfig::~UBasicInputDataConfig() {}
	struct Z_CompiledInDeferFile_FID_FPSTank_Source_FPSTank_Data_Input_BasicInputDataConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPSTank_Source_FPSTank_Data_Input_BasicInputDataConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBasicInputDataConfig, UBasicInputDataConfig::StaticClass, TEXT("UBasicInputDataConfig"), &Z_Registration_Info_UClass_UBasicInputDataConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasicInputDataConfig), 2150876115U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPSTank_Source_FPSTank_Data_Input_BasicInputDataConfig_h_1994438975(TEXT("/Script/FPSTank"),
		Z_CompiledInDeferFile_FID_FPSTank_Source_FPSTank_Data_Input_BasicInputDataConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPSTank_Source_FPSTank_Data_Input_BasicInputDataConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
