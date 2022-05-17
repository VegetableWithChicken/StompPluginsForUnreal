# StompPluginsForUnreal
websocket and stomp destination topic
#### add component to actor
![image](https://user-images.githubusercontent.com/56669924/168780393-6b36ec73-2491-4844-b71d-34a5978e8e42.png)
#### wirte wss://ip+port/ws  in Url  
![image](https://user-images.githubusercontent.com/56669924/168780707-2af15d85-6bfa-46aa-884d-6b639ad2880d.png)
#### connect 
![image](https://user-images.githubusercontent.com/56669924/168780868-9edbdbaa-1734-4af9-b3eb-f702b25f10e0.png)
#### Destination
such as :/exchange/topic....
![image](https://user-images.githubusercontent.com/56669924/168781289-bde31f2f-bd54-476f-946b-333a3d9424c3.png)
#### other event 
![image](https://user-images.githubusercontent.com/56669924/168781373-7c4b02b8-a04d-4350-96cf-e93b0f759777.png)
#### play and final result :
```
LogBlueprintUserMessages: Late PlayInEditor Detection: Level '/Game/TestCharacter/NewMap.NewMap:PersistentLevel' has LevelScriptBlueprint '/Game/TestCharacter/NewMap.NewMap:PersistentLevel.NewMap' with GeneratedClass '/Game/TestCharacter/NewMap.NewMap_C' with ClassGeneratedBy '/Game/TestCharacter/NewMap.NewMap:PersistentLevel.NewMap'
LogBlueprintUserMessages: [125] 1.2/session-/RabbitMQ/3.7.17
LogBlueprintUserMessages: [125] sub-0-session-
LogBlueprintUserMessages: [125] true/
LogBlueprintUserMessages: [125] doby:{"robotType":"ginger-lite","robotCode":"XXXXX","taskCode":null,"taskName":XXXXXX","mapCode":null,"status":1,"action":null,"tenantCode":"XXXXXX","robotName":"XXXXXXX","taskType":1,"XXXXXXXXX","startTimestamp":1652779541351........
```
