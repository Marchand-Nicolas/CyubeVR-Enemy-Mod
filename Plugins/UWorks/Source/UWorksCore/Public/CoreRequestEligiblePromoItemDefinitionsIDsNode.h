#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "RequestEligiblePromoItemDefinitionsIDsDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "CoreRequestEligiblePromoItemDefinitionsIDsNode.generated.h"

class UCoreRequestEligiblePromoItemDefinitionsIDsNode;

UCLASS()
class UWORKSCORE_API UCoreRequestEligiblePromoItemDefinitionsIDsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRequestEligiblePromoItemDefinitionsIDsDelegate Completed;
    
    UCoreRequestEligiblePromoItemDefinitionsIDsNode();
    UFUNCTION(BlueprintCallable)
    static UCoreRequestEligiblePromoItemDefinitionsIDsNode* RequestEligiblePromoItemDefinitionsIDsNode(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, int32 NumEligiblePromoItemsDefinitionsIDs, bool bCachedData);
    
};

