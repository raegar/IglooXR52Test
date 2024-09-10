// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpoutBPFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
class UTexture2D;
class UTextureRenderTarget2D;
enum class ESpoutSendTextureFrom : uint8;
struct FSenderStruct;
#ifdef SPOUTPLUGIN_SpoutBPFunctionLibrary_generated_h
#error "SpoutBPFunctionLibrary.generated.h already included, missing '#pragma once' in SpoutBPFunctionLibrary.h"
#endif
#define SPOUTPLUGIN_SpoutBPFunctionLibrary_generated_h

#define FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSenderStruct_Statics; \
	SPOUTPLUGIN_API static class UScriptStruct* StaticStruct();


template<> SPOUTPLUGIN_API UScriptStruct* StaticStruct<struct FSenderStruct>();

#define FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_127_SPARSE_DATA
#define FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_127_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateTextureRenderTarget2D); \
	DECLARE_FUNCTION(execGetMaxSenders); \
	DECLARE_FUNCTION(execSetMaxSenders); \
	DECLARE_FUNCTION(execSpoutInfoFrom); \
	DECLARE_FUNCTION(execSpoutInfo); \
	DECLARE_FUNCTION(execSpoutReceiverWithFallback); \
	DECLARE_FUNCTION(execSpoutReceiver); \
	DECLARE_FUNCTION(execCloseSender); \
	DECLARE_FUNCTION(execSpoutSender);


#define FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_127_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateTextureRenderTarget2D); \
	DECLARE_FUNCTION(execGetMaxSenders); \
	DECLARE_FUNCTION(execSetMaxSenders); \
	DECLARE_FUNCTION(execSpoutInfoFrom); \
	DECLARE_FUNCTION(execSpoutInfo); \
	DECLARE_FUNCTION(execSpoutReceiverWithFallback); \
	DECLARE_FUNCTION(execSpoutReceiver); \
	DECLARE_FUNCTION(execCloseSender); \
	DECLARE_FUNCTION(execSpoutSender);


#define FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_127_ACCESSORS
#define FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_127_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpoutBPFunctionLibrary(); \
	friend struct Z_Construct_UClass_USpoutBPFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USpoutBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpoutPlugin"), NO_API) \
	DECLARE_SERIALIZER(USpoutBPFunctionLibrary)


#define FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_127_INCLASS \
private: \
	static void StaticRegisterNativesUSpoutBPFunctionLibrary(); \
	friend struct Z_Construct_UClass_USpoutBPFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USpoutBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpoutPlugin"), NO_API) \
	DECLARE_SERIALIZER(USpoutBPFunctionLibrary)


#define FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_127_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpoutBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpoutBPFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpoutBPFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpoutBPFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpoutBPFunctionLibrary(USpoutBPFunctionLibrary&&); \
	NO_API USpoutBPFunctionLibrary(const USpoutBPFunctionLibrary&); \
public: \
	NO_API virtual ~USpoutBPFunctionLibrary();


#define FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_127_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpoutBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpoutBPFunctionLibrary(USpoutBPFunctionLibrary&&); \
	NO_API USpoutBPFunctionLibrary(const USpoutBPFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpoutBPFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpoutBPFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpoutBPFunctionLibrary) \
	NO_API virtual ~USpoutBPFunctionLibrary();


#define FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_124_PROLOG
#define FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_127_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_127_SPARSE_DATA \
	FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_127_RPC_WRAPPERS \
	FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_127_ACCESSORS \
	FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_127_INCLASS \
	FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_127_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_127_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_127_SPARSE_DATA \
	FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_127_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_127_ACCESSORS \
	FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_127_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h_127_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPOUTPLUGIN_API UClass* StaticClass<class USpoutBPFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_IglooUnrealToolkit_Source_SpoutPlugin_Public_SpoutBPFunctionLibrary_h


#define FOREACH_ENUM_ESPOUTTYPE(op) \
	op(ESpoutType::Sender) \
	op(ESpoutType::Receiver) 

enum class ESpoutType : uint8;
template<> struct TIsUEnumClass<ESpoutType> { enum { Value = true }; };
template<> SPOUTPLUGIN_API UEnum* StaticEnum<ESpoutType>();

#define FOREACH_ENUM_ESPOUTSTATE(op) \
	op(ESpoutState::ER) \
	op(ESpoutState::EnoR) \
	op(ESpoutState::noER) \
	op(ESpoutState::noEnoR) 

enum class ESpoutState : uint8;
template<> struct TIsUEnumClass<ESpoutState> { enum { Value = true }; };
template<> SPOUTPLUGIN_API UEnum* StaticEnum<ESpoutState>();

#define FOREACH_ENUM_ESPOUTSENDTEXTUREFROM(op) \
	op(ESpoutSendTextureFrom::GameViewport) \
	op(ESpoutSendTextureFrom::TextureRenderTarget2D) 

enum class ESpoutSendTextureFrom : uint8;
template<> struct TIsUEnumClass<ESpoutSendTextureFrom> { enum { Value = true }; };
template<> SPOUTPLUGIN_API UEnum* StaticEnum<ESpoutSendTextureFrom>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
