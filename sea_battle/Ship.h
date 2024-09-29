#ifndef SEA_BATTLE_SHIP_H
#define SEA_BATTLE_SHIP_H

#include <vector>
#include <map>
#include <string>

class Ship {
private:
    enum class segment_state {Destroyed, Damaged, Whole};
    int length;
    bool vertical;
    std::map<std::pair<char, int>, segment_state> segments;
public:
    Ship(int l, bool orientation);
    void set_coordinate(std::pair<char, int>& position);
    void set_orientation(bool orientation);
    int get_length() const;
    bool is_hit(std::pair<char, int>& coordinate);
    bool is_segment_destroyed(std::pair<char, int>& coordinate);
    bool is_sunk();
    bool is_vertical() const;
    bool operator==(const Ship& other) const;
};



#endif
