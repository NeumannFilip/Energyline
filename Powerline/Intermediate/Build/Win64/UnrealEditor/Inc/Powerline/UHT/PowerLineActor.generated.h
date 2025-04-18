// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PowerLineActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POWERLINE_PowerLineActor_generated_h
#error "PowerLineActor.generated.h already included, missing '#pragma once' in PowerLineActor.h"
#endif
#define POWERLINE_PowerLineActor_generated_h

#define FID_Powerline_Source_Powerline_PowerLineActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckEndpointsAndSetVisibility);


#define FID_Powerline_Source_Powerline_PowerLineActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPowerLineActor(); \
	friend struct Z_Construct_UClass_APowerLineActor_Statics; \
public: \
	DECLARE_CLASS(APowerLineActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Powerline"), NO_API) \
	DECLARE_SERIALIZER(APowerLineActor)


#define FID_Powerline_Source_Powerline_PowerLineActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APowerLineActor(APowerLineActor&&); \
	APowerLineActor(const APowerLineActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APowerLineActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APowerLineActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APowerLineActor) \
	NO_API virtual ~APowerLineActor();


#define FID_Powerline_Source_Powerline_PowerLineActor_h_14_PROLOG
#define FID_Powerline_Source_Powerline_PowerLineActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Powerline_Source_Powerline_PowerLineActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Powerline_Source_Powerline_PowerLineActor_h_18_INCLASS_NO_PURE_DECLS \
	FID_Powerline_Source_Powerline_PowerLineActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POWERLINE_API UClass* StaticClass<class APowerLineActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Powerline_Source_Powerline_PowerLineActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
