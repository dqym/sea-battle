#include "../includes/AbilitiesManager.h"

AbilitiesManager::AbilitiesManager(AbstractPlayer& player1): player(player1) {
    add_ability();
}

void AbilitiesManager::add_ability() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> range(0, 2);
    int result = range(gen);

    switch (result) {
        case 0:
            abilities.emplace(std::make_unique<DoubleDamageAbility>(player));
            break;
        case 1:
            abilities.emplace(std::make_unique<ScannerAbility>(player));
            break;
        case 2:
            abilities.emplace(std::make_unique<ShellingAbility>(player));
            break;
    }
}

void AbilitiesManager::use_ability() {
    if (!abilities.empty()) {
        abilities.front()->use();
        abilities.pop();
    }
}
