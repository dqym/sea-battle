#ifndef SEA_BATTLE_ABILITIES_H
#define SEA_BATTLE_ABILITIES_H

#include "Board.h"
#include "AbstractPlayer.h"
#include "ShipManager.h"
#include <optional>
#include <random>

class Ability {
public:
    virtual void use() = 0;
};

class DoubleDamageAbility: public Ability {
public:
    DoubleDamageAbility(Board& opponent_board);
    void use() override;
private:
    DispatcherCLI cli;
    Board& board;
};

class ScannerAbility: public Ability {
public:
    ScannerAbility(Board& opponent_board);
    void use() override;
private:
    DispatcherCLI cli;
    Board& board;
};

class ShellingAbility: public Ability {
public:
    ShellingAbility(Board& opponent_board);
    void use() override;
private:
    Board& board;
};

#endif
