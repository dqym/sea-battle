#include "Ship.h"

Ship::Ship(int l): length(l) {}

void Ship::set_coords(std::vector<std::pair<char, int>> coords) {
    for (auto& pair: coords) {
        segments[pair] = 2;
    }
}

bool Ship::is_hit(std::pair<char, int>& coords) {
    if (segments.contains(coords)) {
        segments[coords]--;
        return true;
    }
    return false;
}

bool Ship::is_sunk() {
    int sum_health = 0;
    for (auto& [coords, health]: segments){
        sum_health += health;
    }
    return sum_health == 0;
}

