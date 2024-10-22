#ifndef SEA_BATTLE_ABSTRACTPLAYER_H
#define SEA_BATTLE_ABSTRACTPLAYER_H

#include "ShipManager.h"
#include "Board.h"

class AbstractPlayer {
public:
    virtual bool place_ships(Board& board, ShipManager& manager) = 0;
    virtual bool make_shot(Board& opponent_board, ShipManager& opponent_manager) = 0;
};


#endif
