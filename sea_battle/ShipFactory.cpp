#include "ShipFactory.h"

#include <utility>

ShipFactory::ShipFactory(int count, std::vector<int> sizes): ship_count(count), ship_sizes(std::move(sizes)) {}

std::vector<Ship> ShipFactory::get_ships() {
    std::vector<Ship> ships;
    for (auto& size: ship_sizes) {
        ships.emplace_back(size);
    }
    return ships;
}