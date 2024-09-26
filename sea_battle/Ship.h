#ifndef SEA_BATTLE_SHIP_H
#define SEA_BATTLE_SHIP_H

#include <vector>
#include <map>
#include <string>

class Ship {
private:
    int length;
    std::map<std::pair<char, int>, int> segments;
public:
    Ship(int l);
    void set_coords(std::vector<std::pair<char, int>> coords);
    bool is_hit(std::pair<char, int>& coords);
    bool is_sunk();
};



#endif
