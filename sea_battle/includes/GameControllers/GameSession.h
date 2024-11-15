#ifndef SEA_BATTLE_GAMESESSION_H
#define SEA_BATTLE_GAMESESSION_H

#include "../Players/Player.h"
#include "../Players/Enemy.h"
#include "../Abilities/AbilitiesManager.h"
#include "../FieldRenderer.h"
#include "GameSetup.h"
#include <fstream>
#include <iostream>

class GameSession {
public:
    GameSession();
    GameSession(GameSetup& gameSetup);
    void run_game_loop();
    void place_ships();
    bool execute_shot(AbstractPlayer& shooter, AbstractPlayer& target);
    bool use_ability();
    void serialize(std::ostream& os);
    void deserialize(std::istream& is);
private:
    GameSetup setup;
    FieldRenderer field_renderer;
    DispatcherCLI cli;
    Player player;
    Enemy enemy;
    AbilitiesManager abilities_manager;
};


#endif
