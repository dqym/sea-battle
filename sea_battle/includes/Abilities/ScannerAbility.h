#ifndef SEA_BATTLE_SCANNERABILITY_H
#define SEA_BATTLE_SCANNERABILITY_H

#include "Ability.h"
#include "../ConsoleIO.h"
#include "../CLIHandler.h"

class ScannerAbility: public Ability {
public:
    ScannerAbility(Board& opponent_board);
    void use() override;
    std::string get_name() override;
    ~ScannerAbility() = default;
private:
    ConsoleIO console;
    Board& board;
};


#endif
