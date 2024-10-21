#ifndef SEA_BATTLE_PLAYER_H
#define SEA_BATTLE_PLAYER_H

#include "TemplatePlayer.h"

class Player: public TemplatePlayer{
public:
    bool place_ships(Board& board, ShipManager& manager) override;
    bool make_shot(Board& enemy_board, ShipManager& enemy_manager) override;
};


#endif
