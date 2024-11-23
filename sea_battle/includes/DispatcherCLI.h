#ifndef SEA_BATTLE_DISPATCHERCLI_H
#define SEA_BATTLE_DISPATCHERCLI_H

#include "iostream"
#include "Board.h"

class DispatcherCLI {
public:
    template<class... Args>
    void message(Args... text){
        (std::cout << ... << text);
    }
};


#endif
