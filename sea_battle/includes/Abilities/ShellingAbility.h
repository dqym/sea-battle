#ifndef SEA_BATTLE_SHELLINGABILITY_H
#define SEA_BATTLE_SHELLINGABILITY_H

#include "Ability.h"

class ShellingAbility: public Ability {
public:
    ShellingAbility(Board& opponent_board);
    void use() override;
    std::string get_name() override;
    ~ShellingAbility() = default;
private:
    Board& board;
};

#endif
