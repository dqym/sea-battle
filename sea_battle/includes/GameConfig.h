#ifndef SEA_BATTLE_GAMECONFIG_H
#define SEA_BATTLE_GAMECONFIG_H

#include <iostream>
#include <vector>

class GameConfig {
public:
    void read_data();
    int get_ships_count() const;
    const std::vector<int>& get_sizes() const;
    int get_field_size() const;
private:
    int field_size;
    int ships_count;
    std::vector<int> sizes;
};


#endif
