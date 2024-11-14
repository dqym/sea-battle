#ifndef SEA_BATTLE_GAMESESSION_H
#define SEA_BATTLE_GAMESESSION_H

#include "Players/Player.h"
#include "Players/Enemy.h"
#include "Abilities/AbilitiesManager.h"
#include <fstream>
#include <iostream>

class GameSession {
public:
    GameSession(int field_size, int ships_count, const std::vector<int>& sizes);
    void start();
    void serialize(std::ostream& os);
    void deserialize(std::istream& is);
private:
    DispatcherCLI cli;
    Player player;
    Enemy enemy;
    AbilitiesManager abilities_manager;
    bool execute_shot(AbstractPlayer& shooter, AbstractPlayer& target);
};


#endif
