#ifndef SEA_BATTLE_ABSTRACTPLAYER_H
#define SEA_BATTLE_ABSTRACTPLAYER_H

#include "ShipManager.h"
#include "DispatcherCLI.h"
#include "Board.h"
#include "ShipManager.h"


class AbstractPlayer {
public:
    AbstractPlayer(int field_size, int ships_count, const std::vector<int>& sizes);
    virtual bool place_ships() = 0;
    virtual bool make_shot(Board& opponent_board, ShipManager& opponent_manager) = 0;
    virtual Board& get_board();
    virtual ShipManager& get_ship_manager();
    virtual bool is_lose();
protected:
    Board board;
    ShipManager manager;
};


#endif
