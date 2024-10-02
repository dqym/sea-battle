#ifndef SEA_BATTLE_SHIP_H
#define SEA_BATTLE_SHIP_H

#include <vector>
#include <map>
#include <string>

class Ship {
public:
    enum class ship_orientation {Horizontal, Vertical};
    enum class segment_state {Destroyed, Damaged, Whole};
    Ship(int length);
    void set_coordinates(std::vector<std::pair<char, int>>& position);
    void set_orientation(char orientation);
    Ship::ship_orientation get_orientation() const;
    int get_length() const;
    bool is_hit(std::pair<char, int>& coordinate);
    bool is_segment_destroyed(std::pair<char, int>& coordinate);
    bool is_sunk();
    bool operator==(const Ship& other) const;
private:
    int length;
    Ship::ship_orientation orientation;
    std::map<std::pair<char, int>, Ship::segment_state> segments;
};



#endif
