#include "../includes/GameSession.h"

GameSession::GameSession(int field_size, int ships_count, const std::vector<int>& sizes)
    : player(field_size, ships_count, sizes), enemy(field_size, ships_count, sizes), abilities_manager(enemy) {}

void GameSession::start() {
    cli.display(player.get_board(), enemy.get_board());
    player.place_ships();
    if (!enemy.place_ships()) {
        std::cout << "The enemy was unable to position the ships!\nTry entering other data.\n";
        return;  //сомнительно но окей
    }

    std::cout << "\n";
    int i = 2;
    bool player_turn = true;
    while (!player.is_lose() and !enemy.is_lose()) {
        if (player_turn) {


            i--;
            if (i == 0) {
                std::cout << "Saved\n";
                std::ofstream os("game_save.txt");
                serialize(os);
            }
            if (i == -2) {
                std::cout << "Loaded\n";
                std::ifstream is("game_save.txt");
                deserialize(is);
            }

//            abilities_manager.use_ability();
            cli.message("Your turn -> ");
            execute_shot(player, enemy);
            if (enemy.update()) {
                abilities_manager.add_ability();
            }
        } else {
            std::cout << "Enemy turn -> ";
            execute_shot(enemy, player);
            player.update();
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
    return shooter.make_shot(target);
}

void GameSession::serialize(std::ostream& os) {
    player.serialize(os);
    enemy.serialize(os);
    abilities_manager.serialize(os);
}

void GameSession::deserialize(std::istream& is) {
    player.deserialize(is);
    enemy.deserialize(is);
    abilities_manager.deserialize(is, enemy.get_board());
}
