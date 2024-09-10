// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Igloo/Public/IglooBlueprintFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIglooBlueprintFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetFormat();
	IGLOO_API UClass* Z_Construct_UClass_UIglooBlueprintFunctionLibrary();
	IGLOO_API UClass* Z_Construct_UClass_UIglooBlueprintFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Igloo();
// End Cross Module References
	DEFINE_FUNCTION(UIglooBlueprintFunctionLibrary::execRequestCanvasUpdate)
	{
		P_GET_OBJECT(UCanvasRenderTarget2D,Z_Param_CanvasRenderTarget2D);
		P_FINISH;
		P_NATIVE_BEGIN;
		UIglooBlueprintFunctionLibrary::RequestCanvasUpdate(Z_Param_CanvasRenderTarget2D);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIglooBlueprintFunctionLibrary::execCreateCanvasRenderTarget2DWithFormat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_CanvasRenderTarget2DClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_GET_PROPERTY(FByteProperty,Z_Param_Format);
		P_GET_UBOOL(Z_Param_bNeedsTwoCopies);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCanvasRenderTarget2D**)Z_Param__Result=UIglooBlueprintFunctionLibrary::CreateCanvasRenderTarget2DWithFormat(Z_Param_WorldContextObject,Z_Param_CanvasRenderTarget2DClass,Z_Param_Width,Z_Param_Height,ETextureRenderTargetFormat(Z_Param_Format),Z_Param_bNeedsTwoCopies);
		P_NATIVE_END;
	}
	void UIglooBlueprintFunctionLibrary::StaticRegisterNativesUIglooBlueprintFunctionLibrary()
	{
		UClass* Class = UIglooBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateCanvasRenderTarget2DWithFormat", &UIglooBlueprintFunctionLibrary::execCreateCanvasRenderTarget2DWithFormat },
			{ "RequestCanvasUpdate", &UIglooBlueprintFunctionLibrary::execRequestCanvasUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_CreateCanvasRenderTarget2DWithFormat_Statics
	{
		struct IglooBlueprintFunctionLibrary_eventCreateCanvasRenderTarget2DWithFormat_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<UCanvasRenderTarget2D>  CanvasRenderTarget2DClass;
			int32 Width;
			int32 Height;
			TEnumAsByte<ETextureRenderTargetFormat> Format;
			bool bNeedsTwoCopies;
			UCanvasRenderTarget2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FClassPropertyParams NewProp_CanvasRenderTarget2DClass;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Format;
		static void NewProp_bNeedsTwoCopies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsTwoCopies;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_CreateCanvasRenderTarget2DWithFormat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IglooBlueprintFunctionLibrary_eventCreateCanvasRenderTarget2DWithFormat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_CreateCanvasRenderTarget2DWithFormat_Statics::NewProp_CanvasRenderTarget2DClass = { "CanvasRenderTarget2DClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IglooBlueprintFunctionLibrary_eventCreateCanvasRenderTarget2DWithFormat_Parms, CanvasRenderTarget2DClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_CreateCanvasRenderTarget2DWithFormat_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IglooBlueprintFunctionLibrary_eventCreateCanvasRenderTarget2DWithFormat_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_CreateCanvasRenderTarget2DWithFormat_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IglooBlueprintFunctionLibrary_eventCreateCanvasRenderTarget2DWithFormat_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_CreateCanvasRenderTarget2DWithFormat_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IglooBlueprintFunctionLibrary_eventCreateCanvasRenderTarget2DWithFormat_Parms, Format), Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, METADATA_PARAMS(nullptr, 0) }; // 1004718673
	void Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_CreateCanvasRenderTarget2DWithFormat_Statics::NewProp_bNeedsTwoCopies_SetBit(void* Obj)
	{
		((IglooBlueprintFunctionLibrary_eventCreateCanvasRenderTarget2DWithFormat_Parms*)Obj)->bNeedsTwoCopies = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_CreateCanvasRenderTarget2DWithFormat_Statics::NewProp_bNeedsTwoCopies = { "bNeedsTwoCopies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IglooBlueprintFunctionLibrary_eventCreateCanvasRenderTarget2DWithFormat_Parms), &Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_CreateCanvasRenderTarget2DWithFormat_Statics::NewProp_bNeedsTwoCopies_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_CreateCanvasRenderTarget2DWithFormat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IglooBlueprintFunctionLibrary_eventCreateCanvasRenderTarget2DWithFormat_Parms, ReturnValue), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_CreateCanvasRenderTarget2DWithFormat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_CreateCanvasRenderTarget2DWithFormat_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_CreateCanvasRenderTarget2DWithFormat_Statics::NewProp_CanvasRenderTarget2DClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_CreateCanvasRenderTarget2DWithFormat_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_CreateCanvasRenderTarget2DWithFormat_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_CreateCanvasRenderTarget2DWithFormat_Statics::NewProp_Format,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_CreateCanvasRenderTarget2DWithFormat_Statics::NewProp_bNeedsTwoCopies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_CreateCanvasRenderTarget2DWithFormat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_CreateCanvasRenderTarget2DWithFormat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas Render Target 2D" },
		{ "CPP_Default_bNeedsTwoCopies", "true" },
		{ "CPP_Default_Format", "RTF_RGBA16f" },
		{ "CPP_Default_Height", "1024" },
		{ "CPP_Default_Width", "1024" },
		{ "ModuleRelativePath", "Public/IglooBlueprintFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_CreateCanvasRenderTarget2DWithFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIglooBlueprintFunctionLibrary, nullptr, "CreateCanvasRenderTarget2DWithFormat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_CreateCanvasRenderTarget2DWithFormat_Statics::IglooBlueprintFunctionLibrary_eventCreateCanvasRenderTarget2DWithFormat_Parms), Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_CreateCanvasRenderTarget2DWithFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_CreateCanvasRenderTarget2DWithFormat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_CreateCanvasRenderTarget2DWithFormat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_CreateCanvasRenderTarget2DWithFormat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_CreateCanvasRenderTarget2DWithFormat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_CreateCanvasRenderTarget2DWithFormat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_RequestCanvasUpdate_Statics
	{
		struct IglooBlueprintFunctionLibrary_eventRequestCanvasUpdate_Parms
		{
			UCanvasRenderTarget2D* CanvasRenderTarget2D;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CanvasRenderTarget2D;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_RequestCanvasUpdate_Statics::NewProp_CanvasRenderTarget2D = { "CanvasRenderTarget2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IglooBlueprintFunctionLibrary_eventRequestCanvasUpdate_Parms, CanvasRenderTarget2D), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_RequestCanvasUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_RequestCanvasUpdate_Statics::NewProp_CanvasRenderTarget2D,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_RequestCanvasUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas Render Target 2D" },
		{ "ModuleRelativePath", "Public/IglooBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_RequestCanvasUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIglooBlueprintFunctionLibrary, nullptr, "RequestCanvasUpdate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_RequestCanvasUpdate_Statics::IglooBlueprintFunctionLibrary_eventRequestCanvasUpdate_Parms), Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_RequestCanvasUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_RequestCanvasUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_RequestCanvasUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_RequestCanvasUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_RequestCanvasUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_RequestCanvasUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIglooBlueprintFunctionLibrary);
	UClass* Z_Construct_UClass_UIglooBlueprintFunctionLibrary_NoRegister()
	{
		return UIglooBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UIglooBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIglooBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Igloo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIglooBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_CreateCanvasRenderTarget2DWithFormat, "CreateCanvasRenderTarget2DWithFormat" }, // 1007993590
		{ &Z_Construct_UFunction_UIglooBlueprintFunctionLibrary_RequestCanvasUpdate, "RequestCanvasUpdate" }, // 4061526027
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIglooBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "IglooBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/IglooBlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIglooBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIglooBlueprintFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIglooBlueprintFunctionLibrary_Statics::ClassParams = {
		&UIglooBlueprintFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIglooBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIglooBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIglooBlueprintFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UIglooBlueprintFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIglooBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UIglooBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIglooBlueprintFunctionLibrary.OuterSingleton;
	}
	template<> IGLOO_API UClass* StaticClass<UIglooBlueprintFunctionLibrary>()
	{
		return UIglooBlueprintFunctionLibrary::StaticClass();
	}
	UIglooBlueprintFunctionLibrary::UIglooBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIglooBlueprintFunctionLibrary);
	UIglooBlueprintFunctionLibrary::~UIglooBlueprintFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_IglooUnrealToolkit_Source_Igloo_Public_IglooBlueprintFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_IglooUnrealToolkit_Source_Igloo_Public_IglooBlueprintFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIglooBlueprintFunctionLibrary, UIglooBlueprintFunctionLibrary::StaticClass, TEXT("UIglooBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UIglooBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIglooBlueprintFunctionLibrary), 2219429729U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_IglooUnrealToolkit_Source_Igloo_Public_IglooBlueprintFunctionLibrary_h_3045208498(TEXT("/Script/Igloo"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_IglooUnrealToolkit_Source_Igloo_Public_IglooBlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_IglooUnrealToolkit_Source_Igloo_Public_IglooBlueprintFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
