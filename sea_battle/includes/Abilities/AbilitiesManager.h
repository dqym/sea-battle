#ifndef SEA_BATTLE_ABILITIESMANAGER_H
#define SEA_BATTLE_ABILITIESMANAGER_H

#include <queue>
#include <random>
#include <memory>
#include "Ability.h"
#include "AbilityFactory.h"
#include "DoubleDamageAbility.h"
#include "ScannerAbility.h"
#include "ShellingAbility.h"
#include "../Players/AbstractPlayer.h"
#include "../Exceptions.h"
#include "../DispatcherCLI.h"

class AbilitiesManager {
public:
    AbilitiesManager(AbstractPlayer& enemy_ref);
    void add_ability();
    void use_ability();
    void serialize(std::ostream& os);
    void deserialize(std::istream& is, Board& board);
private:
    std::queue<std::unique_ptr<Ability>> abilities;
    AbstractPlayer& enemy;
    DispatcherCLI cli;
    AbilityFactory factory;
};


#endif
