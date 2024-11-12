#ifndef SEA_BATTLE_SCANNERABILITY_H
#define SEA_BATTLE_SCANNERABILITY_H

#include "Ability.h"
#include "../DispatcherCLI.h"

class ScannerAbility: public Ability {
public:
    ScannerAbility(Board& opponent_board);
    void use() override;
    std::string get_name() override;
private:
    DispatcherCLI cli;
    Board& board;
};


#endif
