#ifndef SEA_BATTLE_GAMESESSION_H
#define SEA_BATTLE_GAMESESSION_H

#include "AbstractPlayer.h"
#include "Player.h"
#include "Enemy.h"
#include "DisplayerCLI.h"

class GameSession {
public:
    GameSession(int field_size, int ships_count, const std::vector<int>& sizes);
    void start();
private:
    DisplayerCLI cli;
    Player player;
    Enemy enemy;
    ShipManager player_manager;
    ShipManager enemy_manager;
    Board player_board;
    Board enemy_board;
    bool execute_shot(AbstractPlayer& shooter, Board& board, ShipManager& manager);
};


#endif
