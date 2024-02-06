
//SimGPT Team
#pragma once

#include "Kismet/BlueprintFunctionLibrary.h" //Engine
#include "ReadWriteFile.generated.h"

UCLASS()
class U_ReadWriteFile : public UBlueprintFunctionLibrary{	
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Courtney McCracken|1 - Read Write File")
		static FString ReadStringFromFile(FString FilePath, bool& bOutSuccess, FString& OutInfoMessage);

	UFUNCTION(BlueprintCallable, Category = "Courtney McCracken|1 - Read Write File")
		static void WriteStringToFile(FString FilePath, FString String, bool& bOutSuccess, FString& OutInfoMessage);
};