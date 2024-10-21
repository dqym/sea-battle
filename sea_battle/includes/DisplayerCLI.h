#ifndef SEA_BATTLE_DISPLAYERCLI_H
#define SEA_BATTLE_DISPLAYERCLI_H

#include "Board.h"

class DisplayerCLI {
public:
    void display(Board& board, bool is_enemy=false) const;
};


#endif
