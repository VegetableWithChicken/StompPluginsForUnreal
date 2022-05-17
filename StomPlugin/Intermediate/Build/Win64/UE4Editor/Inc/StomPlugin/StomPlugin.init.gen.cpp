// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStomPlugin_init() {}
	STOMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StomPlugin_STOMPRequestCompleted__DelegateSignature();
	STOMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StomPlugin_STOMPSubscriptionEvent__DelegateSignature();
	STOMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectedEvent__DelegateSignature();
	STOMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectionErrorEvent__DelegateSignature();
	STOMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StomPlugin_STOMPErrorEvent__DelegateSignature();
	STOMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StomPlugin_STOMPClosedEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_StomPlugin()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_StomPlugin_STOMPRequestCompleted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_StomPlugin_STOMPSubscriptionEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectionErrorEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_StomPlugin_STOMPErrorEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_StomPlugin_STOMPClosedEvent__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/StomPlugin",
				SingletonFuncArray,
				ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x9A4C2267,
				0x821B1248,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
