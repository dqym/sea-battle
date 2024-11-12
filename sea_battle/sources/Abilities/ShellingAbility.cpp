#include "../../includes/Abilities/ShellingAbility.h"

ShellingAbility::ShellingAbility(Board& opponent_board): board(opponent_board) {}

void ShellingAbility::use() {
    int size = board.get_field_size();
    bool hit = false;
    std::uniform_int_distribution<> letter (65,64 + size);
    std::uniform_int_distribution<> digit (1, size);

    while (!hit) {
        std::random_device rd;
        std::mt19937 gen(rd());

        std::pair<char, int> coordinate((char)(letter(gen)), digit(gen));
        if (board.have_ship(coordinate)) {
            board.shoot(coordinate, true);
            hit = true;
        }
    }
}

std::string ShellingAbility::get_name() {return "Shelling";}
