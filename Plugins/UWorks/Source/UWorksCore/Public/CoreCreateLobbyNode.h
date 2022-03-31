#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "CreateLobbyDelegateDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "EUWorksLobbyType.h"
#include "CoreCreateLobbyNode.generated.h"

class UCoreCreateLobbyNode;

UCLASS()
class UWORKSCORE_API UCoreCreateLobbyNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCreateLobbyDelegate Completed;
    
    UCoreCreateLobbyNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDLobby);
    
    UFUNCTION(BlueprintCallable)
    static UCoreCreateLobbyNode* CreateLobbyNode(EUWorksLobbyType LobbyType, int32 MaxMembers);
    
};

