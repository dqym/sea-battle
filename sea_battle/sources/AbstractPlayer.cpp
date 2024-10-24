#include "../includes/AbstractPlayer.h"

AbstractPlayer::AbstractPlayer(int field_size, int ships_count, const std::vector<int> &sizes)
    : board(field_size), manager(ships_count, sizes) {}

Board& AbstractPlayer::get_board() {return board;}

ShipManager& AbstractPlayer::get_ship_manager() {return manager;}

bool AbstractPlayer::is_lose() {return manager.is_all_ships_destroyed();}
