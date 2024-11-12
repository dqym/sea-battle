#ifndef SEA_BATTLE_DOUBLEDAMAGEABILITY_H
#define SEA_BATTLE_DOUBLEDAMAGEABILITY_H

#include "Ability.h"
#include "../DispatcherCLI.h"

class DoubleDamageAbility: public Ability {
public:
    DoubleDamageAbility(Board& opponent_board);
    void use() override;
    std::string get_name() override;
private:
    DispatcherCLI cli;
    Board& board;
};


#endif
