#ifndef SEA_BATTLE_SHIPMANAGER_H
#define SEA_BATTLE_SHIPMANAGER_H

#include <vector>
#include "Ship.h"


class ShipManager {
public:
    ShipManager(int count, std::vector<int> sizes);
    std::vector<Ship>& get_ships();
    std::pair<bool, bool> is_hit(std::pair<char, int>& coordinate);
private:
    std::vector<Ship> ships;
    void delete_ship(Ship& ship);
};


#endif