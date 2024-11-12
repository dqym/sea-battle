#include "../../includes/ShipObject/ShipManager.h"

ShipManager::ShipManager(int& count, const std::vector<int>& sizes): destroyed_ships(0) {
    for (int i = 0; i < count; ++i) {
        ships.emplace_back(sizes[i]);
    }
}

std::vector<Ship>& ShipManager::get_ships() {
    return ships;
}

bool ShipManager::check_ships() {
    auto it = ships.begin();
    int temp_destroyed_ships_counter = 0;
    while (it != ships.end()) {
        if ((*it).is_sunk()) {
            temp_destroyed_ships_counter++;
            if (temp_destroyed_ships_counter > destroyed_ships) {
                destroyed_ships = temp_destroyed_ships_counter;
                std::cout << "Ship destroyed.\n";
                return true;
            }
        }
        ++it;
    }
    return false;
}

bool ShipManager::is_all_ships_destroyed() {
    return destroyed_ships == ships.size();
}

