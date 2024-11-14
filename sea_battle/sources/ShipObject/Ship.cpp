#include "../../includes/ShipObject/Ship.h"

Ship::Ship(): length(0), segments(0), orientation(Ship::ship_orientation::Horizontal) {}

Ship::Ship(int length) : length(length), segments(length), orientation(Ship::ship_orientation::Horizontal) {}

void Ship::set_orientation(char direction) {
    orientation = direction == 'V' ? Ship::ship_orientation::Vertical : Ship::ship_orientation::Horizontal;
}

std::vector<Segment>& Ship::get_segments() {return segments;}

Segment* Ship::get_segment_by_id(int id) {
    for (auto& segment : segments) {
        if (segment.get_id() == id) {
            return &segment;
        }
    }
    return nullptr;
}

bool Ship::is_sunk() const {
    return std::all_of(segments.begin(), segments.end(), [](const Segment& segment){
        return segment.is_destroyed();
    });
}

Ship::ship_orientation Ship::get_orientation() {return orientation;}

int Ship::get_length() const {return length;}

void Ship::serialize(std::ostream& os) {
    os << length << ' ';
    os << (int)(orientation) << '\n';
    for (int i = 0; i < length; ++i) {
        segments[i].serialize(os);
    }
}

void Ship::deserialize(std::istream& is) {
    int i_orientation;
    is >> length;
    is >> i_orientation;
    orientation = (ship_orientation)i_orientation;
    segments.resize(length);
    for (int i = 0; i < length; ++i) {
        segments[i].deserialize(is);
    }
}
