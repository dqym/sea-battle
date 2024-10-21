#ifndef SEA_BATTLE_ENEMY_H
#define SEA_BATTLE_ENEMY_H

#include "TemplatePlayer.h"
#include <random>

class Enemy: public TemplatePlayer{
public:
    bool place_ships(Board& board, ShipManager& manager) override;
    bool make_shot(Board& player_board, ShipManager& player_manager) override;
private:
    std::uniform_int_distribution<> orient_range;
    std::uniform_int_distribution<> letter_range;
    std::uniform_int_distribution<> digit_range;
};


#endif
