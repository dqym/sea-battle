#ifndef SEA_BATTLE_GAMESETUP_H
#define SEA_BATTLE_GAMESETUP_H

#include "../ConsoleIO.h"
#include <iostream>
#include <vector>

class GameSetup {
public:
    void read_start_data();
    int get_ships_count();
    const std::vector<int>& get_sizes();
    int get_field_size();
    void serialize(std::ostream& os);
    void deserialize(std::istream& is);
private:
    int field_size;
    int ships_count;
    std::vector<int> sizes;
    ConsoleIO console;
};


#endif
