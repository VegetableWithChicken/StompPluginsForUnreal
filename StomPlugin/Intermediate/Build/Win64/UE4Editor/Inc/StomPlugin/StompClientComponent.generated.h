// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USTOMPWebSocketMessage;
 
#ifdef STOMPLUGIN_StompClientComponent_generated_h
#error "StompClientComponent.generated.h already included, missing '#pragma once' in StompClientComponent.h"
#endif
#define STOMPLUGIN_StompClientComponent_generated_h

#define RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_StompClientComponent_h_15_DELEGATE \
struct _Script_StomPlugin_eventSTOMPClosedEvent_Parms \
{ \
	FString Reason; \
}; \
static inline void FSTOMPClosedEvent_DelegateWrapper(const FMulticastScriptDelegate& STOMPClosedEvent, const FString& Reason) \
{ \
	_Script_StomPlugin_eventSTOMPClosedEvent_Parms Parms; \
	Parms.Reason=Reason; \
	STOMPClosedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_StompClientComponent_h_14_DELEGATE \
struct _Script_StomPlugin_eventSTOMPErrorEvent_Parms \
{ \
	FString Error; \
}; \
static inline void FSTOMPErrorEvent_DelegateWrapper(const FMulticastScriptDelegate& STOMPErrorEvent, const FString& Error) \
{ \
	_Script_StomPlugin_eventSTOMPErrorEvent_Parms Parms; \
	Parms.Error=Error; \
	STOMPErrorEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_StompClientComponent_h_13_DELEGATE \
struct _Script_StomPlugin_eventSTOMPConnectionErrorEvent_Parms \
{ \
	FString Error; \
}; \
static inline void FSTOMPConnectionErrorEvent_DelegateWrapper(const FMulticastScriptDelegate& STOMPConnectionErrorEvent, const FString& Error) \
{ \
	_Script_StomPlugin_eventSTOMPConnectionErrorEvent_Parms Parms; \
	Parms.Error=Error; \
	STOMPConnectionErrorEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_StompClientComponent_h_12_DELEGATE \
struct _Script_StomPlugin_eventSTOMPConnectedEvent_Parms \
{ \
	FString ProtocolVersion; \
	FString SessionId; \
	FString ServerString; \
}; \
static inline void FSTOMPConnectedEvent_DelegateWrapper(const FMulticastScriptDelegate& STOMPConnectedEvent, const FString& ProtocolVersion, const FString& SessionId, const FString& ServerString) \
{ \
	_Script_StomPlugin_eventSTOMPConnectedEvent_Parms Parms; \
	Parms.ProtocolVersion=ProtocolVersion; \
	Parms.SessionId=SessionId; \
	Parms.ServerString=ServerString; \
	STOMPConnectedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_StompClientComponent_h_11_DELEGATE \
struct _Script_StomPlugin_eventSTOMPSubscriptionEvent_Parms \
{ \
	USTOMPWebSocketMessage* Message; \
}; \
static inline void FSTOMPSubscriptionEvent_DelegateWrapper(const FScriptDelegate& STOMPSubscriptionEvent, USTOMPWebSocketMessage* Message) \
{ \
	_Script_StomPlugin_eventSTOMPSubscriptionEvent_Parms Parms; \
	Parms.Message=Message; \
	STOMPSubscriptionEvent.ProcessDelegate<UObject>(&Parms); \
}


#define RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_StompClientComponent_h_10_DELEGATE \
struct _Script_StomPlugin_eventSTOMPRequestCompleted_Parms \
{ \
	bool bSuccess; \
	FString Error; \
}; \
static inline void FSTOMPRequestCompleted_DelegateWrapper(const FScriptDelegate& STOMPRequestCompleted, bool bSuccess, const FString& Error) \
{ \
	_Script_StomPlugin_eventSTOMPRequestCompleted_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.Error=Error; \
	STOMPRequestCompleted.ProcessDelegate<UObject>(&Parms); \
}


#define RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_StompClientComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendBinary) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Destination); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Body); \
		P_GET_TMAP_REF(FName,FString,Z_Param_Out_Header); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_CompletionCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendBinary(Z_Param_Destination,Z_Param_Out_Body,Z_Param_Out_Header,FSTOMPRequestCompleted(Z_Param_Out_CompletionCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Destination); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Body); \
		P_GET_TMAP_REF(FName,FString,Z_Param_Out_Header); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_CompletionCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendString(Z_Param_Destination,Z_Param_Body,Z_Param_Out_Header,FSTOMPRequestCompleted(Z_Param_Out_CompletionCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnsubscribe) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Subscription); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_CompletionCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Unsubscribe(Z_Param_Subscription,FSTOMPRequestCompleted(Z_Param_Out_CompletionCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubscribe) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Destination); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_EventCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_CompletionCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->Subscribe(Z_Param_Destination,FSTOMPSubscriptionEvent(Z_Param_Out_EventCallback),FSTOMPRequestCompleted(Z_Param_Out_CompletionCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsConnected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsConnected(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisconnect) \
	{ \
		P_GET_TMAP_REF(FName,FString,Z_Param_Out_Header); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Disconnect(Z_Param_Out_Header); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnect) \
	{ \
		P_GET_TMAP_REF(FName,FString,Z_Param_Out_inHeader); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Connect(Z_Param_Out_inHeader); \
		P_NATIVE_END; \
	}


#define RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_StompClientComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendBinary) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Destination); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Body); \
		P_GET_TMAP_REF(FName,FString,Z_Param_Out_Header); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_CompletionCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendBinary(Z_Param_Destination,Z_Param_Out_Body,Z_Param_Out_Header,FSTOMPRequestCompleted(Z_Param_Out_CompletionCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Destination); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Body); \
		P_GET_TMAP_REF(FName,FString,Z_Param_Out_Header); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_CompletionCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendString(Z_Param_Destination,Z_Param_Body,Z_Param_Out_Header,FSTOMPRequestCompleted(Z_Param_Out_CompletionCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnsubscribe) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Subscription); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_CompletionCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Unsubscribe(Z_Param_Subscription,FSTOMPRequestCompleted(Z_Param_Out_CompletionCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubscribe) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Destination); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_EventCallback); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_CompletionCallback); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->Subscribe(Z_Param_Destination,FSTOMPSubscriptionEvent(Z_Param_Out_EventCallback),FSTOMPRequestCompleted(Z_Param_Out_CompletionCallback)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsConnected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsConnected(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisconnect) \
	{ \
		P_GET_TMAP_REF(FName,FString,Z_Param_Out_Header); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Disconnect(Z_Param_Out_Header); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnect) \
	{ \
		P_GET_TMAP_REF(FName,FString,Z_Param_Out_inHeader); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Connect(Z_Param_Out_inHeader); \
		P_NATIVE_END; \
	}


#define RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_StompClientComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStompClientComponent(); \
	friend struct Z_Construct_UClass_UStompClientComponent_Statics; \
public: \
	DECLARE_CLASS(UStompClientComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StomPlugin"), NO_API) \
	DECLARE_SERIALIZER(UStompClientComponent)


#define RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_StompClientComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUStompClientComponent(); \
	friend struct Z_Construct_UClass_UStompClientComponent_Statics; \
public: \
	DECLARE_CLASS(UStompClientComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StomPlugin"), NO_API) \
	DECLARE_SERIALIZER(UStompClientComponent)


#define RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_StompClientComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStompClientComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStompClientComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStompClientComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStompClientComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStompClientComponent(UStompClientComponent&&); \
	NO_API UStompClientComponent(const UStompClientComponent&); \
public:


#define RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_StompClientComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStompClientComponent(UStompClientComponent&&); \
	NO_API UStompClientComponent(const UStompClientComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStompClientComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStompClientComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStompClientComponent)


#define RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_StompClientComponent_h_20_PRIVATE_PROPERTY_OFFSET
#define RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_StompClientComponent_h_17_PROLOG
#define RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_StompClientComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_StompClientComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_StompClientComponent_h_20_RPC_WRAPPERS \
	RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_StompClientComponent_h_20_INCLASS \
	RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_StompClientComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_StompClientComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_StompClientComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_StompClientComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_StompClientComponent_h_20_INCLASS_NO_PURE_DECLS \
	RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_StompClientComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STOMPLUGIN_API UClass* StaticClass<class UStompClientComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RobotEngine_Plugins_StomPlugin_Source_StomPlugin_Public_StompClientComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
