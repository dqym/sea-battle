#include "../../includes/Abilities/AbilitiesManager.h"

AbilitiesManager::AbilitiesManager(AbstractPlayer& enemy_ref): enemy(enemy_ref) {add_ability();}

void AbilitiesManager::add_ability() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> range(0, 2);
    int result = range(gen);

    switch (result) {
        case 0:
            abilities.emplace(std::make_unique<DoubleDamageAbility>(enemy.get_board()));
            break;
        case 1:
            abilities.emplace(std::make_unique<ScannerAbility>(enemy.get_board()));
            break;
        case 2:
            abilities.emplace(std::make_unique<ShellingAbility>(enemy.get_board()));
            break;
    }
}

void AbilitiesManager::use_ability() {
    try {
        if (!abilities.empty()) {
            cli.message("Now using: ", abilities.front()->get_name(), " ability.\n");
            abilities.front()->use();
            abilities.pop();
        } else {
            throw AbilityUnavailableException();
        }
    } catch (GameException& exception) {
        cli.message(exception.what());
    }
}
