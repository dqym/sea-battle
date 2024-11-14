#ifndef SEA_BATTLE_GAMECONTROLLER_H
#define SEA_BATTLE_GAMECONTROLLER_H

#include <iostream>

class GameController {
public:
    void save();
    void load();

    std::ostream& operator<<(const GameController& state);
    std::istream& operator>>(GameController& state);
};


#endif
