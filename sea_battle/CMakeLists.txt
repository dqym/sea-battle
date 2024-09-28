cmake_minimum_required(VERSION 3.25)
project(sea_battle)

set(CMAKE_CXX_STANDARD 26)

add_executable(sea_battle main.cpp
        Board.cpp
        Board.h
        Ship.cpp
        Ship.h
        ShipManager.cpp
        ShipManager.h)
