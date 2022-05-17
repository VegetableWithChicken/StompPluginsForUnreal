// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StomPlugin/Public/STOMPWebSocketMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTOMPWebSocketMessage() {}
// Cross Module References
	STOMPLUGIN_API UClass* Z_Construct_UClass_USTOMPWebSocketMessage_NoRegister();
	STOMPLUGIN_API UClass* Z_Construct_UClass_USTOMPWebSocketMessage();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_StomPlugin();
	STOMPLUGIN_API UFunction* Z_Construct_UFunction_USTOMPWebSocketMessage_Ack();
	STOMPLUGIN_API UFunction* Z_Construct_UDelegateFunction_StomPlugin_STOMPRequestCompleted__DelegateSignature();
	STOMPLUGIN_API UFunction* Z_Construct_UFunction_USTOMPWebSocketMessage_GetAckId();
	STOMPLUGIN_API UFunction* Z_Construct_UFunction_USTOMPWebSocketMessage_GetBodyAsString();
	STOMPLUGIN_API UFunction* Z_Construct_UFunction_USTOMPWebSocketMessage_GetDestination();
	STOMPLUGIN_API UFunction* Z_Construct_UFunction_USTOMPWebSocketMessage_GetHeader();
	STOMPLUGIN_API UFunction* Z_Construct_UFunction_USTOMPWebSocketMessage_GetMessageId();
	STOMPLUGIN_API UFunction* Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBody();
	STOMPLUGIN_API UFunction* Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBodyLength();
	STOMPLUGIN_API UFunction* Z_Construct_UFunction_USTOMPWebSocketMessage_GetSubscriptionId();
	STOMPLUGIN_API UFunction* Z_Construct_UFunction_USTOMPWebSocketMessage_Nack();
