#include "../../includes/Abilities/AbilitiesManager.h"

AbilitiesManager::AbilitiesManager(AbstractPlayer& player_ref, AbstractPlayer& enemy_ref)
    : player(player_ref), enemy(enemy_ref) {
    factory.register_ability<DoubleDamageAbility>("Double-damage", [](void* object) {
        return std::make_unique<DoubleDamageAbility>(*static_cast<AbstractPlayer*>(object));
    });

    factory.register_ability<ScannerAbility>("Scanner", [](void* object) {
        return std::make_unique<ScannerAbility>(*static_cast<Board*>(object));
    });

    factory.register_ability<ShellingAbility>("Shelling", [](void* object) {
        return std::make_unique<ShellingAbility>(*static_cast<Board*>(object));
    });
    add_ability();
}

void AbilitiesManager::add_ability() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> range(0, 2);
    int result = range(gen);

    switch (result) {
        case 0:
            abilities.push_front(factory.create_ability("Double-damage", &player));
            break;
        case 1:
            abilities.push_front(factory.create_ability("Scanner", &enemy.get_board()));
            break;
        case 2:
            abilities.push_front(factory.create_ability("Shelling", &enemy.get_board()));
            break;
    }
}

void AbilitiesManager::use_ability() {
    if (!abilities.empty()) {
        cli.message("Now using: ", abilities.front()->get_name(), " ability.\n");
        abilities.front()->use();
        abilities.pop_front();
    } else {
        throw AbilityUnavailableException();
    }
}

void AbilitiesManager::serialize(std::ostream& os) {
    os << abilities.size() << '\n';
    for (const auto& ability : abilities) {
        os << ability->get_name() << '\n';
    }
}

void AbilitiesManager::deserialize(std::istream& is) {
    int abilities_count;
    is >> abilities_count;
    abilities = std::deque<std::unique_ptr<Ability>>{};
    for (int i = 0; i < abilities_count; ++i) {
        std::string name;
        is >> name;
        if (name == "Double-damage"){
            abilities.push_front(factory.create_ability(name, &player));
        } else {
            abilities.push_front(factory.create_ability(name, &enemy.get_board()));
        }
    }
}