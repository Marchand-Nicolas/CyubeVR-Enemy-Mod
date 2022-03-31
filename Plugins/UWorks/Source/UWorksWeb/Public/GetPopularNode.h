#pragma once
#include "CoreMinimal.h"
#include "GetPopularDelegateDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetPopularNode.generated.h"

class UGetPopularNode;

UCLASS()
class UWORKSWEB_API UGetPopularNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetPopularDelegate Completed;
    
    UGetPopularNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetPopularNode* GetPopularNode(const FString& Key, const FString& Language, int32 Rows, int32 Start, int32 FilterAppID, int32 ECurrency);
    
};

