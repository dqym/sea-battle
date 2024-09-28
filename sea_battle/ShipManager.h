#ifndef SEA_BATTLE_SHIPMANAGER_H
#define SEA_BATTLE_SHIPMANAGER_H

#include <vector>
#include "Ship.h"


class ShipManager {
private:
    std::vector<Ship> ships;
    void ship_is_sunk();
public:
    ShipManager(int count, std::vector<int> sizes);
    std::vector<Ship>& get_ships();
    void set_coordinates(Ship& ship, std::vector<std::pair<char, int>> coordinates);
    bool is_hit(std::pair<char, int> coordinate);
};


#endif