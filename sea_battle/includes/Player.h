#ifndef SEA_BATTLE_PLAYER_H
#define SEA_BATTLE_PLAYER_H

#include "AbstractPlayer.h"

class Player: public AbstractPlayer{
public:
    bool place_ships(Board& board, ShipManager& manager) override;
    bool make_shot(Board& enemy_board, ShipManager& enemy_manager) override;
};


#endif
