#ifndef SEA_BATTLE_ABILITIESMANAGER_H
#define SEA_BATTLE_ABILITIESMANAGER_H

#include "queue"
#include "Abilities.h"
#include <random>
#include <memory>

class AbilitiesManager {
public:
    AbilitiesManager(AbstractPlayer& player1);
    void add_ability();
    void use_ability();
private:
    std::queue<std::unique_ptr<Ability>> abilities;
    AbstractPlayer& player;
};


#endif
