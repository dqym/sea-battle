cmake_minimum_required(VERSION 3.25)
project(sea_battle)

set(CMAKE_CXX_STANDARD 26)

add_executable(sea_battle sources/main.cpp
        sources/Board.cpp
        includes/Board.h
        sources/ShipObject/Ship.cpp
        includes/ShipObject/Ship.h
        sources/ShipObject/ShipManager.cpp
        includes/ShipObject/ShipManager.h
        sources/ShipObject/Segment.cpp
        includes/ShipObject/Segment.h
        sources/DispatcherCLI.cpp
        includes/DispatcherCLI.h
        sources/Players/Enemy.cpp
        includes/Players/Enemy.h
        includes/Players/AbstractPlayer.h
        sources/Players/Player.cpp
        includes/Players/Player.h
        sources/GameControllers/GameSession.cpp
        includes/GameControllers/GameSession.h
        sources/GameControllers/GameSetup.cpp
        includes/GameControllers/GameSetup.h
        includes/Abilities/Ability.h
        sources/Players/AbstractPlayer.cpp
        sources/Abilities/AbilitiesManager.cpp
        includes/Abilities/AbilitiesManager.h
        sources/Exceptions.cpp
        includes/Exceptions.h
        sources/Abilities/DoubleDamageAbility.cpp
        includes/Abilities/DoubleDamageAbility.h
        sources/Abilities/ScannerAbility.cpp
        includes/Abilities/ScannerAbility.h
        sources/Abilities/ShellingAbility.cpp
        includes/Abilities/ShellingAbility.h
        sources/GameControllers/GameState.cpp
        includes/GameControllers/GameState.h
        includes/Abilities/AbilityFactory.h
        sources/FieldRenderer.cpp
        includes/FieldRenderer.h
        sources/CLIHandler.cpp
        includes/CLIHandler.h
        includes/CommandHandler.h
        sources/GameControllers/GameControl.cpp
        includes/GameControllers/GameControl.h)
