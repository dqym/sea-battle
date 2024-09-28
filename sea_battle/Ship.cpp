#include "Ship.h"

Ship::Ship(int l): length(l) {}

void Ship::set_coordinate(std::pair<char, int> position) {
    segments[position] = segment_state::Whole;
}

bool Ship::is_hit(std::pair<char, int>& coords) {
    if (segments.contains(coords)) {
        switch (segments[coords]) {
            case segment_state::Whole:
                segments[coords] = segment_state::Damaged;
                break;
            case segment_state::Damaged:
                segments[coords] = segment_state::Destroyed;
                break;
        }
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

