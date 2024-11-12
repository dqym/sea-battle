#ifndef SEA_BATTLE_SHIPMANAGER_H
#define SEA_BATTLE_SHIPMANAGER_H

#include <vector>
#include <iostream>
#include "Ship.h"

class ShipManager {
public:
    ShipManager(int& count, const std::vector<int>& sizes);
    std::vector<Ship>& get_ships();
    bool check_ships();
    bool is_all_ships_destroyed();
private:
    int destroyed_ships;
    std::vector<Ship> ships;
};


#endif