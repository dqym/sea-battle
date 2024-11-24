#ifndef SEA_BATTLE_SHIPMANAGER_H
#define SEA_BATTLE_SHIPMANAGER_H

#include <vector>
#include <iostream>
#include "Ship.h"
#include "../ConsoleIO.h"

class ShipManager {
public:
    ShipManager();
    ShipManager(int& count, const std::vector<int>& sizes);
    std::vector<Ship>& get_ships();
    Segment* find_segment_by_id(int id);
    bool check_ships();
    bool is_all_ships_destroyed();
    void serialize(std::ostream& os);
    void deserialize(std::istream& is);
private:
    int destroyed_ships;
    std::vector<Ship> ships;
    ConsoleIO console;
};


#endif