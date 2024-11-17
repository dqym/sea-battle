#ifndef SEA_BATTLE_DOUBLEDAMAGEABILITY_H
#define SEA_BATTLE_DOUBLEDAMAGEABILITY_H

#include "Ability.h"
#include "../DispatcherCLI.h"

class DoubleDamageAbility: public Ability {
public:
    DoubleDamageAbility(AbstractPlayer& player_ref);
    void use() override;
    std::string get_name() override;
    ~DoubleDamageAbility() = default;
private:
    DispatcherCLI cli;
    AbstractPlayer& player;
};


#endif
