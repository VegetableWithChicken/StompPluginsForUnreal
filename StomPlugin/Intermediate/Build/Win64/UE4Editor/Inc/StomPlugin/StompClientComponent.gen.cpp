// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StomPlugin/Public/StompClientComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStompClientComponent() {}
// Cross Module References
	STOMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StomPlugin_STOMPClosedEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_StomPlugin();
	STOMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StomPlugin_STOMPErrorEvent__DelegateSignature();
	STOMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectionErrorEvent__DelegateSignature();
	STOMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectedEvent__DelegateSignature();
	STOMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StomPlugin_STOMPSubscriptionEvent__DelegateSignature();
	STOMPLUGIN_API UClass* Z_Construct_UClass_USTOMPWebSocketMessage_NoRegister();
	STOMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StomPlugin_STOMPRequestCompleted__DelegateSignature();
	STOMPLUGIN_API UClass* Z_Construct_UClass_UStompClientComponent_NoRegister();
	STOMPLUGIN_API UClass* Z_Construct_UClass_UStompClientComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	STOMPLUGIN_API UFunction* Z_Construct_UFunction_UStompClientComponent_Connect();
	STOMPLUGIN_API UFunction* Z_Construct_UFunction_UStompClientComponent_Disconnect();
	STOMPLUGIN_API UFunction* Z_Construct_UFunction_UStompClientComponent_IsConnected();
	STOMPLUGIN_API UFunction* Z_Construct_UFunction_UStompClientComponent_SendBinary();
	STOMPLUGIN_API UFunction* Z_Construct_UFunction_UStompClientComponent_SendString();
	STOMPLUGIN_API UFunction* Z_Construct_UFunction_UStompClientComponent_Subscribe();
	STOMPLUGIN_API UFunction* Z_Construct_UFunction_UStompClientComponent_Unsubscribe();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_StomPlugin_STOMPClosedEvent__DelegateSignature_Statics
	{
		struct _Script_StomPlugin_eventSTOMPClosedEvent_Parms
		{
			FString Reason;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Reason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StomPlugin_STOMPClosedEvent__DelegateSignature_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_StomPlugin_STOMPClosedEvent__DelegateSignature_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StomPlugin_eventSTOMPClosedEvent_Parms, Reason), METADATA_PARAMS(Z_Construct_UDelegateFunction_StomPlugin_STOMPClosedEvent__DelegateSignature_Statics::NewProp_Reason_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_StomPlugin_STOMPClosedEvent__DelegateSignature_Statics::NewProp_Reason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StomPlugin_STOMPClosedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StomPlugin_STOMPClosedEvent__DelegateSignature_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StomPlugin_STOMPClosedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StompClientComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StomPlugin_STOMPClosedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StomPlugin, nullptr, "STOMPClosedEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_StomPlugin_eventSTOMPClosedEvent_Parms), Z_Construct_UDelegateFunction_StomPlugin_STOMPClosedEvent__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_StomPlugin_STOMPClosedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StomPlugin_STOMPClosedEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_StomPlugin_STOMPClosedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StomPlugin_STOMPClosedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StomPlugin_STOMPClosedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_StomPlugin_STOMPErrorEvent__DelegateSignature_Statics
	{
		struct _Script_StomPlugin_eventSTOMPErrorEvent_Parms
		{
			FString Error;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StomPlugin_STOMPErrorEvent__DelegateSignature_Statics::NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_StomPlugin_STOMPErrorEvent__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StomPlugin_eventSTOMPErrorEvent_Parms, Error), METADATA_PARAMS(Z_Construct_UDelegateFunction_StomPlugin_STOMPErrorEvent__DelegateSignature_Statics::NewProp_Error_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_StomPlugin_STOMPErrorEvent__DelegateSignature_Statics::NewProp_Error_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StomPlugin_STOMPErrorEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StomPlugin_STOMPErrorEvent__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StomPlugin_STOMPErrorEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StompClientComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StomPlugin_STOMPErrorEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StomPlugin, nullptr, "STOMPErrorEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_StomPlugin_eventSTOMPErrorEvent_Parms), Z_Construct_UDelegateFunction_StomPlugin_STOMPErrorEvent__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_StomPlugin_STOMPErrorEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StomPlugin_STOMPErrorEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_StomPlugin_STOMPErrorEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StomPlugin_STOMPErrorEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StomPlugin_STOMPErrorEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectionErrorEvent__DelegateSignature_Statics
	{
		struct _Script_StomPlugin_eventSTOMPConnectionErrorEvent_Parms
		{
			FString Error;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectionErrorEvent__DelegateSignature_Statics::NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectionErrorEvent__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StomPlugin_eventSTOMPConnectionErrorEvent_Parms, Error), METADATA_PARAMS(Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectionErrorEvent__DelegateSignature_Statics::NewProp_Error_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectionErrorEvent__DelegateSignature_Statics::NewProp_Error_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectionErrorEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectionErrorEvent__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectionErrorEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StompClientComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectionErrorEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StomPlugin, nullptr, "STOMPConnectionErrorEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_StomPlugin_eventSTOMPConnectionErrorEvent_Parms), Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectionErrorEvent__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectionErrorEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectionErrorEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectionErrorEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectionErrorEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectionErrorEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectedEvent__DelegateSignature_Statics
	{
		struct _Script_StomPlugin_eventSTOMPConnectedEvent_Parms
		{
			FString ProtocolVersion;
			FString SessionId;
			FString ServerString;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProtocolVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProtocolVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectedEvent__DelegateSignature_Statics::NewProp_ServerString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectedEvent__DelegateSignature_Statics::NewProp_ServerString = { "ServerString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StomPlugin_eventSTOMPConnectedEvent_Parms, ServerString), METADATA_PARAMS(Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectedEvent__DelegateSignature_Statics::NewProp_ServerString_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectedEvent__DelegateSignature_Statics::NewProp_ServerString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectedEvent__DelegateSignature_Statics::NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectedEvent__DelegateSignature_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StomPlugin_eventSTOMPConnectedEvent_Parms, SessionId), METADATA_PARAMS(Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectedEvent__DelegateSignature_Statics::NewProp_SessionId_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectedEvent__DelegateSignature_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectedEvent__DelegateSignature_Statics::NewProp_ProtocolVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectedEvent__DelegateSignature_Statics::NewProp_ProtocolVersion = { "ProtocolVersion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StomPlugin_eventSTOMPConnectedEvent_Parms, ProtocolVersion), METADATA_PARAMS(Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectedEvent__DelegateSignature_Statics::NewProp_ProtocolVersion_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectedEvent__DelegateSignature_Statics::NewProp_ProtocolVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectedEvent__DelegateSignature_Statics::NewProp_ServerString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectedEvent__DelegateSignature_Statics::NewProp_SessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectedEvent__DelegateSignature_Statics::NewProp_ProtocolVersion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StompClientComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StomPlugin, nullptr, "STOMPConnectedEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_StomPlugin_eventSTOMPConnectedEvent_Parms), Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectedEvent__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectedEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_StomPlugin_STOMPSubscriptionEvent__DelegateSignature_Statics
	{
		struct _Script_StomPlugin_eventSTOMPSubscriptionEvent_Parms
		{
			USTOMPWebSocketMessage* Message;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_StomPlugin_STOMPSubscriptionEvent__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StomPlugin_eventSTOMPSubscriptionEvent_Parms, Message), Z_Construct_UClass_USTOMPWebSocketMessage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StomPlugin_STOMPSubscriptionEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StomPlugin_STOMPSubscriptionEvent__DelegateSignature_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StomPlugin_STOMPSubscriptionEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StompClientComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StomPlugin_STOMPSubscriptionEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StomPlugin, nullptr, "STOMPSubscriptionEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_StomPlugin_eventSTOMPSubscriptionEvent_Parms), Z_Construct_UDelegateFunction_StomPlugin_STOMPSubscriptionEvent__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_StomPlugin_STOMPSubscriptionEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StomPlugin_STOMPSubscriptionEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_StomPlugin_STOMPSubscriptionEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StomPlugin_STOMPSubscriptionEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StomPlugin_STOMPSubscriptionEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_StomPlugin_STOMPRequestCompleted__DelegateSignature_Statics
	{
		struct _Script_StomPlugin_eventSTOMPRequestCompleted_Parms
		{
			bool bSuccess;
			FString Error;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Error;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StomPlugin_STOMPRequestCompleted__DelegateSignature_Statics::NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_StomPlugin_STOMPRequestCompleted__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StomPlugin_eventSTOMPRequestCompleted_Parms, Error), METADATA_PARAMS(Z_Construct_UDelegateFunction_StomPlugin_STOMPRequestCompleted__DelegateSignature_Statics::NewProp_Error_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_StomPlugin_STOMPRequestCompleted__DelegateSignature_Statics::NewProp_Error_MetaData)) };
	void Z_Construct_UDelegateFunction_StomPlugin_STOMPRequestCompleted__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_StomPlugin_eventSTOMPRequestCompleted_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_StomPlugin_STOMPRequestCompleted__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_StomPlugin_eventSTOMPRequestCompleted_Parms), &Z_Construct_UDelegateFunction_StomPlugin_STOMPRequestCompleted__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StomPlugin_STOMPRequestCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StomPlugin_STOMPRequestCompleted__DelegateSignature_Statics::NewProp_Error,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StomPlugin_STOMPRequestCompleted__DelegateSignature_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StomPlugin_STOMPRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StompClientComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StomPlugin_STOMPRequestCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StomPlugin, nullptr, "STOMPRequestCompleted__DelegateSignature", nullptr, nullptr, sizeof(_Script_StomPlugin_eventSTOMPRequestCompleted_Parms), Z_Construct_UDelegateFunction_StomPlugin_STOMPRequestCompleted__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_StomPlugin_STOMPRequestCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StomPlugin_STOMPRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_StomPlugin_STOMPRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StomPlugin_STOMPRequestCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StomPlugin_STOMPRequestCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UStompClientComponent::StaticRegisterNativesUStompClientComponent()
	{
		UClass* Class = UStompClientComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Connect", &UStompClientComponent::execConnect },
			{ "Disconnect", &UStompClientComponent::execDisconnect },
			{ "IsConnected", &UStompClientComponent::execIsConnected },
			{ "SendBinary", &UStompClientComponent::execSendBinary },
			{ "SendString", &UStompClientComponent::execSendString },
			{ "Subscribe", &UStompClientComponent::execSubscribe },
			{ "Unsubscribe", &UStompClientComponent::execUnsubscribe },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStompClientComponent_Connect_Statics
	{
		struct StompClientComponent_eventConnect_Parms
		{
			TMap<FName,FString> inHeader;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inHeader_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_inHeader;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_inHeader_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inHeader_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStompClientComponent_Connect_Statics::NewProp_inHeader_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UStompClientComponent_Connect_Statics::NewProp_inHeader = { "inHeader", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StompClientComponent_eventConnect_Parms, inHeader), METADATA_PARAMS(Z_Construct_UFunction_UStompClientComponent_Connect_Statics::NewProp_inHeader_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UStompClientComponent_Connect_Statics::NewProp_inHeader_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStompClientComponent_Connect_Statics::NewProp_inHeader_Key_KeyProp = { "inHeader_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStompClientComponent_Connect_Statics::NewProp_inHeader_ValueProp = { "inHeader", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStompClientComponent_Connect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStompClientComponent_Connect_Statics::NewProp_inHeader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStompClientComponent_Connect_Statics::NewProp_inHeader_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStompClientComponent_Connect_Statics::NewProp_inHeader_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStompClientComponent_Connect_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Header" },
		{ "Category", "Online|STOMP over Websockets" },
		{ "Comment", "/**\n\x09 * Initiate a client connection to the server.\n\x09 * Use this after setting up event handlers or to reconnect after connection errors.\n\x09 *\n\x09 * @param Header custom headers to send with the initial CONNECT command.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StompClientComponent.h" },
		{ "ToolTip", "Initiate a client connection to the server.\nUse this after setting up event handlers or to reconnect after connection errors.\n\n@param Header custom headers to send with the initial CONNECT command." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStompClientComponent_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStompClientComponent, nullptr, "Connect", nullptr, nullptr, sizeof(StompClientComponent_eventConnect_Parms), Z_Construct_UFunction_UStompClientComponent_Connect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStompClientComponent_Connect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStompClientComponent_Connect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStompClientComponent_Connect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStompClientComponent_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStompClientComponent_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStompClientComponent_Disconnect_Statics
	{
		struct StompClientComponent_eventDisconnect_Parms
		{
			TMap<FName,FString> Header;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Header;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Header_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Header_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStompClientComponent_Disconnect_Statics::NewProp_Header_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UStompClientComponent_Disconnect_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StompClientComponent_eventDisconnect_Parms, Header), METADATA_PARAMS(Z_Construct_UFunction_UStompClientComponent_Disconnect_Statics::NewProp_Header_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UStompClientComponent_Disconnect_Statics::NewProp_Header_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStompClientComponent_Disconnect_Statics::NewProp_Header_Key_KeyProp = { "Header_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStompClientComponent_Disconnect_Statics::NewProp_Header_ValueProp = { "Header", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStompClientComponent_Disconnect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStompClientComponent_Disconnect_Statics::NewProp_Header,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStompClientComponent_Disconnect_Statics::NewProp_Header_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStompClientComponent_Disconnect_Statics::NewProp_Header_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStompClientComponent_Disconnect_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Header" },
		{ "Category", "Online|STOMP over Websockets" },
		{ "Comment", "/**\n\x09 * Disconnect from the server.\n\x09 *\n\x09 * @param Header custom headers to send with the DISCONNECT command.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StompClientComponent.h" },
		{ "ToolTip", "Disconnect from the server.\n\n@param Header custom headers to send with the DISCONNECT command." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStompClientComponent_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStompClientComponent, nullptr, "Disconnect", nullptr, nullptr, sizeof(StompClientComponent_eventDisconnect_Parms), Z_Construct_UFunction_UStompClientComponent_Disconnect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStompClientComponent_Disconnect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStompClientComponent_Disconnect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStompClientComponent_Disconnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStompClientComponent_Disconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStompClientComponent_Disconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStompClientComponent_IsConnected_Statics
	{
		struct StompClientComponent_eventIsConnected_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStompClientComponent_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StompClientComponent_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStompClientComponent_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StompClientComponent_eventIsConnected_Parms), &Z_Construct_UFunction_UStompClientComponent_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStompClientComponent_IsConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStompClientComponent_IsConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStompClientComponent_IsConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|STOMP over Websockets" },
		{ "Comment", "/**\n\x09 * Inquire if this instance is connected to a server.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StompClientComponent.h" },
		{ "ToolTip", "Inquire if this instance is connected to a server." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStompClientComponent_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStompClientComponent, nullptr, "IsConnected", nullptr, nullptr, sizeof(StompClientComponent_eventIsConnected_Parms), Z_Construct_UFunction_UStompClientComponent_IsConnected_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStompClientComponent_IsConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStompClientComponent_IsConnected_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStompClientComponent_IsConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStompClientComponent_IsConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStompClientComponent_IsConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics
	{
		struct StompClientComponent_eventSendBinary_Parms
		{
			FString Destination;
			TArray<uint8> Body;
			TMap<FName,FString> Header;
			FScriptDelegate CompletionCallback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletionCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_CompletionCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Header;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Header_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Header_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Body;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Body_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Destination;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::NewProp_CompletionCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::NewProp_CompletionCallback = { "CompletionCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StompClientComponent_eventSendBinary_Parms, CompletionCallback), Z_Construct_UDelegateFunction_StomPlugin_STOMPRequestCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::NewProp_CompletionCallback_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::NewProp_CompletionCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::NewProp_Header_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StompClientComponent_eventSendBinary_Parms, Header), METADATA_PARAMS(Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::NewProp_Header_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::NewProp_Header_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::NewProp_Header_Key_KeyProp = { "Header_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::NewProp_Header_ValueProp = { "Header", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::NewProp_Body_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StompClientComponent_eventSendBinary_Parms, Body), METADATA_PARAMS(Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::NewProp_Body_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::NewProp_Body_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::NewProp_Body_Inner = { "Body", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::NewProp_Destination_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StompClientComponent_eventSendBinary_Parms, Destination), METADATA_PARAMS(Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::NewProp_Destination_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::NewProp_Destination_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::NewProp_CompletionCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::NewProp_Header,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::NewProp_Header_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::NewProp_Header_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::NewProp_Body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::NewProp_Body_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::NewProp_Destination,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Header,CompletionCallback" },
		{ "Category", "Online|STOMP over Websockets" },
		{ "Comment", "/**\n\x09 * Emit an event to a destination\n\x09 * @param Destination The destination endoint of the event.\n\x09 * @param Body The event body as a binary blob.\n\x09 * @param Header Custom header values to send along with the data.\n\x09 * @param CompletionCallback Delegate called when the request has been acknowledged by the server or if there is an error.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StompClientComponent.h" },
		{ "ToolTip", "Emit an event to a destination\n@param Destination The destination endoint of the event.\n@param Body The event body as a binary blob.\n@param Header Custom header values to send along with the data.\n@param CompletionCallback Delegate called when the request has been acknowledged by the server or if there is an error." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStompClientComponent, nullptr, "SendBinary", nullptr, nullptr, sizeof(StompClientComponent_eventSendBinary_Parms), Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStompClientComponent_SendBinary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStompClientComponent_SendBinary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStompClientComponent_SendString_Statics
	{
		struct StompClientComponent_eventSendString_Parms
		{
			FString Destination;
			FString Body;
			TMap<FName,FString> Header;
			FScriptDelegate CompletionCallback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletionCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_CompletionCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Header;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Header_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Header_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Body;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Destination;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStompClientComponent_SendString_Statics::NewProp_CompletionCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UStompClientComponent_SendString_Statics::NewProp_CompletionCallback = { "CompletionCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StompClientComponent_eventSendString_Parms, CompletionCallback), Z_Construct_UDelegateFunction_StomPlugin_STOMPRequestCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UStompClientComponent_SendString_Statics::NewProp_CompletionCallback_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UStompClientComponent_SendString_Statics::NewProp_CompletionCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStompClientComponent_SendString_Statics::NewProp_Header_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UStompClientComponent_SendString_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StompClientComponent_eventSendString_Parms, Header), METADATA_PARAMS(Z_Construct_UFunction_UStompClientComponent_SendString_Statics::NewProp_Header_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UStompClientComponent_SendString_Statics::NewProp_Header_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStompClientComponent_SendString_Statics::NewProp_Header_Key_KeyProp = { "Header_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStompClientComponent_SendString_Statics::NewProp_Header_ValueProp = { "Header", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStompClientComponent_SendString_Statics::NewProp_Body_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStompClientComponent_SendString_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StompClientComponent_eventSendString_Parms, Body), METADATA_PARAMS(Z_Construct_UFunction_UStompClientComponent_SendString_Statics::NewProp_Body_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UStompClientComponent_SendString_Statics::NewProp_Body_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStompClientComponent_SendString_Statics::NewProp_Destination_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStompClientComponent_SendString_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StompClientComponent_eventSendString_Parms, Destination), METADATA_PARAMS(Z_Construct_UFunction_UStompClientComponent_SendString_Statics::NewProp_Destination_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UStompClientComponent_SendString_Statics::NewProp_Destination_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStompClientComponent_SendString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStompClientComponent_SendString_Statics::NewProp_CompletionCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStompClientComponent_SendString_Statics::NewProp_Header,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStompClientComponent_SendString_Statics::NewProp_Header_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStompClientComponent_SendString_Statics::NewProp_Header_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStompClientComponent_SendString_Statics::NewProp_Body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStompClientComponent_SendString_Statics::NewProp_Destination,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStompClientComponent_SendString_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Header,CompletionCallback" },
		{ "Category", "Online|STOMP over Websockets" },
		{ "Comment", "/**\n\x09 * Emit an event to a destination\n\x09 * @param Destination The destination endoint of the event.\n\x09 * @param Body The event body as string. It will be encoded as UTF8 before sending to the Stomp server.\n\x09 * @param Header Custom header values to send along with the data.\n\x09 * @param CompletionCallback Delegate called when the request has been acknowledged by the server or if there is an error.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StompClientComponent.h" },
		{ "ToolTip", "Emit an event to a destination\n@param Destination The destination endoint of the event.\n@param Body The event body as string. It will be encoded as UTF8 before sending to the Stomp server.\n@param Header Custom header values to send along with the data.\n@param CompletionCallback Delegate called when the request has been acknowledged by the server or if there is an error." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStompClientComponent_SendString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStompClientComponent, nullptr, "SendString", nullptr, nullptr, sizeof(StompClientComponent_eventSendString_Parms), Z_Construct_UFunction_UStompClientComponent_SendString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStompClientComponent_SendString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStompClientComponent_SendString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStompClientComponent_SendString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStompClientComponent_SendString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStompClientComponent_SendString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStompClientComponent_Subscribe_Statics
	{
		struct StompClientComponent_eventSubscribe_Parms
		{
			FString Destination;
			FScriptDelegate EventCallback;
			FScriptDelegate CompletionCallback;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletionCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_CompletionCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_EventCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Destination;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStompClientComponent_Subscribe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StompClientComponent_eventSubscribe_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStompClientComponent_Subscribe_Statics::NewProp_CompletionCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UStompClientComponent_Subscribe_Statics::NewProp_CompletionCallback = { "CompletionCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StompClientComponent_eventSubscribe_Parms, CompletionCallback), Z_Construct_UDelegateFunction_StomPlugin_STOMPRequestCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UStompClientComponent_Subscribe_Statics::NewProp_CompletionCallback_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UStompClientComponent_Subscribe_Statics::NewProp_CompletionCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStompClientComponent_Subscribe_Statics::NewProp_EventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UStompClientComponent_Subscribe_Statics::NewProp_EventCallback = { "EventCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StompClientComponent_eventSubscribe_Parms, EventCallback), Z_Construct_UDelegateFunction_StomPlugin_STOMPSubscriptionEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UStompClientComponent_Subscribe_Statics::NewProp_EventCallback_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UStompClientComponent_Subscribe_Statics::NewProp_EventCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStompClientComponent_Subscribe_Statics::NewProp_Destination_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStompClientComponent_Subscribe_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StompClientComponent_eventSubscribe_Parms, Destination), METADATA_PARAMS(Z_Construct_UFunction_UStompClientComponent_Subscribe_Statics::NewProp_Destination_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UStompClientComponent_Subscribe_Statics::NewProp_Destination_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStompClientComponent_Subscribe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStompClientComponent_Subscribe_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStompClientComponent_Subscribe_Statics::NewProp_CompletionCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStompClientComponent_Subscribe_Statics::NewProp_EventCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStompClientComponent_Subscribe_Statics::NewProp_Destination,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStompClientComponent_Subscribe_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "CompletionCallback" },
		{ "Category", "Online|STOMP over Websockets" },
		{ "Comment", "/**\n\x09 * Subscribe to an event\n\x09 * @param Destination Destination endpoint to subscribe to.\n\x09 * @param EventCallback Delegate called when events arrive on this subscription.\n\x09 * @param CompletionCallback Delegate called when the request has been acknowledged by the server or if there is an error.\n\x09 * @return a handle to the active subscription. Can be passed to Unsubscribe to unsubscribe from the end point.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StompClientComponent.h" },
		{ "ToolTip", "Subscribe to an event\n@param Destination Destination endpoint to subscribe to.\n@param EventCallback Delegate called when events arrive on this subscription.\n@param CompletionCallback Delegate called when the request has been acknowledged by the server or if there is an error.\n@return a handle to the active subscription. Can be passed to Unsubscribe to unsubscribe from the end point." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStompClientComponent_Subscribe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStompClientComponent, nullptr, "Subscribe", nullptr, nullptr, sizeof(StompClientComponent_eventSubscribe_Parms), Z_Construct_UFunction_UStompClientComponent_Subscribe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStompClientComponent_Subscribe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStompClientComponent_Subscribe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStompClientComponent_Subscribe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStompClientComponent_Subscribe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStompClientComponent_Subscribe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStompClientComponent_Unsubscribe_Statics
	{
		struct StompClientComponent_eventUnsubscribe_Parms
		{
			FString Subscription;
			FScriptDelegate CompletionCallback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletionCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_CompletionCallback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Subscription;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStompClientComponent_Unsubscribe_Statics::NewProp_CompletionCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UStompClientComponent_Unsubscribe_Statics::NewProp_CompletionCallback = { "CompletionCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StompClientComponent_eventUnsubscribe_Parms, CompletionCallback), Z_Construct_UDelegateFunction_StomPlugin_STOMPRequestCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UStompClientComponent_Unsubscribe_Statics::NewProp_CompletionCallback_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UStompClientComponent_Unsubscribe_Statics::NewProp_CompletionCallback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStompClientComponent_Unsubscribe_Statics::NewProp_Subscription = { "Subscription", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StompClientComponent_eventUnsubscribe_Parms, Subscription), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStompClientComponent_Unsubscribe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStompClientComponent_Unsubscribe_Statics::NewProp_CompletionCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStompClientComponent_Unsubscribe_Statics::NewProp_Subscription,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStompClientComponent_Unsubscribe_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "CompletionCallback" },
		{ "Category", "Online|STOMP over Websockets" },
		{ "Comment", "/**\n\x09 * Unsubscribe from an event\n\x09 * @param Subscription The id returned from the call to Subscribe.\n\x09 * @param CompletionCallback Delegate called when the request has been acknowledged by the server or if there is an error.\n\x09 * @param ResponseCallback Delegate called when the request has been completed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StompClientComponent.h" },
		{ "ToolTip", "Unsubscribe from an event\n@param Subscription The id returned from the call to Subscribe.\n@param CompletionCallback Delegate called when the request has been acknowledged by the server or if there is an error.\n@param ResponseCallback Delegate called when the request has been completed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStompClientComponent_Unsubscribe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStompClientComponent, nullptr, "Unsubscribe", nullptr, nullptr, sizeof(StompClientComponent_eventUnsubscribe_Parms), Z_Construct_UFunction_UStompClientComponent_Unsubscribe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStompClientComponent_Unsubscribe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStompClientComponent_Unsubscribe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStompClientComponent_Unsubscribe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStompClientComponent_Unsubscribe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStompClientComponent_Unsubscribe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStompClientComponent_NoRegister()
	{
		return UStompClientComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStompClientComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnClosed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClosed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnConnectionError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnectionError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnConnected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStompClientComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_StomPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStompClientComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStompClientComponent_Connect, "Connect" }, // 1107462144
		{ &Z_Construct_UFunction_UStompClientComponent_Disconnect, "Disconnect" }, // 1363783491
		{ &Z_Construct_UFunction_UStompClientComponent_IsConnected, "IsConnected" }, // 2268404412
		{ &Z_Construct_UFunction_UStompClientComponent_SendBinary, "SendBinary" }, // 345567301
		{ &Z_Construct_UFunction_UStompClientComponent_SendString, "SendString" }, // 2259604870
		{ &Z_Construct_UFunction_UStompClientComponent_Subscribe, "Subscribe" }, // 2558894574
		{ &Z_Construct_UFunction_UStompClientComponent_Unsubscribe, "Unsubscribe" }, // 2486672734
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStompClientComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "StompClientComponent.h" },
		{ "ModuleRelativePath", "Public/StompClientComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStompClientComponent_Statics::NewProp_OnClosed_MetaData[] = {
		{ "Comment", "/**\n\x09 * Delegate called when a connection has been closed.\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/StompClientComponent.h" },
		{ "ToolTip", "Delegate called when a connection has been closed." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStompClientComponent_Statics::NewProp_OnClosed = { "OnClosed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStompClientComponent, OnClosed), Z_Construct_UDelegateFunction_StomPlugin_STOMPClosedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStompClientComponent_Statics::NewProp_OnClosed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStompClientComponent_Statics::NewProp_OnClosed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStompClientComponent_Statics::NewProp_OnError_MetaData[] = {
		{ "Comment", "/**\n\x09 * Delegate called when an error is received from the server.\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/StompClientComponent.h" },
		{ "ToolTip", "Delegate called when an error is received from the server." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStompClientComponent_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStompClientComponent, OnError), Z_Construct_UDelegateFunction_StomPlugin_STOMPErrorEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStompClientComponent_Statics::NewProp_OnError_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStompClientComponent_Statics::NewProp_OnError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStompClientComponent_Statics::NewProp_OnConnectionError_MetaData[] = {
		{ "Comment", "/**\n\x09 * Delegate called when a connection could not be established.\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/StompClientComponent.h" },
		{ "ToolTip", "Delegate called when a connection could not be established." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStompClientComponent_Statics::NewProp_OnConnectionError = { "OnConnectionError", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStompClientComponent, OnConnectionError), Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectionErrorEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStompClientComponent_Statics::NewProp_OnConnectionError_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStompClientComponent_Statics::NewProp_OnConnectionError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStompClientComponent_Statics::NewProp_OnConnected_MetaData[] = {
		{ "Comment", "/**\n\x09 * Delegate called when a connection been established successfully.\n\x09 * @param ProtocoVersion The protocol version supported by the server\n\x09 * @param SessionId A unique connection identifier. Can be empty depending on the server implementation.\n\x09 * @param ServerString A server version string if returned from the server, otherwise empty string.\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/StompClientComponent.h" },
		{ "ToolTip", "Delegate called when a connection been established successfully.\n@param ProtocoVersion The protocol version supported by the server\n@param SessionId A unique connection identifier. Can be empty depending on the server implementation.\n@param ServerString A server version string if returned from the server, otherwise empty string." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStompClientComponent_Statics::NewProp_OnConnected = { "OnConnected", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStompClientComponent, OnConnected), Z_Construct_UDelegateFunction_StomPlugin_STOMPConnectedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStompClientComponent_Statics::NewProp_OnConnected_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStompClientComponent_Statics::NewProp_OnConnected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStompClientComponent_Statics::NewProp_Url_MetaData[] = {
		{ "Category", "Online|STOMP over Websockets" },
		{ "ModuleRelativePath", "Public/StompClientComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStompClientComponent_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStompClientComponent, Url), METADATA_PARAMS(Z_Construct_UClass_UStompClientComponent_Statics::NewProp_Url_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStompClientComponent_Statics::NewProp_Url_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStompClientComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStompClientComponent_Statics::NewProp_OnClosed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStompClientComponent_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStompClientComponent_Statics::NewProp_OnConnectionError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStompClientComponent_Statics::NewProp_OnConnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStompClientComponent_Statics::NewProp_Url,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStompClientComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStompClientComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStompClientComponent_Statics::ClassParams = {
		&UStompClientComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStompClientComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UStompClientComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStompClientComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStompClientComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStompClientComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStompClientComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStompClientComponent, 3974795516);
	template<> STOMPLUGIN_API UClass* StaticClass<UStompClientComponent>()
	{
		return UStompClientComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStompClientComponent(Z_Construct_UClass_UStompClientComponent, &UStompClientComponent::StaticClass, TEXT("/Script/StomPlugin"), TEXT("UStompClientComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStompClientComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
