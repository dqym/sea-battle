#ifndef SEA_BATTLE_ABILITYFACTORY_H
#define SEA_BATTLE_ABILITYFACTORY_H

#include "ScannerAbility.h"
#include "ShellingAbility.h"
#include "DoubleDamageAbility.h"
#include <memory>
#include <string>

class AbilityFactory {
public:
    std::unique_ptr<Ability> get_ability(const std::basic_string<char>& name, Board& board);
};


#endif
