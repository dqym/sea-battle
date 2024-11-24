#ifndef SEA_BATTLE_ENEMY_H
#define SEA_BATTLE_ENEMY_H

#include "AbstractPlayer.h"
#include <random>

class Enemy: public AbstractPlayer{
public:
    Enemy(int field_size, int ships_count, const std::vector<int>& sizes);
    bool place_ships() override;
    bool make_shot(AbstractPlayer& opponent, std::optional<std::pair<char, int>> coords) override;
private:
    std::uniform_int_distribution<> orient_range;
    std::uniform_int_distribution<> letter_range;
    std::uniform_int_distribution<> digit_range;
};


#endif
