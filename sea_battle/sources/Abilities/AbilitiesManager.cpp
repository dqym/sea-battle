#include "../../includes/Abilities/AbilitiesManager.h"

AbilitiesManager::AbilitiesManager(AbstractPlayer& enemy_ref): enemy(enemy_ref) {add_ability();}

void AbilitiesManager::add_ability() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> range(1, 1);
    int result = range(gen);

    switch (result) {
        case 0:
            abilities.push_front(factory.get_ability("Double damage", enemy.get_board()));
            break;
        case 1:
            abilities.push_front(factory.get_ability("Scanner", enemy.get_board()));
            break;
        case 2:
            abilities.push_front(factory.get_ability("Shelling", enemy.get_board()));
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

void AbilitiesManager::deserialize(std::istream& is, Board& board) {
    int abilities_count;
    is >> abilities_count;
    abilities = std::deque<std::unique_ptr<Ability>>{};
    for (int i = 0; i < abilities_count; ++i) {
        std::string name;
        is >> name;
        abilities.push_front(factory.get_ability(name, board));
    }
}
