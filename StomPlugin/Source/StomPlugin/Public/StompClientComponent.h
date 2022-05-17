// ClouddMinds RobotEngine  Powered by EPIC game

#pragma once


#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StompClientComponent.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FSTOMPRequestCompleted, bool, bSuccess, const FString&, Error);
DECLARE_DYNAMIC_DELEGATE_OneParam(FSTOMPSubscriptionEvent, class USTOMPWebSocketMessage*, Message);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSTOMPConnectedEvent, const FString&, ProtocolVersion, const FString&, SessionId, const FString&, ServerString);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSTOMPConnectionErrorEvent, const FString&, Error);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSTOMPErrorEvent, const FString&, Error);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSTOMPClosedEvent, const FString&, Reason);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class STOMPLUGIN_API UStompClientComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStompClientComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	TSharedPtr<class IStompClient> StompClient = nullptr;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


private:
	//Wrappers for client events
	void HandleOnConnected(const FString& ProtocolVersion, const FString& SessionId, const FString& ServerString);
	void HandleOnConnectionError(const FString& Error);
	void HandleOnError(const FString& Error);
	void HandleOnClosed(const FString& Reason);

public:

	UPROPERTY(EditInstanceOnly,BlueprintReadWrite, Category = "Online|STOMP over Websockets")
		FString Url;

	/**
	 * Initiate a client connection to the server.
	 * Use this after setting up event handlers or to reconnect after connection errors.
	 *
	 * @param Header custom headers to send with the initial CONNECT command.
	 */
	UFUNCTION(BlueprintCallable, meta = (AutoCreateRefTerm = "Header"), Category = "Online|STOMP over Websockets")
		void Connect(const TMap<FName, FString>& inHeader);

	/**
	 * Disconnect from the server.
	 *
	 * @param Header custom headers to send with the DISCONNECT command.
	 */
	UFUNCTION(BlueprintCallable, meta = (AutoCreateRefTerm = "Header"), Category = "Online|STOMP over Websockets")
		void Disconnect(const TMap<FName, FString>& Header);

	/**
	 * Inquire if this instance is connected to a server.
	 */
	UFUNCTION(BlueprintCallable, Category = "Online|STOMP over Websockets")
		bool IsConnected();
	/**
	 * Subscribe to an event
	 * @param Destination Destination endpoint to subscribe to.
	 * @param EventCallback Delegate called when events arrive on this subscription.
	 * @param CompletionCallback Delegate called when the request has been acknowledged by the server or if there is an error.
	 * @return a handle to the active subscription. Can be passed to Unsubscribe to unsubscribe from the end point.
	 */
	UFUNCTION(BlueprintCallable, meta = (AutoCreateRefTerm = "CompletionCallback"), Category = "Online|STOMP over Websockets")
		FString Subscribe(const FString& Destination, const FSTOMPSubscriptionEvent& EventCallback, const FSTOMPRequestCompleted& CompletionCallback);


	/**
	 * Unsubscribe from an event
	 * @param Subscription The id returned from the call to Subscribe.
	 * @param CompletionCallback Delegate called when the request has been acknowledged by the server or if there is an error.
	 * @param ResponseCallback Delegate called when the request has been completed.
	 */
	UFUNCTION(BlueprintCallable, meta = (AutoCreateRefTerm = "CompletionCallback"), Category = "Online|STOMP over Websockets")
		void Unsubscribe(FString Subscription, const FSTOMPRequestCompleted& CompletionCallback);

	/**
	 * Emit an event to a destination
	 * @param Destination The destination endoint of the event.
	 * @param Body The event body as string. It will be encoded as UTF8 before sending to the Stomp server.
	 * @param Header Custom header values to send along with the data.
	 * @param CompletionCallback Delegate called when the request has been acknowledged by the server or if there is an error.
	 */
	UFUNCTION(BlueprintCallable, meta = (AutoCreateRefTerm = "Header,CompletionCallback"), Category = "Online|STOMP over Websockets")
		void SendString(const FString& Destination, const FString& Body, const TMap<FName, FString>& Header, const FSTOMPRequestCompleted& CompletionCallback)
	{
		FTCHARToUTF8 Convert(*Body);
		TArray<uint8> Encoded;
		Encoded.Append((uint8*)Convert.Get(), Convert.Length());
		SendBinary(Destination, Encoded, Header, CompletionCallback);
	}

	/**
	 * Emit an event to a destination
	 * @param Destination The destination endoint of the event.
	 * @param Body The event body as a binary blob.
	 * @param Header Custom header values to send along with the data.
	 * @param CompletionCallback Delegate called when the request has been acknowledged by the server or if there is an error.
	 */
	UFUNCTION(BlueprintCallable, meta = (AutoCreateRefTerm = "Header,CompletionCallback"), Category = "Online|STOMP over Websockets")
		void SendBinary(const FString& Destination, const TArray<uint8>& Body, const TMap<FName, FString>& Header, const FSTOMPRequestCompleted& CompletionCallback);

	/**
	 * Delegate called when a connection been established successfully.
	 * @param ProtocoVersion The protocol version supported by the server
	 * @param SessionId A unique connection identifier. Can be empty depending on the server implementation.
	 * @param ServerString A server version string if returned from the server, otherwise empty string.
	 *
	 */
	UPROPERTY(BlueprintAssignable)
		FSTOMPConnectedEvent OnConnected;


	/**
	 * Delegate called when a connection could not be established.
	 *
	 */
	UPROPERTY(BlueprintAssignable)
		FSTOMPConnectionErrorEvent OnConnectionError;

	/**
	 * Delegate called when an error is received from the server.
	 *
	 */
	UPROPERTY(BlueprintAssignable)
		FSTOMPErrorEvent OnError;

	/**
	 * Delegate called when a connection has been closed.
	 *
	 */
	UPROPERTY(BlueprintAssignable)
		FSTOMPClosedEvent OnClosed;
};
