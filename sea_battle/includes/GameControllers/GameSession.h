#ifndef SEA_BATTLE_GAMESESSION_H
#define SEA_BATTLE_GAMESESSION_H

#include "../Players/Player.h"
#include "../Players/Enemy.h"
#include "../Abilities/AbilitiesManager.h"
#include "../ConsoleRenderer.h"
#include "../FieldRenderer.h"
#include "GameSetup.h"
#include <fstream>
#include <iostream>

class GameSession {
public:
    enum class step_result {GameOver, PlayerAlive};
    GameSession();
    GameSession(GameSetup& gameSetup);
    GameSession::step_result run_game_step(std::pair<char, int> coordinates);
    void place_ships();
    bool use_ability();
    void serialize(std::ostream& os);
    void deserialize(std::istream& is);
private:
    GameSetup setup;
    FieldRenderer<ConsoleRenderer> field_renderer;
    DispatcherCLI cli;
    Player player;
    Enemy enemy;
    AbilitiesManager abilities_manager;
};


#endif
