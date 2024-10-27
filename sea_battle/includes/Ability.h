#ifndef SEA_BATTLE_ABILITY_H
#define SEA_BATTLE_ABILITY_H

#include "Board.h"
#include "ShipManager.h"
#include <optional>
#include <random>

class Ability {
public:
    virtual void use() = 0;
};

#endif
