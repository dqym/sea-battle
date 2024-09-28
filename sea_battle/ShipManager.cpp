#include "ShipManager.h"

ShipManager::ShipManager(int count, std::vector<int> sizes) {
    for (int i = 0; i < count; ++i) {
        ships.emplace_back(sizes[i]);
    }
}

std::vector<Ship>& ShipManager::get_ships() {
    return ships;
}

void ShipManager::set_coordinates(Ship &ship, std::vector<std::pair<char, int>> coordinates) {
    for (auto& position : coordinates) {
        ship.set_coordinate(position);
    }
}

bool ShipManager::is_hit(std::pair<char, int> coordinate) {
    bool flag = false;
    for (auto& ship : ships) {
        flag = ship.is_hit(coordinate);
        if (flag) {break;}
    }
    return flag;
}


