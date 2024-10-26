#ifndef SEA_BATTLE_GAMESESSION_H
#define SEA_BATTLE_GAMESESSION_H

#include "Player.h"
#include "Enemy.h"
#include "AbilitiesManager.h"

class GameSession {
public:
    GameSession(int field_size, int ships_count, const std::vector<int>& sizes);
    void start();
private:
    DispatcherCLI cli;
    Player player;
    Enemy enemy;
    AbilitiesManager abilities_manager;
    bool execute_shot(AbstractPlayer& shooter, AbstractPlayer& target);
};


#endif
