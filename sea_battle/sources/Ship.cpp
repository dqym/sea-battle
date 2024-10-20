#include "../includes/Ship.h"

Ship::Ship(int length) : length(length), segments(length), orientation(Ship::ship_orientation::Horizontal) {}

void Ship::set_orientation(char direction) {
    orientation = direction == 'V' ? Ship::ship_orientation::Vertical : Ship::ship_orientation::Horizontal;
}

std::vector<Segment>& Ship::get_segments() {return segments;}

bool Ship::is_sunk() const {
    return std::all_of(segments.begin(), segments.end(), [](const Segment& segment){
        return segment.is_destroyed();
    });
}

Ship::ship_orientation Ship::get_orientation() {return orientation;}

int Ship::get_length() const {return length;}
