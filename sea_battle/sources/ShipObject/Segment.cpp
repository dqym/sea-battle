#include "../../includes/ShipObject/Segment.h"

int Segment::next_id = 0;

Segment::Segment(): id(next_id++), state(Segment::segment_state::Whole) {}

void Segment::hit() {
    switch (state) {
        case segment_state::Whole:
            state = Segment::segment_state::Damaged;
            break;
        case segment_state::Damaged:
            state = Segment::segment_state::Destroyed;
            break;
        case segment_state::Destroyed:
            break;
    }
}

bool Segment::is_destroyed() const {
    return state == Segment::segment_state::Destroyed;
}

int Segment::get_id() {
    return id;
}

void Segment::serialize(std::ostream& os) {
    os << id << ' ';
    os << (int)(state) << "\n";
}

void Segment::deserialize(std::istream& is) {
    int state_int;
    is >> id >> state_int;
    state = (segment_state)(state_int);
}