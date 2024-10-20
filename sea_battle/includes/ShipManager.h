#ifndef SEA_BATTLE_SHIPMANAGER_H
#define SEA_BATTLE_SHIPMANAGER_H

#include <vector>
#include <iostream>
#include "Ship.h"


class ShipManager {
public:
    ShipManager(int count, std::vector<int> sizes);
    std::vector<Ship>& get_ships();
    void update();
    bool is_all_ships_destroyed();
private:
    int destroyed_ships;
    std::vector<Ship> ships;
};


#endif