#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "DownloadClanActivityCountsDelegateDelegate.h"
#include "CoreDownloadClanActivityCountsNode.generated.h"

class UCoreDownloadClanActivityCountsNode;

UCLASS()
class UWORKSCORE_API UCoreDownloadClanActivityCountsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDownloadClanActivityCountsDelegate Completed;
    
    UCoreDownloadClanActivityCountsNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    static UCoreDownloadClanActivityCountsNode* DownloadClanActivityCountsNode(TArray<FUWorksSteamID> SteamIDClans);
    
};

