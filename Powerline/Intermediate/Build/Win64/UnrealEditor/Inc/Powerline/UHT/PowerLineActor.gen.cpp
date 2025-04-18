// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Powerline/PowerLineActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerLineActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
POWERLINE_API UClass* Z_Construct_UClass_APowerLineActor();
POWERLINE_API UClass* Z_Construct_UClass_APowerLineActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Powerline();
// End Cross Module References

// Begin Class APowerLineActor Function CheckEndpointsAndSetVisibility
struct Z_Construct_UFunction_APowerLineActor_CheckEndpointsAndSetVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PowerLineActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APowerLineActor_CheckEndpointsAndSetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APowerLineActor, nullptr, "CheckEndpointsAndSetVisibility", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APowerLineActor_CheckEndpointsAndSetVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_APowerLineActor_CheckEndpointsAndSetVisibility_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APowerLineActor_CheckEndpointsAndSetVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APowerLineActor_CheckEndpointsAndSetVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APowerLineActor::execCheckEndpointsAndSetVisibility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckEndpointsAndSetVisibility();
	P_NATIVE_END;
}
// End Class APowerLineActor Function CheckEndpointsAndSetVisibility

// Begin Class APowerLineActor
void APowerLineActor::StaticRegisterNativesAPowerLineActor()
{
	UClass* Class = APowerLineActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckEndpointsAndSetVisibility", &APowerLineActor::execCheckEndpointsAndSetVisibility },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APowerLineActor);
UClass* Z_Construct_UClass_APowerLineActor_NoRegister()
{
	return APowerLineActor::StaticClass();
}
struct Z_Construct_UClass_APowerLineActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PowerLineActor.h" },
		{ "ModuleRelativePath", "PowerLineActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[] = {
		{ "Category", "PowerLine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PowerLineActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CableMesh_MetaData[] = {
		{ "Category", "PowerLine" },
		{ "ModuleRelativePath", "PowerLineActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CableThickness_MetaData[] = {
		{ "Category", "PowerLine" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "PowerLineActor.h" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartActorRef_MetaData[] = {
		{ "Category", "PowerLine" },
		{ "ExposeOnSpawn", "false" },
		{ "ModuleRelativePath", "PowerLineActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndActorRef_MetaData[] = {
		{ "Category", "PowerLine" },
		{ "ExposeOnSpawn", "false" },
		{ "ModuleRelativePath", "PowerLineActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedSplineMeshes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PowerLineActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CableMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CableThickness;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StartActorRef;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_EndActorRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratedSplineMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedSplineMeshes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APowerLineActor_CheckEndpointsAndSetVisibility, "CheckEndpointsAndSetVisibility" }, // 1728378087
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APowerLineActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APowerLineActor_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APowerLineActor, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineComponent_MetaData), NewProp_SplineComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APowerLineActor_Statics::NewProp_CableMesh = { "CableMesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APowerLineActor, CableMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CableMesh_MetaData), NewProp_CableMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APowerLineActor_Statics::NewProp_CableThickness = { "CableThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APowerLineActor, CableThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CableThickness_MetaData), NewProp_CableThickness_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_APowerLineActor_Statics::NewProp_StartActorRef = { "StartActorRef", nullptr, (EPropertyFlags)0x0015000000020015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APowerLineActor, StartActorRef), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartActorRef_MetaData), NewProp_StartActorRef_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_APowerLineActor_Statics::NewProp_EndActorRef = { "EndActorRef", nullptr, (EPropertyFlags)0x0015000000020015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APowerLineActor, EndActorRef), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndActorRef_MetaData), NewProp_EndActorRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APowerLineActor_Statics::NewProp_GeneratedSplineMeshes_Inner = { "GeneratedSplineMeshes", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APowerLineActor_Statics::NewProp_GeneratedSplineMeshes = { "GeneratedSplineMeshes", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APowerLineActor, GeneratedSplineMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedSplineMeshes_MetaData), NewProp_GeneratedSplineMeshes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APowerLineActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerLineActor_Statics::NewProp_SplineComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerLineActor_Statics::NewProp_CableMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerLineActor_Statics::NewProp_CableThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerLineActor_Statics::NewProp_StartActorRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerLineActor_Statics::NewProp_EndActorRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerLineActor_Statics::NewProp_GeneratedSplineMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerLineActor_Statics::NewProp_GeneratedSplineMeshes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APowerLineActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APowerLineActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Powerline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APowerLineActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APowerLineActor_Statics::ClassParams = {
	&APowerLineActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APowerLineActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APowerLineActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APowerLineActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APowerLineActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APowerLineActor()
{
	if (!Z_Registration_Info_UClass_APowerLineActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APowerLineActor.OuterSingleton, Z_Construct_UClass_APowerLineActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APowerLineActor.OuterSingleton;
}
template<> POWERLINE_API UClass* StaticClass<APowerLineActor>()
{
	return APowerLineActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APowerLineActor);
APowerLineActor::~APowerLineActor() {}
// End Class APowerLineActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Powerline_Source_Powerline_PowerLineActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APowerLineActor, APowerLineActor::StaticClass, TEXT("APowerLineActor"), &Z_Registration_Info_UClass_APowerLineActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APowerLineActor), 3711233825U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Powerline_Source_Powerline_PowerLineActor_h_4102898550(TEXT("/Script/Powerline"),
	Z_CompiledInDeferFile_FID_Powerline_Source_Powerline_PowerLineActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Powerline_Source_Powerline_PowerLineActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
