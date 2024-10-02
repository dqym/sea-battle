#include "Ship.h"

Ship::Ship(int length): length(length), orientation(Ship::ship_orientation::Horizontal) {}

void Ship::set_coordinates(std::vector<std::pair<char, int>>& positions) {
    for (auto& position : positions) {
        segments[position] = segment_state::Whole;
    }
}

void Ship::set_orientation(char direction) {
    orientation = direction == 'V' ? Ship::ship_orientation::Vertical : Ship::ship_orientation::Horizontal;
}

bool Ship::is_hit(std::pair<char, int>& coords) {
    if (segments.contains(coords)) {
        switch (segments[coords]) {
            case Ship::segment_state::Whole:
                segments[coords] = Ship::segment_state::Damaged;
                break;
            case Ship::segment_state::Damaged:
                segments[coords] = Ship::segment_state::Destroyed;
                break;
        }
        return true;
    }
    return false;
}

bool Ship::is_sunk() {
    int sum_health = 0;
    for (auto& [coords, health]: segments){
        sum_health += int(health);
    }
    return sum_health == 0;
}

bool Ship::is_segment_destroyed(std::pair<char, int>& coordinate) {
    return segments[coordinate] == Ship::segment_state::Destroyed;
}

Ship::ship_orientation Ship::get_orientation() const {return orientation;}

int Ship::get_length() const {return length;}

bool Ship::operator==(const Ship& other) const {
    return segments == other.segments;
}
