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
#include "../ConsoleIO.h"

class AbilitiesManager {
public:
    AbilitiesManager(AbstractPlayer& player_ref, AbstractPlayer& enemy_ref);
    void add_ability();
    void use_ability();
    void serialize(std::ostream& os);
    void deserialize(std::istream& is);
private:
    std::deque<std::unique_ptr<Ability>> abilities;
    AbstractPlayer& player;
    AbstractPlayer& enemy;
    ConsoleIO console;
    AbilityFactory factory;
};


#endif