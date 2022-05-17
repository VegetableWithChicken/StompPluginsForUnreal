// ClouddMinds RobotEngine  Powered by EPIC game


#include "StompClientComponent.h"
#include "WebSocketsModule.h"
#include "IWebSocket.h"
#include "Stomp/Public/IStompMessage.h"
#include "Stomp/Public/StompModule.h"
#include "Stomp/Public/IStompClient.h"
#include "STOMPWebSocketMessage.h"

// Sets default values for this component's properties
UStompClientComponent::UStompClientComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UStompClientComponent::BeginPlay()
{
	Super::BeginPlay();
	IModuleInterface * Stompi=FModuleManager::Get().LoadModule(TEXT("Stomp"));
	Stompi->StartupModule();
	FStompModule* Mod = &FStompModule::Get();
	StompClient = Mod->CreateClient(Url);

	StompClient->OnConnected().AddUObject(this, &UStompClientComponent::HandleOnConnected);
	StompClient->OnConnectionError().AddUObject(this, &UStompClientComponent::HandleOnConnectionError);
	StompClient->OnError().AddUObject(this, &UStompClientComponent::HandleOnError);
	StompClient->OnClosed().AddUObject(this, &UStompClientComponent::HandleOnClosed);


	
}


// Called every frame
void UStompClientComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


/**
	 * Initiate a client connection to the server.
	 * Use this after setting up event handlers or to reconnect after connection errors.
	 *
	 * @param Header custom headers to send with the initial CONNECT command.
	 */
void UStompClientComponent::Connect(const TMap<FName, FString>& inHeader)
{
	//FStompHeader Header=Header;
	if(StompClient) StompClient->Connect(inHeader);
}

/**
 * Disconnect from the server.
 *
 * @param Header custom headers to send with the DISCONNECT command.
 */
void UStompClientComponent::Disconnect(const TMap<FName, FString>& Header)
{
	StompClient->Disconnect(Header);
}

/**
 * Inquire if this instance is connected to a server.
 */
bool UStompClientComponent::IsConnected()
{
	return StompClient->IsConnected();
}


FString UStompClientComponent::Subscribe(const FString& Destination, const FSTOMPSubscriptionEvent& EventCallback, const FSTOMPRequestCompleted& CompletionCallback)
{
	return StompClient->Subscribe(Destination,FStompSubscriptionEvent::CreateLambda([this,EventCallback](const IStompMessage& Message)->void {
		USTOMPWebSocketMessage* msg = NewObject<USTOMPWebSocketMessage>(this);
		msg->MyMessage = &Message;
		EventCallback.ExecuteIfBound(msg);
		msg->ConditionalBeginDestroy();
	}),
		FStompRequestCompleted::CreateLambda([CompletionCallback](bool bSuccess, const FString& Error)->void {
		CompletionCallback.ExecuteIfBound(bSuccess, Error);
	})
		);
}


/**
 * Unsubscribe from an event
 * @param Subscription The id returned from the call to Subscribe.
 * @param CompletionCallback Delegate called when the request has been acknowledged by the server or if there is an error.
 * @param ResponseCallback Delegate called when the request has been completed.
 */
void UStompClientComponent::Unsubscribe(FString Subscription, const FSTOMPRequestCompleted& CompletionCallback)
{
	StompClient->Unsubscribe(Subscription,
		FStompRequestCompleted::CreateLambda([CompletionCallback](bool bSuccess, const FString& Error)->void {
		CompletionCallback.ExecuteIfBound(bSuccess, Error);
	})
	);
}

/**
 * Emit an event to a destination
 * @param Destination The destination endoint of the event.
 * @param Body The event body as a binary blob.
 * @param Header Custom header values to send along with the data.
 * @param CompletionCallback Delegate called when the request has been acknowledged by the server or if there is an error.
 */
void UStompClientComponent::SendBinary(const FString& Destination, const TArray<uint8>& Body, const TMap<FName, FString>& Header,
	const FSTOMPRequestCompleted& CompletionCallback)
{
	StompClient->Send(Destination, Body, Header,
		FStompRequestCompleted::CreateLambda([CompletionCallback](bool bSuccess, const FString& Error)->void {
		CompletionCallback.ExecuteIfBound(bSuccess, Error);
	})
	);
}

void UStompClientComponent::HandleOnConnected(const FString& ProtocolVersion, const FString& SessionId, const FString& ServerString)
{
	this->OnConnected.Broadcast(ProtocolVersion, SessionId, ServerString);
}

void UStompClientComponent::HandleOnConnectionError(const FString& Error)
{
	this->OnConnectionError.Broadcast(Error);
}
void UStompClientComponent::HandleOnError(const FString& Error)
{
	this->OnError.Broadcast(Error);
}
void UStompClientComponent::HandleOnClosed(const FString& Reason)
{
	this->OnClosed.Broadcast(Reason);
}

