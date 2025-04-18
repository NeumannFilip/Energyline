// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PowerLineToolLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APowerLineActor;
class UObject;
#ifdef POWERLINE_PowerLineToolLibrary_generated_h
#error "PowerLineToolLibrary.generated.h already included, missing '#pragma once' in PowerLineToolLibrary.h"
#endif
#define POWERLINE_PowerLineToolLibrary_generated_h

#define FID_Powerline_Source_Powerline_PowerLineToolLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreatePowerLineFromSelectedActors);


#define FID_Powerline_Source_Powerline_PowerLineToolLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPowerLineToolLibrary(); \
	friend struct Z_Construct_UClass_UPowerLineToolLibrary_Statics; \
public: \
	DECLARE_CLASS(UPowerLineToolLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Powerline"), NO_API) \
	DECLARE_SERIALIZER(UPowerLineToolLibrary)


#define FID_Powerline_Source_Powerline_PowerLineToolLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPowerLineToolLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPowerLineToolLibrary(UPowerLineToolLibrary&&); \
	UPowerLineToolLibrary(const UPowerLineToolLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPowerLineToolLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPowerLineToolLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPowerLineToolLibrary) \
	NO_API virtual ~UPowerLineToolLibrary();


#define FID_Powerline_Source_Powerline_PowerLineToolLibrary_h_11_PROLOG
#define FID_Powerline_Source_Powerline_PowerLineToolLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Powerline_Source_Powerline_PowerLineToolLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Powerline_Source_Powerline_PowerLineToolLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_Powerline_Source_Powerline_PowerLineToolLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POWERLINE_API UClass* StaticClass<class UPowerLineToolLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Powerline_Source_Powerline_PowerLineToolLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
