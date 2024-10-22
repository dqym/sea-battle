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
        sources/DisplayerCLI.cpp
        includes/DisplayerCLI.h
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
        sources/Abilities.cpp)
