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
    Ship(int length);
    void set_orientation(char orientation);
    Ship::ship_orientation get_orientation();
    std::vector<Segment>& get_segments();
    int get_length() const;
    bool is_sunk() const;
private:
    int length;
    Ship::ship_orientation orientation;
    std::vector<Segment> segments;
};



#endif
