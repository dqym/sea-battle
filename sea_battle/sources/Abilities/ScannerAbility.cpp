#include "../../includes/Abilities/ScannerAbility.h"

ScannerAbility::ScannerAbility(Board& opponent_board): board(opponent_board) {}

void ScannerAbility::use() {
    char letter;
    int digit;
    std::cin >> letter >> digit;
    std::pair<char, int> coordinate{toupper(letter), digit};
    std::vector<std::pair<int, int>> directions = {
            {0, 0}, {1, 0},
            { 0, 1}, { 1, 1},
    };

    bool anything_find = false;
    for (auto& pos : directions) {
        std::pair<char, int> temp_coords((char)((int)coordinate.first+pos.first), coordinate.second+pos.second);
        if (board.have_ship(temp_coords)) {
            cli.message("Scanner: Ship scouted in ", temp_coords.first, temp_coords.second, "\n");
            anything_find = true;
        }
    }
    if (!anything_find) {
        cli.message("Scanner: Nothing found\n");
    }
}

std::string ScannerAbility::get_name() {return "Scanner";}
