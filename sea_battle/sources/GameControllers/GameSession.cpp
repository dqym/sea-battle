#include "../../includes/GameControllers/GameSession.h"

GameSession::GameSession()
    : player(0, 0, {}),
    enemy(0, 0, {}), abilities_manager(player, enemy) {}

GameSession::GameSession(GameSetup& gameSetup)
    : setup(gameSetup),
    player(setup.get_field_size(), setup.get_ships_count(), setup.get_sizes()),
    enemy(setup.get_field_size(), setup.get_ships_count(), setup.get_sizes()),
    abilities_manager(player, enemy) {}

GameSession::step_result GameSession::run_game_step(std::pair<char, int> coordinates) {
    std::cout << "\033[2J\033[H" << std::flush;
    cli.message("Your turn -> ");
    player.make_shot(enemy, coordinates);
    player.set_damage(1);
    if (enemy.update()) {
        abilities_manager.add_ability();
    }

    std::cout << "Enemy turn -> ";
    enemy.make_shot(player, std::nullopt);
    player.update();

    field_renderer.display(player.get_board(), enemy.get_board());

    if (enemy.is_lose()) {
        std::cout << "\033[1;32m You win! Next round... \033[0m\n";
        enemy = Enemy(setup.get_field_size(), setup.get_ships_count(), setup.get_sizes());
        enemy.place_ships();
    }

    if (player.is_lose()) {
        std::cout << "\033[1;31m Enemy win! \033[0m\n";
        return GameSession::step_result::GameOver;
    }
    return GameSession::step_result::PlayerAlive;
}

void GameSession::place_ships() {
    field_renderer.display(player.get_board(), enemy.get_board());
    player.place_ships();
    if (!enemy.place_ships()) {
        std::cout << "The enemy was unable to position the ships!\nTry entering other data.\n";
        return;  //сомнительно но окей
    }

    std::cout << "\n";
}

bool GameSession::use_ability() {
    try {
        abilities_manager.use_ability();
        return true;
    } catch (GameException& exception) {
        cli.message(exception.what());
        return false;
    }
}

void GameSession::serialize(std::ostream& os) {
    setup.serialize(os);
    player.serialize(os);
    enemy.serialize(os);
    abilities_manager.serialize(os);
}

void GameSession::deserialize(std::istream& is) {
    setup.deserialize(is);
    player.deserialize(is);
    enemy.deserialize(is);
    abilities_manager.deserialize(is);
}
