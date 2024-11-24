#ifndef SEA_BATTLE_DOUBLEDAMAGEABILITY_H
#define SEA_BATTLE_DOUBLEDAMAGEABILITY_H

#include "Ability.h"

class DoubleDamageAbility: public Ability {
public:
    DoubleDamageAbility(AbstractPlayer& player_ref);
    void use() override;
    std::string get_name() override;
    ~DoubleDamageAbility() = default;
private:
    AbstractPlayer& player;
};


#endif
