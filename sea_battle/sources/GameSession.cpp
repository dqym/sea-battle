#include "../includes/GameSession.h"

GameSession::GameSession(int field_size, int ships_count, const std::vector<int>& sizes)
    : player(field_size, ships_count, sizes), enemy(field_size, ships_count, sizes) {}

void GameSession::start() {
    cli.display(player.get_board(), enemy.get_board());
    player.place_ships();
    if (!enemy.place_ships()) {
        std::cout << "The enemy was unable to position the ships!\nTry entering other data.\n";
        return;  //сомнительно но окей
    }

    ScannerAbility skill(enemy); // TODO DELETE

    std::cout << "\n";
    bool player_turn = true;
    while (!player.is_lose() and !enemy.is_lose()) {
        skill.use();
        if (player_turn) {
            cli.message("Your turn -> ");
            execute_shot(player, enemy);
        } else {
            std::cout << "Enemy turn -> ";
            execute_shot(enemy, player);
        }
        cli.display(player.get_board(), enemy.get_board());
        player_turn = !player_turn;
    }
    if (player.is_lose()) {
        std::cout << "\033[1;31m Enemy win! \033[0m\n";
        return;
    } else {
        std::cout << "\033[1;32m You win! \033[0m\n";
        return;
    }
}

bool GameSession::execute_shot(AbstractPlayer& shooter, AbstractPlayer& target) {
    return shooter.make_shot(target.get_board(), target.get_ship_manager());
}
