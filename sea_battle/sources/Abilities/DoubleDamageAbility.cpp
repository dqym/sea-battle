#include "../../includes/Abilities/DoubleDamageAbility.h"

DoubleDamageAbility::DoubleDamageAbility(Board& opponent_board): board(opponent_board) {}

void DoubleDamageAbility::use() {
    std::pair<char, int> coordinate = cli.read_coordinate();
    board.shoot(coordinate, false, 2);
}

std::string DoubleDamageAbility::get_name() {return "Double damage";}
