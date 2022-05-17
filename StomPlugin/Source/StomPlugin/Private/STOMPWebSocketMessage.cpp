// ClouddMinds RobotEngine  Powered by EPIC game


#include "STOMPWebSocketMessage.h"
#include "IStompMessage.h"


void USTOMPWebSocketMessage::Ack(const TMap<FName, FString>& Header, const FSTOMPRequestCompleted& CompletionCallback)
{

	MyMessage->Ack(Header, FStompRequestCompleted::CreateLambda([CompletionCallback](bool bSuccess, const FString& Error)->void {
		CompletionCallback.Execute(bSuccess, Error);
	}));
}

void USTOMPWebSocketMessage::Nack(const TMap<FName, FString>& Header, const FSTOMPRequestCompleted& CompletionCallback)
{
	MyMessage->Nack(Header, FStompRequestCompleted::CreateLambda([CompletionCallback](bool bSuccess, const FString& Error)->void {
		CompletionCallback.Execute(bSuccess, Error);
	}));
}


const TMap<FName, FString>& USTOMPWebSocketMessage::GetHeader() const
{
	return MyMessage->GetHeader();
}

FString USTOMPWebSocketMessage::GetBodyAsString() const
{
	return MyMessage->GetBodyAsString();
}

const TArray<UINT8> USTOMPWebSocketMessage::GetRawBody() const
{
	return TArray<UINT8>(MyMessage->GetRawBody(), MyMessage->GetRawBodyLength());
}

INT32 USTOMPWebSocketMessage::GetRawBodyLength() const
{
	return MyMessage->GetRawBodyLength();
}


FString USTOMPWebSocketMessage::GetSubscriptionId() const
{
	return MyMessage->GetSubscriptionId();
}

FString USTOMPWebSocketMessage::GetDestination() const
{
	return MyMessage->GetDestination();
}

FString USTOMPWebSocketMessage::GetMessageId() const
{
	return MyMessage->GetMessageId();
}

FString USTOMPWebSocketMessage::GetAckId() const
{
	return MyMessage->GetAckId();
}