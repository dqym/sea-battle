#include "../includes/Segment.h"

Segment::Segment(): state(Segment::segment_state::Whole) {}

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