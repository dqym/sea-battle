#ifndef SEA_BATTLE_ABILITY_H
#define SEA_BATTLE_ABILITY_H

#include "../Board.h"
#include "../ShipObject/ShipManager.h"
#include <optional>
#include <random>

class Ability {
public:
    virtual void use() = 0;
    virtual std::string get_name() = 0;
};

#endif
