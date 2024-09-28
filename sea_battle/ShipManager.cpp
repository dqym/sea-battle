#include "ShipManager.h"

ShipManager::ShipManager(int count, std::vector<int> sizes) {
    for (int i = 0; i < count; ++i) {
        ships.emplace_back(sizes[i], false);
    }
}

std::vector<Ship>& ShipManager::get_ships() {
    return ships;
}

void ShipManager::set_coordinates(Ship &ship, std::vector<std::pair<char, int>>& coordinates) {
    for (auto& position : coordinates) {
        ship.set_coordinate(position);
    }
}

std::pair<bool, bool> ShipManager::is_hit(std::pair<char, int>& coordinate) {
    bool hit_flag = false;
    bool destroy_flag = false;
    for (auto& ship : ships) {
        hit_flag = ship.is_hit(coordinate);
        if (hit_flag) {
            destroy_flag = ship.is_sunk();
        }
    }
    return std::pair<bool, bool>{hit_flag, destroy_flag};
}

void ShipManager::delete_ship(Ship& ship) {
    std::erase(ships, ship);
}


