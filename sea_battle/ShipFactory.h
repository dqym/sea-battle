#ifndef SEA_BATTLE_SHIPFACTORY_H
#define SEA_BATTLE_SHIPFACTORY_H

#include <vector>
#include "Ship.h"

class ShipFactory {
private:
    std::vector<int> ship_sizes;
    int ship_count;
public:
    ShipFactory(int count, std::vector<int> sizes);
    std::vector<Ship> get_ships();
};



#endif
