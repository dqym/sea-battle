#include "../../includes/Abilities/DoubleDamageAbility.h"

DoubleDamageAbility::DoubleDamageAbility(Board& opponent_board): board(opponent_board) {}

void DoubleDamageAbility::use() {
    std::pair<char, int> coordinate = cli.read_coordinate();
    bool res = board.shoot(coordinate);
    if (res) {
        board.shoot(coordinate);
    }
}

std::string DoubleDamageAbility::get_name() {return "Double damage";}