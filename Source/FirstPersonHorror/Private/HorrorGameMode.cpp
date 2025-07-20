#include "HorrorGameMode.h"
#include "PlayerCharacter.h"

AHorrorGameMode::AHorrorGameMode()
{
    DefaultPawnClass = APlayerCharacter::StaticClass();
}