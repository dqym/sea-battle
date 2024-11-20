#include "../../includes/GameControllers/GameState.h"

GameState::GameState(GameSession& gameSession): session(gameSession) {}

bool GameState::save(const char* filename) {
    std::ofstream os(filename);
    if (os.is_open()) {
        os << *this;
        os.close();
        return true;
    }
    return false;
}

bool GameState::load(const char* filename) {
    std::ifstream is(filename);
    if (is.is_open()) {
        is >> *this;
        is.close();
        return true;
    }
    return false;
}

std::ostream& operator<<(std::ostream& os, const GameState& state) {
    state.session.serialize(os);
    return os;
}

std::istream& operator>>(std::istream& is, GameState& state) {
    state.session.deserialize(is);
    return is;
}
