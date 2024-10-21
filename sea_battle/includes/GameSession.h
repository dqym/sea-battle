#ifndef SEA_BATTLE_GAMESESSION_H
#define SEA_BATTLE_GAMESESSION_H

#include "TemplatePlayer.h"
#include "Player.h"
#include "Enemy.h"
#include "DisplayerCLI.h"

class GameSession {
public:
    void start();
    void read_data();
private:
    int field_size;
    int ships_count;
    std::vector<int> sizes;
    bool execute_shot(TemplatePlayer& shooter, Board& board, ShipManager& manager);
};


#endif
