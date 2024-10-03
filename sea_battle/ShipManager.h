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
private:
    std::vector<Ship> ships;
    std::vector<Ship> destroyed_ships;
};


#endif