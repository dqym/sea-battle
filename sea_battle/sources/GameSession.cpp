#include "../includes/GameSession.h"

void GameSession::start() {
    read_data();

    DisplayerCLI cli;
    Player player;
    Enemy enemy;
    ShipManager player_manager(ships_count, sizes);
    ShipManager enemy_manager(ships_count, sizes);
    Board player_board(field_size);
    Board enemy_board(field_size);

    player.place_ships(player_board, player_manager);
    if (!enemy.place_ships(enemy_board, enemy_manager)) {
        std::cout << "The enemy was unable to position the ships!\nTry entering other data.\n";
        start(); //сомнительно но окей
        return;
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

void GameSession::read_data() {
    std::cout << "Enter field size: ";
    bool field_size_is_correct = false;
    while(!field_size_is_correct){
        std::cin >> field_size;
        if (field_size > 26 or field_size < 1) {
            std::cout << "Field sizes should be in the range [1, 26]!\nTry again: ";
        } else {
            field_size_is_correct = true;
        }
    }

    std::cout << "Enter ships count: ";
    std::cin >> ships_count;

    std::cout << "Enter the size of each ship separated by a space: ";
    for (int i = 0; i < ships_count; ++i) {
        int size;
        std::cin >> size;
        sizes.push_back(size);
    }
}

bool GameSession::execute_shot(TemplatePlayer& shooter, Board& board, ShipManager& manager) {
    return shooter.make_shot(board, manager);
}
