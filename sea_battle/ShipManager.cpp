#include "ShipManager.h"

ShipManager::ShipManager(int count, std::vector<int> sizes) {
    for (int i = 0; i < count; ++i) {
        ships.emplace_back(sizes[i]);
    }
}

std::vector<Ship>& ShipManager::get_ships() {
    return ships;
}

void ShipManager::update() {
    auto it = ships.begin();
    while (it != ships.end()) {
        if ((*it).is_sunk()) {
            std::cout << "Ship destroyed.\n";
            destroyed_ships.push_back(*it);
            ships.erase(it);
        } else {
            ++it;
        }
    }
}

