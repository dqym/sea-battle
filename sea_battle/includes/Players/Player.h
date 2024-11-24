#ifndef SEA_BATTLE_PLAYER_H
#define SEA_BATTLE_PLAYER_H

#include "AbstractPlayer.h"

class Player: public AbstractPlayer{
public:
    Player(int field_size, int ships_count, const std::vector<int>& sizes);
    bool place_ships() override;
    bool make_shot(AbstractPlayer& opponent, std::optional<std::pair<char, int>> coords) override;
private:
    ConsoleIO console;
};


#endif
