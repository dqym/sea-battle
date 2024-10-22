#include "../includes/GameSession.h"

GameSession::GameSession(int field_size, int ships_count, const std::vector<int>& sizes)
        : player_manager(ships_count, sizes),
          enemy_manager(ships_count, sizes),
          player_board(field_size),
          enemy_board(field_size) {}

void GameSession::start() {
    cli.display(player_board, enemy_board);
    player.place_ships(player_board, player_manager);
    if (!enemy.place_ships(enemy_board, enemy_manager)) {
        std::cout << "The enemy was unable to position the ships!\nTry entering other data.\n";
        return;  //сомнительно но окей
    }

    std::cout << "\n";
    bool player_turn = true;
    while (!player_manager.is_all_ships_destroyed() and !enemy_manager.is_all_ships_destroyed()) {
        if (player_turn) {
            std::cout << "Your turn -> ";
            execute_shot(player, enemy_board, enemy_manager);
        } else {
            std::cout << "Enemy turn -> ";
            execute_shot(enemy, player_board, player_manager);
        }
        cli.display(player_board, enemy_board);
        player_turn = !player_turn;
    }
    if (player_manager.is_all_ships_destroyed()) {
        std::cout << "\033[1;31m Enemy win! \033[0m\n";
        return;
    } else {
        std::cout << "\033[1;32m You win! \033[0m\n";
        return;
    }
}

bool GameSession::execute_shot(AbstractPlayer& shooter, Board& board, ShipManager& manager) {
    return shooter.make_shot(board, manager);
}
