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
    console.print("\033[2J\033[H");
    console.print("Your turn -> ");
    player.make_shot(enemy, coordinates);
    player.set_damage(1);
    if (enemy.update()) {
        abilities_manager.add_ability();
    }
    if (enemy.is_lose()) {
        console.print_success(" You win! Next round...\n");
        enemy = Enemy(setup.get_field_size(), setup.get_ships_count(), setup.get_sizes());
        enemy.place_ships();
    }

    console.print("Enemy turn -> ");
    enemy.make_shot(player, std::nullopt);
    player.update();
    if (player.is_lose()) {
        console.print_error(" Enemy win!\n");
        return GameSession::step_result::GameOver;
    }

    field_renderer.display(player.get_board(), enemy.get_board());

    return GameSession::step_result::PlayerAlive;
}

void GameSession::place_ships() {
    field_renderer.display(player.get_board(), enemy.get_board());
    player.place_ships();
    if (!enemy.place_ships()) {
        console.print_error("The enemy was unable to position the ships!\nTry entering other data.\n");
        return;
    }
    console.print("\n");
}

bool GameSession::use_ability() {
    try {
        abilities_manager.use_ability();
        return true;
    } catch (GameException& exception) {
        console.print(exception.what());
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