// End Cross Module References
	void USTOMPWebSocketMessage::StaticRegisterNativesUSTOMPWebSocketMessage()
	{
		UClass* Class = USTOMPWebSocketMessage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Ack", &USTOMPWebSocketMessage::execAck },
			{ "GetAckId", &USTOMPWebSocketMessage::execGetAckId },
			{ "GetBodyAsString", &USTOMPWebSocketMessage::execGetBodyAsString },
			{ "GetDestination", &USTOMPWebSocketMessage::execGetDestination },
			{ "GetHeader", &USTOMPWebSocketMessage::execGetHeader },
			{ "GetMessageId", &USTOMPWebSocketMessage::execGetMessageId },
			{ "GetRawBody", &USTOMPWebSocketMessage::execGetRawBody },
			{ "GetRawBodyLength", &USTOMPWebSocketMessage::execGetRawBodyLength },
			{ "GetSubscriptionId", &USTOMPWebSocketMessage::execGetSubscriptionId },
			{ "Nack", &USTOMPWebSocketMessage::execNack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USTOMPWebSocketMessage_Ack_Statics
	{
		struct STOMPWebSocketMessage_eventAck_Parms
		{
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTOMPWebSocketMessage_Ack_Statics::NewProp_CompletionCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USTOMPWebSocketMessage_Ack_Statics::NewProp_CompletionCallback = { "CompletionCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STOMPWebSocketMessage_eventAck_Parms, CompletionCallback), Z_Construct_UDelegateFunction_StomPlugin_STOMPRequestCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USTOMPWebSocketMessage_Ack_Statics::NewProp_CompletionCallback_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USTOMPWebSocketMessage_Ack_Statics::NewProp_CompletionCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTOMPWebSocketMessage_Ack_Statics::NewProp_Header_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USTOMPWebSocketMessage_Ack_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STOMPWebSocketMessage_eventAck_Parms, Header), METADATA_PARAMS(Z_Construct_UFunction_USTOMPWebSocketMessage_Ack_Statics::NewProp_Header_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USTOMPWebSocketMessage_Ack_Statics::NewProp_Header_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USTOMPWebSocketMessage_Ack_Statics::NewProp_Header_Key_KeyProp = { "Header_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USTOMPWebSocketMessage_Ack_Statics::NewProp_Header_ValueProp = { "Header", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTOMPWebSocketMessage_Ack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTOMPWebSocketMessage_Ack_Statics::NewProp_CompletionCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTOMPWebSocketMessage_Ack_Statics::NewProp_Header,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTOMPWebSocketMessage_Ack_Statics::NewProp_Header_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTOMPWebSocketMessage_Ack_Statics::NewProp_Header_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTOMPWebSocketMessage_Ack_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Header,CompletionCallback" },
		{ "Category", "Online|STOMP over Websockets|Messages" },
		{ "ModuleRelativePath", "Public/STOMPWebSocketMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTOMPWebSocketMessage_Ack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTOMPWebSocketMessage, nullptr, "Ack", nullptr, nullptr, sizeof(STOMPWebSocketMessage_eventAck_Parms), Z_Construct_UFunction_USTOMPWebSocketMessage_Ack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USTOMPWebSocketMessage_Ack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTOMPWebSocketMessage_Ack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USTOMPWebSocketMessage_Ack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTOMPWebSocketMessage_Ack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTOMPWebSocketMessage_Ack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USTOMPWebSocketMessage_GetAckId_Statics
	{
		struct STOMPWebSocketMessage_eventGetAckId_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USTOMPWebSocketMessage_GetAckId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STOMPWebSocketMessage_eventGetAckId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTOMPWebSocketMessage_GetAckId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTOMPWebSocketMessage_GetAckId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTOMPWebSocketMessage_GetAckId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|STOMP over Websockets|Messages" },
		{ "ModuleRelativePath", "Public/STOMPWebSocketMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTOMPWebSocketMessage_GetAckId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTOMPWebSocketMessage, nullptr, "GetAckId", nullptr, nullptr, sizeof(STOMPWebSocketMessage_eventGetAckId_Parms), Z_Construct_UFunction_USTOMPWebSocketMessage_GetAckId_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USTOMPWebSocketMessage_GetAckId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTOMPWebSocketMessage_GetAckId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USTOMPWebSocketMessage_GetAckId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTOMPWebSocketMessage_GetAckId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTOMPWebSocketMessage_GetAckId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USTOMPWebSocketMessage_GetBodyAsString_Statics
	{
		struct STOMPWebSocketMessage_eventGetBodyAsString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USTOMPWebSocketMessage_GetBodyAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STOMPWebSocketMessage_eventGetBodyAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTOMPWebSocketMessage_GetBodyAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTOMPWebSocketMessage_GetBodyAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTOMPWebSocketMessage_GetBodyAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|STOMP over Websockets|Messages" },
		{ "ModuleRelativePath", "Public/STOMPWebSocketMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTOMPWebSocketMessage_GetBodyAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTOMPWebSocketMessage, nullptr, "GetBodyAsString", nullptr, nullptr, sizeof(STOMPWebSocketMessage_eventGetBodyAsString_Parms), Z_Construct_UFunction_USTOMPWebSocketMessage_GetBodyAsString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USTOMPWebSocketMessage_GetBodyAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTOMPWebSocketMessage_GetBodyAsString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USTOMPWebSocketMessage_GetBodyAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTOMPWebSocketMessage_GetBodyAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTOMPWebSocketMessage_GetBodyAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USTOMPWebSocketMessage_GetDestination_Statics
	{
		struct STOMPWebSocketMessage_eventGetDestination_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USTOMPWebSocketMessage_GetDestination_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STOMPWebSocketMessage_eventGetDestination_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTOMPWebSocketMessage_GetDestination_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTOMPWebSocketMessage_GetDestination_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTOMPWebSocketMessage_GetDestination_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|STOMP over Websockets|Messages" },
		{ "ModuleRelativePath", "Public/STOMPWebSocketMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTOMPWebSocketMessage_GetDestination_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTOMPWebSocketMessage, nullptr, "GetDestination", nullptr, nullptr, sizeof(STOMPWebSocketMessage_eventGetDestination_Parms), Z_Construct_UFunction_USTOMPWebSocketMessage_GetDestination_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USTOMPWebSocketMessage_GetDestination_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTOMPWebSocketMessage_GetDestination_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USTOMPWebSocketMessage_GetDestination_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTOMPWebSocketMessage_GetDestination()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTOMPWebSocketMessage_GetDestination_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USTOMPWebSocketMessage_GetHeader_Statics
	{
		struct STOMPWebSocketMessage_eventGetHeader_Parms
		{
			TMap<FName,FString> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTOMPWebSocketMessage_GetHeader_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USTOMPWebSocketMessage_GetHeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STOMPWebSocketMessage_eventGetHeader_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_USTOMPWebSocketMessage_GetHeader_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USTOMPWebSocketMessage_GetHeader_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USTOMPWebSocketMessage_GetHeader_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USTOMPWebSocketMessage_GetHeader_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTOMPWebSocketMessage_GetHeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTOMPWebSocketMessage_GetHeader_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTOMPWebSocketMessage_GetHeader_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTOMPWebSocketMessage_GetHeader_Statics::NewProp_ReturnValue_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTOMPWebSocketMessage_GetHeader_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|STOMP over Websockets|Messages" },
		{ "ModuleRelativePath", "Public/STOMPWebSocketMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTOMPWebSocketMessage_GetHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTOMPWebSocketMessage, nullptr, "GetHeader", nullptr, nullptr, sizeof(STOMPWebSocketMessage_eventGetHeader_Parms), Z_Construct_UFunction_USTOMPWebSocketMessage_GetHeader_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USTOMPWebSocketMessage_GetHeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTOMPWebSocketMessage_GetHeader_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USTOMPWebSocketMessage_GetHeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTOMPWebSocketMessage_GetHeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTOMPWebSocketMessage_GetHeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USTOMPWebSocketMessage_GetMessageId_Statics
	{
		struct STOMPWebSocketMessage_eventGetMessageId_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USTOMPWebSocketMessage_GetMessageId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STOMPWebSocketMessage_eventGetMessageId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTOMPWebSocketMessage_GetMessageId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTOMPWebSocketMessage_GetMessageId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTOMPWebSocketMessage_GetMessageId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|STOMP over Websockets|Messages" },
		{ "ModuleRelativePath", "Public/STOMPWebSocketMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTOMPWebSocketMessage_GetMessageId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTOMPWebSocketMessage, nullptr, "GetMessageId", nullptr, nullptr, sizeof(STOMPWebSocketMessage_eventGetMessageId_Parms), Z_Construct_UFunction_USTOMPWebSocketMessage_GetMessageId_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USTOMPWebSocketMessage_GetMessageId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTOMPWebSocketMessage_GetMessageId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USTOMPWebSocketMessage_GetMessageId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTOMPWebSocketMessage_GetMessageId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTOMPWebSocketMessage_GetMessageId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBody_Statics
	{
		struct STOMPWebSocketMessage_eventGetRawBody_Parms
		{
			TArray<uint8> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBody_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBody_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STOMPWebSocketMessage_eventGetRawBody_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBody_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBody_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBody_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBody_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBody_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBody_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|STOMP over Websockets|Messages" },
		{ "ModuleRelativePath", "Public/STOMPWebSocketMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTOMPWebSocketMessage, nullptr, "GetRawBody", nullptr, nullptr, sizeof(STOMPWebSocketMessage_eventGetRawBody_Parms), Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBody_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBody_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBody_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBodyLength_Statics
	{
		struct STOMPWebSocketMessage_eventGetRawBodyLength_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBodyLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STOMPWebSocketMessage_eventGetRawBodyLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBodyLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBodyLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBodyLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|STOMP over Websockets|Messages" },
		{ "ModuleRelativePath", "Public/STOMPWebSocketMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBodyLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTOMPWebSocketMessage, nullptr, "GetRawBodyLength", nullptr, nullptr, sizeof(STOMPWebSocketMessage_eventGetRawBodyLength_Parms), Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBodyLength_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBodyLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBodyLength_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBodyLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBodyLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBodyLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USTOMPWebSocketMessage_GetSubscriptionId_Statics
	{
		struct STOMPWebSocketMessage_eventGetSubscriptionId_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USTOMPWebSocketMessage_GetSubscriptionId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STOMPWebSocketMessage_eventGetSubscriptionId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTOMPWebSocketMessage_GetSubscriptionId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTOMPWebSocketMessage_GetSubscriptionId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTOMPWebSocketMessage_GetSubscriptionId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|STOMP over Websockets|Messages" },
		{ "ModuleRelativePath", "Public/STOMPWebSocketMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTOMPWebSocketMessage_GetSubscriptionId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTOMPWebSocketMessage, nullptr, "GetSubscriptionId", nullptr, nullptr, sizeof(STOMPWebSocketMessage_eventGetSubscriptionId_Parms), Z_Construct_UFunction_USTOMPWebSocketMessage_GetSubscriptionId_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USTOMPWebSocketMessage_GetSubscriptionId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTOMPWebSocketMessage_GetSubscriptionId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USTOMPWebSocketMessage_GetSubscriptionId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTOMPWebSocketMessage_GetSubscriptionId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTOMPWebSocketMessage_GetSubscriptionId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USTOMPWebSocketMessage_Nack_Statics
	{
		struct STOMPWebSocketMessage_eventNack_Parms
		{
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTOMPWebSocketMessage_Nack_Statics::NewProp_CompletionCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USTOMPWebSocketMessage_Nack_Statics::NewProp_CompletionCallback = { "CompletionCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STOMPWebSocketMessage_eventNack_Parms, CompletionCallback), Z_Construct_UDelegateFunction_StomPlugin_STOMPRequestCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USTOMPWebSocketMessage_Nack_Statics::NewProp_CompletionCallback_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USTOMPWebSocketMessage_Nack_Statics::NewProp_CompletionCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTOMPWebSocketMessage_Nack_Statics::NewProp_Header_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USTOMPWebSocketMessage_Nack_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STOMPWebSocketMessage_eventNack_Parms, Header), METADATA_PARAMS(Z_Construct_UFunction_USTOMPWebSocketMessage_Nack_Statics::NewProp_Header_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USTOMPWebSocketMessage_Nack_Statics::NewProp_Header_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USTOMPWebSocketMessage_Nack_Statics::NewProp_Header_Key_KeyProp = { "Header_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USTOMPWebSocketMessage_Nack_Statics::NewProp_Header_ValueProp = { "Header", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTOMPWebSocketMessage_Nack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTOMPWebSocketMessage_Nack_Statics::NewProp_CompletionCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTOMPWebSocketMessage_Nack_Statics::NewProp_Header,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTOMPWebSocketMessage_Nack_Statics::NewProp_Header_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTOMPWebSocketMessage_Nack_Statics::NewProp_Header_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTOMPWebSocketMessage_Nack_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Header,CompletionCallback" },
		{ "Category", "Online|STOMP over Websockets|Messages" },
		{ "ModuleRelativePath", "Public/STOMPWebSocketMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTOMPWebSocketMessage_Nack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTOMPWebSocketMessage, nullptr, "Nack", nullptr, nullptr, sizeof(STOMPWebSocketMessage_eventNack_Parms), Z_Construct_UFunction_USTOMPWebSocketMessage_Nack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USTOMPWebSocketMessage_Nack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTOMPWebSocketMessage_Nack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USTOMPWebSocketMessage_Nack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTOMPWebSocketMessage_Nack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTOMPWebSocketMessage_Nack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USTOMPWebSocketMessage_NoRegister()
	{
		return USTOMPWebSocketMessage::StaticClass();
	}
	struct Z_Construct_UClass_USTOMPWebSocketMessage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTOMPWebSocketMessage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StomPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USTOMPWebSocketMessage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USTOMPWebSocketMessage_Ack, "Ack" }, // 4134404457
		{ &Z_Construct_UFunction_USTOMPWebSocketMessage_GetAckId, "GetAckId" }, // 3678977279
		{ &Z_Construct_UFunction_USTOMPWebSocketMessage_GetBodyAsString, "GetBodyAsString" }, // 284695016
		{ &Z_Construct_UFunction_USTOMPWebSocketMessage_GetDestination, "GetDestination" }, // 879997159
		{ &Z_Construct_UFunction_USTOMPWebSocketMessage_GetHeader, "GetHeader" }, // 4205187176
		{ &Z_Construct_UFunction_USTOMPWebSocketMessage_GetMessageId, "GetMessageId" }, // 1856160412
		{ &Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBody, "GetRawBody" }, // 260852833
		{ &Z_Construct_UFunction_USTOMPWebSocketMessage_GetRawBodyLength, "GetRawBodyLength" }, // 3602482447
		{ &Z_Construct_UFunction_USTOMPWebSocketMessage_GetSubscriptionId, "GetSubscriptionId" }, // 458764084
		{ &Z_Construct_UFunction_USTOMPWebSocketMessage_Nack, "Nack" }, // 38538067
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTOMPWebSocketMessage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "STOMPWebSocketMessage.h" },
		{ "ModuleRelativePath", "Public/STOMPWebSocketMessage.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTOMPWebSocketMessage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTOMPWebSocketMessage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTOMPWebSocketMessage_Statics::ClassParams = {
		&USTOMPWebSocketMessage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USTOMPWebSocketMessage_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USTOMPWebSocketMessage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTOMPWebSocketMessage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTOMPWebSocketMessage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTOMPWebSocketMessage, 3978922002);
	template<> STOMPLUGIN_API UClass* StaticClass<USTOMPWebSocketMessage>()
	{
		return USTOMPWebSocketMessage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTOMPWebSocketMessage(Z_Construct_UClass_USTOMPWebSocketMessage, &USTOMPWebSocketMessage::StaticClass, TEXT("/Script/StomPlugin"), TEXT("USTOMPWebSocketMessage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTOMPWebSocketMessage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
