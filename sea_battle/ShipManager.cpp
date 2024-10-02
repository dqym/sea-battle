#include "ShipManager.h"

ShipManager::ShipManager(int count, std::vector<int> sizes) {
    for (int i = 0; i < count; ++i) {
        ships.emplace_back(sizes[i]);
    }
}

std::vector<Ship>& ShipManager::get_ships() {
    return ships;
}

std::pair<bool, bool> ShipManager::is_hit(std::pair<char, int>& coordinate) {
    bool hit_flag = false;
    bool destroy_flag = false;
    for (auto& ship : ships) {
        hit_flag = ship.is_hit(coordinate);
        if (hit_flag) {
            destroy_flag = ship.is_segment_destroyed(coordinate);
            if (destroy_flag && ship.is_sunk()) {
                hit_flag = false;
                delete_ship(ship);
            }
            break;
        }
    }
    return std::pair<bool, bool>{hit_flag, destroy_flag};
}

void ShipManager::delete_ship(Ship& ship) {
    std::erase(ships, ship);
}


