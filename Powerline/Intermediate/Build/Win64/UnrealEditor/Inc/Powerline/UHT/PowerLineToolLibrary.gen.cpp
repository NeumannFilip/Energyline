// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Powerline/PowerLineToolLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerLineToolLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
POWERLINE_API UClass* Z_Construct_UClass_APowerLineActor_NoRegister();
POWERLINE_API UClass* Z_Construct_UClass_UPowerLineToolLibrary();
POWERLINE_API UClass* Z_Construct_UClass_UPowerLineToolLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_Powerline();
// End Cross Module References

// Begin Class UPowerLineToolLibrary Function CreatePowerLineFromSelectedActors
struct Z_Construct_UFunction_UPowerLineToolLibrary_CreatePowerLineFromSelectedActors_Statics
{
	struct PowerLineToolLibrary_eventCreatePowerLineFromSelectedActors_Parms
	{
		const UObject* WorldContextObject;
		TSubclassOf<APowerLineActor> PowerLineClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PowerLineTool" },
		{ "ModuleRelativePath", "PowerLineToolLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PowerLineClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPowerLineToolLibrary_CreatePowerLineFromSelectedActors_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PowerLineToolLibrary_eventCreatePowerLineFromSelectedActors_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPowerLineToolLibrary_CreatePowerLineFromSelectedActors_Statics::NewProp_PowerLineClass = { "PowerLineClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PowerLineToolLibrary_eventCreatePowerLineFromSelectedActors_Parms, PowerLineClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APowerLineActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPowerLineToolLibrary_CreatePowerLineFromSelectedActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPowerLineToolLibrary_CreatePowerLineFromSelectedActors_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPowerLineToolLibrary_CreatePowerLineFromSelectedActors_Statics::NewProp_PowerLineClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerLineToolLibrary_CreatePowerLineFromSelectedActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPowerLineToolLibrary_CreatePowerLineFromSelectedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPowerLineToolLibrary, nullptr, "CreatePowerLineFromSelectedActors", nullptr, nullptr, Z_Construct_UFunction_UPowerLineToolLibrary_CreatePowerLineFromSelectedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerLineToolLibrary_CreatePowerLineFromSelectedActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPowerLineToolLibrary_CreatePowerLineFromSelectedActors_Statics::PowerLineToolLibrary_eventCreatePowerLineFromSelectedActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerLineToolLibrary_CreatePowerLineFromSelectedActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPowerLineToolLibrary_CreatePowerLineFromSelectedActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPowerLineToolLibrary_CreatePowerLineFromSelectedActors_Statics::PowerLineToolLibrary_eventCreatePowerLineFromSelectedActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPowerLineToolLibrary_CreatePowerLineFromSelectedActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPowerLineToolLibrary_CreatePowerLineFromSelectedActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPowerLineToolLibrary::execCreatePowerLineFromSelectedActors)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UClass,Z_Param_PowerLineClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPowerLineToolLibrary::CreatePowerLineFromSelectedActors(Z_Param_WorldContextObject,Z_Param_PowerLineClass);
	P_NATIVE_END;
}
// End Class UPowerLineToolLibrary Function CreatePowerLineFromSelectedActors

// Begin Class UPowerLineToolLibrary
void UPowerLineToolLibrary::StaticRegisterNativesUPowerLineToolLibrary()
{
	UClass* Class = UPowerLineToolLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreatePowerLineFromSelectedActors", &UPowerLineToolLibrary::execCreatePowerLineFromSelectedActors },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPowerLineToolLibrary);
UClass* Z_Construct_UClass_UPowerLineToolLibrary_NoRegister()
{
	return UPowerLineToolLibrary::StaticClass();
}
struct Z_Construct_UClass_UPowerLineToolLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PowerLineToolLibrary.h" },
		{ "ModuleRelativePath", "PowerLineToolLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPowerLineToolLibrary_CreatePowerLineFromSelectedActors, "CreatePowerLineFromSelectedActors" }, // 2526259498
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPowerLineToolLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPowerLineToolLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Powerline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPowerLineToolLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPowerLineToolLibrary_Statics::ClassParams = {
	&UPowerLineToolLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPowerLineToolLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UPowerLineToolLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPowerLineToolLibrary()
{
	if (!Z_Registration_Info_UClass_UPowerLineToolLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPowerLineToolLibrary.OuterSingleton, Z_Construct_UClass_UPowerLineToolLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPowerLineToolLibrary.OuterSingleton;
}
template<> POWERLINE_API UClass* StaticClass<UPowerLineToolLibrary>()
{
	return UPowerLineToolLibrary::StaticClass();
}
UPowerLineToolLibrary::UPowerLineToolLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPowerLineToolLibrary);
UPowerLineToolLibrary::~UPowerLineToolLibrary() {}
// End Class UPowerLineToolLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Powerline_Source_Powerline_PowerLineToolLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPowerLineToolLibrary, UPowerLineToolLibrary::StaticClass, TEXT("UPowerLineToolLibrary"), &Z_Registration_Info_UClass_UPowerLineToolLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPowerLineToolLibrary), 937718417U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Powerline_Source_Powerline_PowerLineToolLibrary_h_1106798116(TEXT("/Script/Powerline"),
	Z_CompiledInDeferFile_FID_Powerline_Source_Powerline_PowerLineToolLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Powerline_Source_Powerline_PowerLineToolLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
