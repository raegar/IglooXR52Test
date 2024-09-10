// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIgloo_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Igloo;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Igloo()
	{
		if (!Z_Registration_Info_UPackage__Script_Igloo.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Igloo",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xCDEABB77,
				0xB1278528,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Igloo.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Igloo.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Igloo(Z_Construct_UPackage__Script_Igloo, TEXT("/Script/Igloo"), Z_Registration_Info_UPackage__Script_Igloo, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCDEABB77, 0xB1278528));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
