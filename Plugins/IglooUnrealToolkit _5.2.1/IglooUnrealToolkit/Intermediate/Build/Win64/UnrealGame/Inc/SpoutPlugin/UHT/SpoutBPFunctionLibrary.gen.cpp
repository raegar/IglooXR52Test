// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpoutBPFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpoutBPFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	SPOUTPLUGIN_API UClass* Z_Construct_UClass_USpoutBPFunctionLibrary();
	SPOUTPLUGIN_API UClass* Z_Construct_UClass_USpoutBPFunctionLibrary_NoRegister();
	SPOUTPLUGIN_API UEnum* Z_Construct_UEnum_SpoutPlugin_ESpoutSendTextureFrom();
	SPOUTPLUGIN_API UEnum* Z_Construct_UEnum_SpoutPlugin_ESpoutState();
	SPOUTPLUGIN_API UEnum* Z_Construct_UEnum_SpoutPlugin_ESpoutType();
	SPOUTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSenderStruct();
	UPackage* Z_Construct_UPackage__Script_SpoutPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpoutType;
	static UEnum* ESpoutType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESpoutType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESpoutType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SpoutPlugin_ESpoutType, (UObject*)Z_Construct_UPackage__Script_SpoutPlugin(), TEXT("ESpoutType"));
		}
		return Z_Registration_Info_UEnum_ESpoutType.OuterSingleton;
	}
	template<> SPOUTPLUGIN_API UEnum* StaticEnum<ESpoutType>()
	{
		return ESpoutType_StaticEnum();
	}
	struct Z_Construct_UEnum_SpoutPlugin_ESpoutType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SpoutPlugin_ESpoutType_Statics::Enumerators[] = {
		{ "ESpoutType::Sender", (int64)ESpoutType::Sender },
		{ "ESpoutType::Receiver", (int64)ESpoutType::Receiver },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SpoutPlugin_ESpoutType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SpoutBPFunctionLibrary.h" },
		{ "Receiver.Name", "ESpoutType::Receiver" },
		{ "Sender.Name", "ESpoutType::Sender" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SpoutPlugin_ESpoutType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SpoutPlugin,
		nullptr,
		"ESpoutType",
		"ESpoutType",
		Z_Construct_UEnum_SpoutPlugin_ESpoutType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SpoutPlugin_ESpoutType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SpoutPlugin_ESpoutType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SpoutPlugin_ESpoutType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SpoutPlugin_ESpoutType()
	{
		if (!Z_Registration_Info_UEnum_ESpoutType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpoutType.InnerSingleton, Z_Construct_UEnum_SpoutPlugin_ESpoutType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESpoutType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpoutState;
	static UEnum* ESpoutState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESpoutState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESpoutState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SpoutPlugin_ESpoutState, (UObject*)Z_Construct_UPackage__Script_SpoutPlugin(), TEXT("ESpoutState"));
		}
		return Z_Registration_Info_UEnum_ESpoutState.OuterSingleton;
	}
	template<> SPOUTPLUGIN_API UEnum* StaticEnum<ESpoutState>()
	{
		return ESpoutState_StaticEnum();
	}
	struct Z_Construct_UEnum_SpoutPlugin_ESpoutState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SpoutPlugin_ESpoutState_Statics::Enumerators[] = {
		{ "ESpoutState::ER", (int64)ESpoutState::ER },
		{ "ESpoutState::EnoR", (int64)ESpoutState::EnoR },
		{ "ESpoutState::noER", (int64)ESpoutState::noER },
		{ "ESpoutState::noEnoR", (int64)ESpoutState::noEnoR },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SpoutPlugin_ESpoutState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EnoR.Name", "ESpoutState::EnoR" },
		{ "ER.Name", "ESpoutState::ER" },
		{ "ModuleRelativePath", "Public/SpoutBPFunctionLibrary.h" },
		{ "noEnoR.Name", "ESpoutState::noEnoR" },
		{ "noER.Name", "ESpoutState::noER" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SpoutPlugin_ESpoutState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SpoutPlugin,
		nullptr,
		"ESpoutState",
		"ESpoutState",
		Z_Construct_UEnum_SpoutPlugin_ESpoutState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SpoutPlugin_ESpoutState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SpoutPlugin_ESpoutState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SpoutPlugin_ESpoutState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SpoutPlugin_ESpoutState()
	{
		if (!Z_Registration_Info_UEnum_ESpoutState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpoutState.InnerSingleton, Z_Construct_UEnum_SpoutPlugin_ESpoutState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESpoutState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpoutSendTextureFrom;
	static UEnum* ESpoutSendTextureFrom_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESpoutSendTextureFrom.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESpoutSendTextureFrom.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SpoutPlugin_ESpoutSendTextureFrom, (UObject*)Z_Construct_UPackage__Script_SpoutPlugin(), TEXT("ESpoutSendTextureFrom"));
		}
		return Z_Registration_Info_UEnum_ESpoutSendTextureFrom.OuterSingleton;
	}
	template<> SPOUTPLUGIN_API UEnum* StaticEnum<ESpoutSendTextureFrom>()
	{
		return ESpoutSendTextureFrom_StaticEnum();
	}
	struct Z_Construct_UEnum_SpoutPlugin_ESpoutSendTextureFrom_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SpoutPlugin_ESpoutSendTextureFrom_Statics::Enumerators[] = {
		{ "ESpoutSendTextureFrom::GameViewport", (int64)ESpoutSendTextureFrom::GameViewport },
		{ "ESpoutSendTextureFrom::TextureRenderTarget2D", (int64)ESpoutSendTextureFrom::TextureRenderTarget2D },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SpoutPlugin_ESpoutSendTextureFrom_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "GameViewport.Name", "ESpoutSendTextureFrom::GameViewport" },
		{ "ModuleRelativePath", "Public/SpoutBPFunctionLibrary.h" },
		{ "TextureRenderTarget2D.Name", "ESpoutSendTextureFrom::TextureRenderTarget2D" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SpoutPlugin_ESpoutSendTextureFrom_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SpoutPlugin,
		nullptr,
		"ESpoutSendTextureFrom",
		"ESpoutSendTextureFrom",
		Z_Construct_UEnum_SpoutPlugin_ESpoutSendTextureFrom_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SpoutPlugin_ESpoutSendTextureFrom_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SpoutPlugin_ESpoutSendTextureFrom_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SpoutPlugin_ESpoutSendTextureFrom_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SpoutPlugin_ESpoutSendTextureFrom()
	{
		if (!Z_Registration_Info_UEnum_ESpoutSendTextureFrom.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpoutSendTextureFrom.InnerSingleton, Z_Construct_UEnum_SpoutPlugin_ESpoutSendTextureFrom_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESpoutSendTextureFrom.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SenderStruct;
class UScriptStruct* FSenderStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SenderStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SenderStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSenderStruct, (UObject*)Z_Construct_UPackage__Script_SpoutPlugin(), TEXT("SenderStruct"));
	}
	return Z_Registration_Info_UScriptStruct_SenderStruct.OuterSingleton;
}
template<> SPOUTPLUGIN_API UScriptStruct* StaticStruct<FSenderStruct>()
{
	return FSenderStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSenderStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_sName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAlive_MetaData[];
#endif
		static void NewProp_bIsAlive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAlive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_w_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_w;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_h_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_h;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SenderID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SenderID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureColor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstanceColor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstanceColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSenderStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SpoutBPFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSenderStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSenderStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_sName_MetaData[] = {
		{ "Category", "Spout Struct" },
		{ "ModuleRelativePath", "Public/SpoutBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_sName = { "sName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSenderStruct, sName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_sName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_sName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_bIsAlive_MetaData[] = {
		{ "Category", "Spout Struct" },
		{ "ModuleRelativePath", "Public/SpoutBPFunctionLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_bIsAlive_SetBit(void* Obj)
	{
		((FSenderStruct*)Obj)->bIsAlive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_bIsAlive = { "bIsAlive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSenderStruct), &Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_bIsAlive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_bIsAlive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_bIsAlive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_w_MetaData[] = {
		{ "Category", "Spout Struct" },
		{ "ModuleRelativePath", "Public/SpoutBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_w = { "w", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSenderStruct, w), METADATA_PARAMS(Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_w_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_w_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_h_MetaData[] = {
		{ "Category", "Spout Struct" },
		{ "ModuleRelativePath", "Public/SpoutBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_h = { "h", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSenderStruct, h), METADATA_PARAMS(Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_h_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_h_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_SenderID_MetaData[] = {
		{ "Category", "Spout Struct" },
		{ "ModuleRelativePath", "Public/SpoutBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_SenderID = { "SenderID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSenderStruct, SenderID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_SenderID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_SenderID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_TextureColor_MetaData[] = {
		{ "Category", "Spout Struct" },
		{ "ModuleRelativePath", "Public/SpoutBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_TextureColor = { "TextureColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSenderStruct, TextureColor), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_TextureColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_TextureColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_MaterialInstanceColor_MetaData[] = {
		{ "Category", "Spout Struct" },
		{ "ModuleRelativePath", "Public/SpoutBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_MaterialInstanceColor = { "MaterialInstanceColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSenderStruct, MaterialInstanceColor), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_MaterialInstanceColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_MaterialInstanceColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSenderStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_sName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_bIsAlive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_w,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_h,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_SenderID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_TextureColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSenderStruct_Statics::NewProp_MaterialInstanceColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSenderStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SpoutPlugin,
		nullptr,
		&NewStructOps,
		"SenderStruct",
		sizeof(FSenderStruct),
		alignof(FSenderStruct),
		Z_Construct_UScriptStruct_FSenderStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSenderStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSenderStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSenderStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSenderStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_SenderStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SenderStruct.InnerSingleton, Z_Construct_UScriptStruct_FSenderStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SenderStruct.InnerSingleton;
	}
	DEFINE_FUNCTION(USpoutBPFunctionLibrary::execCreateTextureRenderTarget2D)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_w);
		P_GET_PROPERTY(FIntProperty,Z_Param_h);
		P_GET_PROPERTY(FByteProperty,Z_Param_pixelFormat);
		P_GET_UBOOL(Z_Param_forceLinearGamma);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=USpoutBPFunctionLibrary::CreateTextureRenderTarget2D(Z_Param_w,Z_Param_h,EPixelFormat(Z_Param_pixelFormat),Z_Param_forceLinearGamma);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpoutBPFunctionLibrary::execGetMaxSenders)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_max);
		P_FINISH;
		P_NATIVE_BEGIN;
		USpoutBPFunctionLibrary::GetMaxSenders(Z_Param_Out_max);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpoutBPFunctionLibrary::execSetMaxSenders)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_max);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USpoutBPFunctionLibrary::SetMaxSenders(Z_Param_max);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpoutBPFunctionLibrary::execSpoutInfoFrom)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_spoutName);
		P_GET_STRUCT_REF(FSenderStruct,Z_Param_Out_SenderStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USpoutBPFunctionLibrary::SpoutInfoFrom(Z_Param_spoutName,Z_Param_Out_SenderStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpoutBPFunctionLibrary::execSpoutInfo)
	{
		P_GET_TARRAY_REF(FSenderStruct,Z_Param_Out_Senders);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USpoutBPFunctionLibrary::SpoutInfo(Z_Param_Out_Senders);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpoutBPFunctionLibrary::execSpoutReceiverWithFallback)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_spoutName);
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_fallbackMat);
		P_GET_OBJECT(UTexture2D,Z_Param_fallbackTexture);
		P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_mat);
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USpoutBPFunctionLibrary::SpoutReceiverWithFallback(Z_Param_spoutName,Z_Param_fallbackMat,Z_Param_fallbackTexture,Z_Param_Out_mat,Z_Param_Out_texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpoutBPFunctionLibrary::execSpoutReceiver)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_spoutName);
		P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_mat);
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USpoutBPFunctionLibrary::SpoutReceiver(Z_Param_spoutName,Z_Param_Out_mat,Z_Param_Out_texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpoutBPFunctionLibrary::execCloseSender)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_spoutName);
		P_FINISH;
		P_NATIVE_BEGIN;
		USpoutBPFunctionLibrary::CloseSender(Z_Param_spoutName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpoutBPFunctionLibrary::execSpoutSender)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_spoutName);
		P_GET_ENUM(ESpoutSendTextureFrom,Z_Param_sendTextureFrom);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_textureRenderTarget2D);
		P_GET_PROPERTY(FFloatProperty,Z_Param_targetGamma);
		P_GET_UBOOL(Z_Param_discardWarningMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USpoutBPFunctionLibrary::SpoutSender(Z_Param_spoutName,ESpoutSendTextureFrom(Z_Param_sendTextureFrom),Z_Param_textureRenderTarget2D,Z_Param_targetGamma,Z_Param_discardWarningMessage);
		P_NATIVE_END;
	}
	void USpoutBPFunctionLibrary::StaticRegisterNativesUSpoutBPFunctionLibrary()
	{
		UClass* Class = USpoutBPFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseSender", &USpoutBPFunctionLibrary::execCloseSender },
			{ "CreateTextureRenderTarget2D", &USpoutBPFunctionLibrary::execCreateTextureRenderTarget2D },
			{ "GetMaxSenders", &USpoutBPFunctionLibrary::execGetMaxSenders },
			{ "SetMaxSenders", &USpoutBPFunctionLibrary::execSetMaxSenders },
			{ "SpoutInfo", &USpoutBPFunctionLibrary::execSpoutInfo },
			{ "SpoutInfoFrom", &USpoutBPFunctionLibrary::execSpoutInfoFrom },
			{ "SpoutReceiver", &USpoutBPFunctionLibrary::execSpoutReceiver },
			{ "SpoutReceiverWithFallback", &USpoutBPFunctionLibrary::execSpoutReceiverWithFallback },
			{ "SpoutSender", &USpoutBPFunctionLibrary::execSpoutSender },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpoutBPFunctionLibrary_CloseSender_Statics
	{
		struct SpoutBPFunctionLibrary_eventCloseSender_Parms
		{
			FName spoutName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_spoutName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_CloseSender_Statics::NewProp_spoutName = { "spoutName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpoutBPFunctionLibrary_eventCloseSender_Parms, spoutName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpoutBPFunctionLibrary_CloseSender_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_CloseSender_Statics::NewProp_spoutName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpoutBPFunctionLibrary_CloseSender_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spout" },
		{ "ModuleRelativePath", "Public/SpoutBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpoutBPFunctionLibrary_CloseSender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpoutBPFunctionLibrary, nullptr, "CloseSender", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpoutBPFunctionLibrary_CloseSender_Statics::SpoutBPFunctionLibrary_eventCloseSender_Parms), Z_Construct_UFunction_USpoutBPFunctionLibrary_CloseSender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutBPFunctionLibrary_CloseSender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpoutBPFunctionLibrary_CloseSender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutBPFunctionLibrary_CloseSender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpoutBPFunctionLibrary_CloseSender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpoutBPFunctionLibrary_CloseSender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpoutBPFunctionLibrary_CreateTextureRenderTarget2D_Statics
	{
		struct SpoutBPFunctionLibrary_eventCreateTextureRenderTarget2D_Parms
		{
			int32 w;
			int32 h;
			TEnumAsByte<EPixelFormat> pixelFormat;
			bool forceLinearGamma;
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_w;
		static const UECodeGen_Private::FIntPropertyParams NewProp_h;
		static const UECodeGen_Private::FBytePropertyParams NewProp_pixelFormat;
		static void NewProp_forceLinearGamma_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_forceLinearGamma;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_CreateTextureRenderTarget2D_Statics::NewProp_w = { "w", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpoutBPFunctionLibrary_eventCreateTextureRenderTarget2D_Parms, w), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_CreateTextureRenderTarget2D_Statics::NewProp_h = { "h", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpoutBPFunctionLibrary_eventCreateTextureRenderTarget2D_Parms, h), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_CreateTextureRenderTarget2D_Statics::NewProp_pixelFormat = { "pixelFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpoutBPFunctionLibrary_eventCreateTextureRenderTarget2D_Parms, pixelFormat), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(nullptr, 0) }; // 2651536151
	void Z_Construct_UFunction_USpoutBPFunctionLibrary_CreateTextureRenderTarget2D_Statics::NewProp_forceLinearGamma_SetBit(void* Obj)
	{
		((SpoutBPFunctionLibrary_eventCreateTextureRenderTarget2D_Parms*)Obj)->forceLinearGamma = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_CreateTextureRenderTarget2D_Statics::NewProp_forceLinearGamma = { "forceLinearGamma", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SpoutBPFunctionLibrary_eventCreateTextureRenderTarget2D_Parms), &Z_Construct_UFunction_USpoutBPFunctionLibrary_CreateTextureRenderTarget2D_Statics::NewProp_forceLinearGamma_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_CreateTextureRenderTarget2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpoutBPFunctionLibrary_eventCreateTextureRenderTarget2D_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpoutBPFunctionLibrary_CreateTextureRenderTarget2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_CreateTextureRenderTarget2D_Statics::NewProp_w,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_CreateTextureRenderTarget2D_Statics::NewProp_h,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_CreateTextureRenderTarget2D_Statics::NewProp_pixelFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_CreateTextureRenderTarget2D_Statics::NewProp_forceLinearGamma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_CreateTextureRenderTarget2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpoutBPFunctionLibrary_CreateTextureRenderTarget2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spout" },
		{ "CPP_Default_forceLinearGamma", "true" },
		{ "CPP_Default_h", "768" },
		{ "CPP_Default_pixelFormat", "PF_B8G8R8A8" },
		{ "CPP_Default_w", "1024" },
		{ "ModuleRelativePath", "Public/SpoutBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpoutBPFunctionLibrary_CreateTextureRenderTarget2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpoutBPFunctionLibrary, nullptr, "CreateTextureRenderTarget2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpoutBPFunctionLibrary_CreateTextureRenderTarget2D_Statics::SpoutBPFunctionLibrary_eventCreateTextureRenderTarget2D_Parms), Z_Construct_UFunction_USpoutBPFunctionLibrary_CreateTextureRenderTarget2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutBPFunctionLibrary_CreateTextureRenderTarget2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpoutBPFunctionLibrary_CreateTextureRenderTarget2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutBPFunctionLibrary_CreateTextureRenderTarget2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpoutBPFunctionLibrary_CreateTextureRenderTarget2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpoutBPFunctionLibrary_CreateTextureRenderTarget2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpoutBPFunctionLibrary_GetMaxSenders_Statics
	{
		struct SpoutBPFunctionLibrary_eventGetMaxSenders_Parms
		{
			int32 max;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_max;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_GetMaxSenders_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpoutBPFunctionLibrary_eventGetMaxSenders_Parms, max), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpoutBPFunctionLibrary_GetMaxSenders_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_GetMaxSenders_Statics::NewProp_max,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpoutBPFunctionLibrary_GetMaxSenders_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spout" },
		{ "ModuleRelativePath", "Public/SpoutBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpoutBPFunctionLibrary_GetMaxSenders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpoutBPFunctionLibrary, nullptr, "GetMaxSenders", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpoutBPFunctionLibrary_GetMaxSenders_Statics::SpoutBPFunctionLibrary_eventGetMaxSenders_Parms), Z_Construct_UFunction_USpoutBPFunctionLibrary_GetMaxSenders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutBPFunctionLibrary_GetMaxSenders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpoutBPFunctionLibrary_GetMaxSenders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutBPFunctionLibrary_GetMaxSenders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpoutBPFunctionLibrary_GetMaxSenders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpoutBPFunctionLibrary_GetMaxSenders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpoutBPFunctionLibrary_SetMaxSenders_Statics
	{
		struct SpoutBPFunctionLibrary_eventSetMaxSenders_Parms
		{
			int32 max;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_max;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SetMaxSenders_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpoutBPFunctionLibrary_eventSetMaxSenders_Parms, max), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SetMaxSenders_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpoutBPFunctionLibrary_eventSetMaxSenders_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpoutBPFunctionLibrary_SetMaxSenders_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_SetMaxSenders_Statics::NewProp_max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_SetMaxSenders_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpoutBPFunctionLibrary_SetMaxSenders_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spout" },
		{ "ModuleRelativePath", "Public/SpoutBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SetMaxSenders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpoutBPFunctionLibrary, nullptr, "SetMaxSenders", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpoutBPFunctionLibrary_SetMaxSenders_Statics::SpoutBPFunctionLibrary_eventSetMaxSenders_Parms), Z_Construct_UFunction_USpoutBPFunctionLibrary_SetMaxSenders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutBPFunctionLibrary_SetMaxSenders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpoutBPFunctionLibrary_SetMaxSenders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutBPFunctionLibrary_SetMaxSenders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpoutBPFunctionLibrary_SetMaxSenders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpoutBPFunctionLibrary_SetMaxSenders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfo_Statics
	{
		struct SpoutBPFunctionLibrary_eventSpoutInfo_Parms
		{
			TArray<FSenderStruct> Senders;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Senders_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Senders;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfo_Statics::NewProp_Senders_Inner = { "Senders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSenderStruct, METADATA_PARAMS(nullptr, 0) }; // 632740216
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfo_Statics::NewProp_Senders = { "Senders", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpoutBPFunctionLibrary_eventSpoutInfo_Parms, Senders), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 632740216
	void Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpoutBPFunctionLibrary_eventSpoutInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SpoutBPFunctionLibrary_eventSpoutInfo_Parms), &Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfo_Statics::NewProp_Senders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfo_Statics::NewProp_Senders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spout" },
		{ "ModuleRelativePath", "Public/SpoutBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpoutBPFunctionLibrary, nullptr, "SpoutInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfo_Statics::SpoutBPFunctionLibrary_eventSpoutInfo_Parms), Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfoFrom_Statics
	{
		struct SpoutBPFunctionLibrary_eventSpoutInfoFrom_Parms
		{
			FName spoutName;
			FSenderStruct SenderStruct;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_spoutName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SenderStruct;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfoFrom_Statics::NewProp_spoutName = { "spoutName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpoutBPFunctionLibrary_eventSpoutInfoFrom_Parms, spoutName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfoFrom_Statics::NewProp_SenderStruct = { "SenderStruct", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpoutBPFunctionLibrary_eventSpoutInfoFrom_Parms, SenderStruct), Z_Construct_UScriptStruct_FSenderStruct, METADATA_PARAMS(nullptr, 0) }; // 632740216
	void Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfoFrom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpoutBPFunctionLibrary_eventSpoutInfoFrom_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfoFrom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SpoutBPFunctionLibrary_eventSpoutInfoFrom_Parms), &Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfoFrom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfoFrom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfoFrom_Statics::NewProp_spoutName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfoFrom_Statics::NewProp_SenderStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfoFrom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfoFrom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spout" },
		{ "ModuleRelativePath", "Public/SpoutBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfoFrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpoutBPFunctionLibrary, nullptr, "SpoutInfoFrom", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfoFrom_Statics::SpoutBPFunctionLibrary_eventSpoutInfoFrom_Parms), Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfoFrom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfoFrom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfoFrom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfoFrom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfoFrom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfoFrom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiver_Statics
	{
		struct SpoutBPFunctionLibrary_eventSpoutReceiver_Parms
		{
			FName spoutName;
			UMaterialInstanceDynamic* mat;
			UTexture2D* texture;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spoutName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_spoutName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mat;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiver_Statics::NewProp_spoutName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiver_Statics::NewProp_spoutName = { "spoutName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpoutBPFunctionLibrary_eventSpoutReceiver_Parms, spoutName), METADATA_PARAMS(Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiver_Statics::NewProp_spoutName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiver_Statics::NewProp_spoutName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiver_Statics::NewProp_mat = { "mat", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpoutBPFunctionLibrary_eventSpoutReceiver_Parms, mat), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiver_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpoutBPFunctionLibrary_eventSpoutReceiver_Parms, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpoutBPFunctionLibrary_eventSpoutReceiver_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SpoutBPFunctionLibrary_eventSpoutReceiver_Parms), &Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiver_Statics::NewProp_spoutName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiver_Statics::NewProp_mat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiver_Statics::NewProp_texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spout" },
		{ "ModuleRelativePath", "Public/SpoutBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpoutBPFunctionLibrary, nullptr, "SpoutReceiver", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiver_Statics::SpoutBPFunctionLibrary_eventSpoutReceiver_Parms), Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiverWithFallback_Statics
	{
		struct SpoutBPFunctionLibrary_eventSpoutReceiverWithFallback_Parms
		{
			FName spoutName;
			UMaterialInstanceDynamic* fallbackMat;
			UTexture2D* fallbackTexture;
			UMaterialInstanceDynamic* mat;
			UTexture2D* texture;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spoutName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_spoutName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_fallbackMat;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_fallbackTexture;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mat;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiverWithFallback_Statics::NewProp_spoutName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiverWithFallback_Statics::NewProp_spoutName = { "spoutName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpoutBPFunctionLibrary_eventSpoutReceiverWithFallback_Parms, spoutName), METADATA_PARAMS(Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiverWithFallback_Statics::NewProp_spoutName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiverWithFallback_Statics::NewProp_spoutName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiverWithFallback_Statics::NewProp_fallbackMat = { "fallbackMat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpoutBPFunctionLibrary_eventSpoutReceiverWithFallback_Parms, fallbackMat), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiverWithFallback_Statics::NewProp_fallbackTexture = { "fallbackTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpoutBPFunctionLibrary_eventSpoutReceiverWithFallback_Parms, fallbackTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiverWithFallback_Statics::NewProp_mat = { "mat", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpoutBPFunctionLibrary_eventSpoutReceiverWithFallback_Parms, mat), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiverWithFallback_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpoutBPFunctionLibrary_eventSpoutReceiverWithFallback_Parms, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiverWithFallback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpoutBPFunctionLibrary_eventSpoutReceiverWithFallback_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiverWithFallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SpoutBPFunctionLibrary_eventSpoutReceiverWithFallback_Parms), &Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiverWithFallback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiverWithFallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiverWithFallback_Statics::NewProp_spoutName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiverWithFallback_Statics::NewProp_fallbackMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiverWithFallback_Statics::NewProp_fallbackTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiverWithFallback_Statics::NewProp_mat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiverWithFallback_Statics::NewProp_texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiverWithFallback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiverWithFallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spout" },
		{ "ModuleRelativePath", "Public/SpoutBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiverWithFallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpoutBPFunctionLibrary, nullptr, "SpoutReceiverWithFallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiverWithFallback_Statics::SpoutBPFunctionLibrary_eventSpoutReceiverWithFallback_Parms), Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiverWithFallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiverWithFallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiverWithFallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiverWithFallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiverWithFallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiverWithFallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutSender_Statics
	{
		struct SpoutBPFunctionLibrary_eventSpoutSender_Parms
		{
			FName spoutName;
			ESpoutSendTextureFrom sendTextureFrom;
			UTextureRenderTarget2D* textureRenderTarget2D;
			float targetGamma;
			bool discardWarningMessage;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_spoutName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_sendTextureFrom_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_sendTextureFrom;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_textureRenderTarget2D;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_targetGamma;
		static void NewProp_discardWarningMessage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_discardWarningMessage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutSender_Statics::NewProp_spoutName = { "spoutName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpoutBPFunctionLibrary_eventSpoutSender_Parms, spoutName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutSender_Statics::NewProp_sendTextureFrom_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutSender_Statics::NewProp_sendTextureFrom = { "sendTextureFrom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpoutBPFunctionLibrary_eventSpoutSender_Parms, sendTextureFrom), Z_Construct_UEnum_SpoutPlugin_ESpoutSendTextureFrom, METADATA_PARAMS(nullptr, 0) }; // 2335022004
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutSender_Statics::NewProp_textureRenderTarget2D = { "textureRenderTarget2D", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpoutBPFunctionLibrary_eventSpoutSender_Parms, textureRenderTarget2D), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutSender_Statics::NewProp_targetGamma = { "targetGamma", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpoutBPFunctionLibrary_eventSpoutSender_Parms, targetGamma), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutSender_Statics::NewProp_discardWarningMessage_SetBit(void* Obj)
	{
		((SpoutBPFunctionLibrary_eventSpoutSender_Parms*)Obj)->discardWarningMessage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutSender_Statics::NewProp_discardWarningMessage = { "discardWarningMessage", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SpoutBPFunctionLibrary_eventSpoutSender_Parms), &Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutSender_Statics::NewProp_discardWarningMessage_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutSender_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpoutBPFunctionLibrary_eventSpoutSender_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutSender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SpoutBPFunctionLibrary_eventSpoutSender_Parms), &Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutSender_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutSender_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutSender_Statics::NewProp_spoutName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutSender_Statics::NewProp_sendTextureFrom_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutSender_Statics::NewProp_sendTextureFrom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutSender_Statics::NewProp_textureRenderTarget2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutSender_Statics::NewProp_targetGamma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutSender_Statics::NewProp_discardWarningMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutSender_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutSender_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Spout" },
		{ "CPP_Default_discardWarningMessage", "false" },
		{ "CPP_Default_targetGamma", "2.200000" },
		{ "ModuleRelativePath", "Public/SpoutBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutSender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpoutBPFunctionLibrary, nullptr, "SpoutSender", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutSender_Statics::SpoutBPFunctionLibrary_eventSpoutSender_Parms), Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutSender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutSender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutSender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutSender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutSender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutSender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpoutBPFunctionLibrary);
	UClass* Z_Construct_UClass_USpoutBPFunctionLibrary_NoRegister()
	{
		return USpoutBPFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USpoutBPFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpoutBPFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SpoutPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpoutBPFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpoutBPFunctionLibrary_CloseSender, "CloseSender" }, // 3388181078
		{ &Z_Construct_UFunction_USpoutBPFunctionLibrary_CreateTextureRenderTarget2D, "CreateTextureRenderTarget2D" }, // 2043943886
		{ &Z_Construct_UFunction_USpoutBPFunctionLibrary_GetMaxSenders, "GetMaxSenders" }, // 4087418781
		{ &Z_Construct_UFunction_USpoutBPFunctionLibrary_SetMaxSenders, "SetMaxSenders" }, // 4118476584
		{ &Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfo, "SpoutInfo" }, // 3996132527
		{ &Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutInfoFrom, "SpoutInfoFrom" }, // 1774000551
		{ &Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiver, "SpoutReceiver" }, // 852405816
		{ &Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutReceiverWithFallback, "SpoutReceiverWithFallback" }, // 988042735
		{ &Z_Construct_UFunction_USpoutBPFunctionLibrary_SpoutSender, "SpoutSender" }, // 92774947
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpoutBPFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Spout" },
		{ "IncludePath", "SpoutBPFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SpoutBPFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpoutBPFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpoutBPFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpoutBPFunctionLibrary_Statics::ClassParams = {
		&USpoutBPFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USpoutBPFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpoutBPFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpoutBPFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_USpoutBPFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpoutBPFunctionLibrary.OuterSingleton, Z_Construct_UClass_USpoutBPFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpoutBPFunctionLibrary.OuterSingleton;
	}
	template<> SPOUTPLUGIN_API UClass* StaticClass<USpoutBPFunctionLibrary>()
	{
		return USpoutBPFunctionLibrary::StaticClass();
	}
	USpoutBPFunctionLibrary::USpoutBPFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpoutBPFunctionLibrary);
	USpoutBPFunctionLibrary::~USpoutBPFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_Statics::EnumInfo[] = {
		{ ESpoutType_StaticEnum, TEXT("ESpoutType"), &Z_Registration_Info_UEnum_ESpoutType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1521195344U) },
		{ ESpoutState_StaticEnum, TEXT("ESpoutState"), &Z_Registration_Info_UEnum_ESpoutState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2627768794U) },
		{ ESpoutSendTextureFrom_StaticEnum, TEXT("ESpoutSendTextureFrom"), &Z_Registration_Info_UEnum_ESpoutSendTextureFrom, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2335022004U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_Statics::ScriptStructInfo[] = {
		{ FSenderStruct::StaticStruct, Z_Construct_UScriptStruct_FSenderStruct_Statics::NewStructOps, TEXT("SenderStruct"), &Z_Registration_Info_UScriptStruct_SenderStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSenderStruct), 632740216U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpoutBPFunctionLibrary, USpoutBPFunctionLibrary::StaticClass, TEXT("USpoutBPFunctionLibrary"), &Z_Registration_Info_UClass_USpoutBPFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpoutBPFunctionLibrary), 477201609U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_1670340005(TEXT("/Script/SpoutPlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
