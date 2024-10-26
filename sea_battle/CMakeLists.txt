cmake_minimum_required(VERSION 3.25)
project(sea_battle)

set(CMAKE_CXX_STANDARD 26)

add_executable(sea_battle sources/main.cpp
        sources/Board.cpp
        includes/Board.h
        sources/Ship.cpp
        includes/Ship.h
        sources/ShipManager.cpp
        includes/ShipManager.h
        sources/Segment.cpp
        includes/Segment.h
        sources/DispatcherCLI.cpp
        includes/DispatcherCLI.h
        sources/Enemy.cpp
        includes/Enemy.h
        includes/AbstractPlayer.h
        sources/Player.cpp
        includes/Player.h
        sources/GameSession.cpp
        includes/GameSession.h
        sources/GameConfig.cpp
        includes/GameConfig.h
        includes/Abilities.h
        sources/Abilities.cpp
        sources/AbstractPlayer.cpp
        sources/AbilitiesManager.cpp
        includes/AbilitiesManager.h
        sources/Exceptions.cpp
        includes/Exceptions.h)
