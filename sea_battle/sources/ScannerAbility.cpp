#include "../includes/ScannerAbility.h"

ScannerAbility::ScannerAbility(Board& opponent_board): board(opponent_board) {}

void ScannerAbility::use() {
    std::pair<char, int> coordinate = cli.read_coordinate();
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
