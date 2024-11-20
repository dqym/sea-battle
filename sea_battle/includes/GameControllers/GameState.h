#ifndef SEA_BATTLE_GAMESTATE_H
#define SEA_BATTLE_GAMESTATE_H

#include "GameSession.h"
#include <iostream>
#include <fstream>
#include <vector>

class GameState {
public:
    GameState(GameSession& gameSession);

    bool save(const char* filename);
    bool load(const char* filename);

    friend std::ostream& operator<<(std::ostream& os, const GameState& state);
    friend std::istream& operator>>(std::istream& is, GameState& state);
private:
    GameSession& session;
};

#endif
