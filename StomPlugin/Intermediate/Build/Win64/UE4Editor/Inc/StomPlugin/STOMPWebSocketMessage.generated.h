// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
#ifdef STOMPLUGIN_STOMPWebSocketMessage_generated_h
#error "STOMPWebSocketMessage.generated.h already included, missing '#pragma once' in STOMPWebSocketMessage.h"
#endif
#define STOMPLUGIN_STOMPWebSocketMessage_generated_h

#define RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_STOMPWebSocketMessage_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAckId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetAckId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMessageId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetMessageId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDestination) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetDestination(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubscriptionId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetSubscriptionId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRawBodyLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetRawBodyLength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRawBody) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetRawBody(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBodyAsString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetBodyAsString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHeader) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<FName,FString>*)Z_Param__Result=P_THIS->GetHeader(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNack) \
	{ \
		P_GET_TMAP_REF(FName,FString,Z_Param_Out_Header); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_CompletionCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Nack(Z_Param_Out_Header,FSTOMPRequestCompleted(Z_Param_Out_CompletionCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAck) \
	{ \
		P_GET_TMAP_REF(FName,FString,Z_Param_Out_Header); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_CompletionCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Ack(Z_Param_Out_Header,FSTOMPRequestCompleted(Z_Param_Out_CompletionCallback)); \
		P_NATIVE_END; \
	}


#define RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_STOMPWebSocketMessage_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAckId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetAckId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMessageId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetMessageId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDestination) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetDestination(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubscriptionId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetSubscriptionId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRawBodyLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetRawBodyLength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRawBody) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetRawBody(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBodyAsString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetBodyAsString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHeader) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<FName,FString>*)Z_Param__Result=P_THIS->GetHeader(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNack) \
	{ \
		P_GET_TMAP_REF(FName,FString,Z_Param_Out_Header); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_CompletionCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Nack(Z_Param_Out_Header,FSTOMPRequestCompleted(Z_Param_Out_CompletionCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAck) \
	{ \
		P_GET_TMAP_REF(FName,FString,Z_Param_Out_Header); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_CompletionCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Ack(Z_Param_Out_Header,FSTOMPRequestCompleted(Z_Param_Out_CompletionCallback)); \
		P_NATIVE_END; \
	}


#define RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_STOMPWebSocketMessage_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSTOMPWebSocketMessage(); \
	friend struct Z_Construct_UClass_USTOMPWebSocketMessage_Statics; \
public: \
	DECLARE_CLASS(USTOMPWebSocketMessage, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StomPlugin"), NO_API) \
	DECLARE_SERIALIZER(USTOMPWebSocketMessage)


#define RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_STOMPWebSocketMessage_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSTOMPWebSocketMessage(); \
	friend struct Z_Construct_UClass_USTOMPWebSocketMessage_Statics; \
public: \
	DECLARE_CLASS(USTOMPWebSocketMessage, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StomPlugin"), NO_API) \
	DECLARE_SERIALIZER(USTOMPWebSocketMessage)


#define RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_STOMPWebSocketMessage_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USTOMPWebSocketMessage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USTOMPWebSocketMessage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USTOMPWebSocketMessage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USTOMPWebSocketMessage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USTOMPWebSocketMessage(USTOMPWebSocketMessage&&); \
	NO_API USTOMPWebSocketMessage(const USTOMPWebSocketMessage&); \
public:


#define RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_STOMPWebSocketMessage_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USTOMPWebSocketMessage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USTOMPWebSocketMessage(USTOMPWebSocketMessage&&); \
	NO_API USTOMPWebSocketMessage(const USTOMPWebSocketMessage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USTOMPWebSocketMessage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USTOMPWebSocketMessage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USTOMPWebSocketMessage)


#define RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_STOMPWebSocketMessage_h_19_PRIVATE_PROPERTY_OFFSET
#define RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_STOMPWebSocketMessage_h_16_PROLOG
#define RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_STOMPWebSocketMessage_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_STOMPWebSocketMessage_h_19_PRIVATE_PROPERTY_OFFSET \
	RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_STOMPWebSocketMessage_h_19_RPC_WRAPPERS \
	RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_STOMPWebSocketMessage_h_19_INCLASS \
	RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_STOMPWebSocketMessage_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_STOMPWebSocketMessage_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_STOMPWebSocketMessage_h_19_PRIVATE_PROPERTY_OFFSET \
	RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_STOMPWebSocketMessage_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_STOMPWebSocketMessage_h_19_INCLASS_NO_PURE_DECLS \
	RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_STOMPWebSocketMessage_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STOMPLUGIN_API UClass* StaticClass<class USTOMPWebSocketMessage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_STOMPWebSocketMessage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
