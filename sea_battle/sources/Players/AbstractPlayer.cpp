#include "../../includes/Players/AbstractPlayer.h"

AbstractPlayer::AbstractPlayer(int field_size, int ships_count, const std::vector<int>& sizes)
    : board(field_size), ship_manager(ships_count, sizes) {}

bool AbstractPlayer::update() {return ship_manager.check_ships();}

Board& AbstractPlayer::get_board() {return board;}

ShipManager& AbstractPlayer::get_ship_manager() {return ship_manager;}

bool AbstractPlayer::is_lose() {return ship_manager.is_all_ships_destroyed();}

void AbstractPlayer::serialize(std::ostream& os) {
    ship_manager.serialize(os);
    board.serialize(os);
}

void AbstractPlayer::deserialize(std::istream& is) {
    ship_manager.deserialize(is);
    board.deserialize(is, ship_manager);
}