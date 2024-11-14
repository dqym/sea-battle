#include "../../includes/Abilities/AbilityFactory.h"

std::unique_ptr<Ability> AbilityFactory::get_ability(const std::basic_string<char>& name, Board& board) {
    if (name == "Double damage") {
        return std::make_unique<DoubleDamageAbility>(board);
    } else if (name == "Scanner") {
        return std::make_unique<ScannerAbility>(board);
    } else if (name == "Shelling") {
        return std::make_unique<ShellingAbility>(board);
    }
    return nullptr;
}
