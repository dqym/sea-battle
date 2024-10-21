#include "../includes/GameSession.h"
#include "../includes/GameConfig.h"
#include <sstream>
#include "../includes/Enemy.h"


int main() {
    GameConfig config;
    config.read_data();
    GameSession session(config.get_field_size(), config.get_ships_count(), config.get_sizes());
    session.start();
    return 0;
}
