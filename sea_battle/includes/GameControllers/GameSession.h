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
    void run_game_step();
    void place_ships();
    bool use_ability();
    void make_player_turn(std::pair<char, int> coordinates);
    void make_enemy_turn();
    void serialize(std::ostream& os);
    void deserialize(std::istream& is);
private:
    bool execute_shot(AbstractPlayer& shooter, AbstractPlayer& target);
    bool player_turn;
    GameSetup setup;
    FieldRenderer field_renderer;
    DispatcherCLI cli;
    Player player;
    Enemy enemy;
    AbilitiesManager abilities_manager;
};


#endif
