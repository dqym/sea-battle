#ifndef SEA_BATTLE_SHIP_H
#define SEA_BATTLE_SHIP_H

#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include "Segment.h"

class Ship {
public:
    enum class ship_orientation {Horizontal, Vertical};
    Ship();
    Ship(int length);
    void set_orientation(char orientation);
    Ship::ship_orientation get_orientation();
    std::vector<Segment>& get_segments();
    Segment* get_segment_by_id(int id);
    int get_length() const;
    bool is_sunk() const;
    void serialize(std::ostream& os);
    void deserialize(std::istream& is);
private:
    int length;
    Ship::ship_orientation orientation;
    std::vector<Segment> segments;
};



#endif
