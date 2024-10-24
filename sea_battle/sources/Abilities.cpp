#include "../includes/Abilities.h"

DoubleDamageAbility::DoubleDamageAbility(AbstractPlayer& opponent_player): enemy(opponent_player) {}

ScannerAbility::ScannerAbility(AbstractPlayer& opponent_player): enemy(opponent_player) {}

ShellingAbility::ShellingAbility(AbstractPlayer& opponent_player): enemy(opponent_player) {}

void DoubleDamageAbility::use() {
    std::pair<char, int> coordinate = cli.read_coordinate();
    bool res = enemy.get_board().shoot(coordinate);
    if (res) {
        enemy.get_board().shoot(coordinate);
    }
}

void ScannerAbility::use() {
    std::pair<char, int> coordinate = cli.read_coordinate();
    std::vector<std::pair<int, int>> directions = {
            {0, 0}, {1, 0},
            { 0, 1}, { 1, 1},
    };

    bool anything_find = false;
    for (auto& pos : directions) {
        std::pair<char, int> temp_coords((char)((int)coordinate.first+pos.first), coordinate.second+pos.second);
        if (enemy.get_board().have_ship(temp_coords)) {
            cli.message("Scanner: Ship scouted in ", temp_coords.first, temp_coords.second, "\n");
            anything_find = true;
        }
    }
    if (!anything_find) {
        cli.message("Scanner: Nothing found\n");
    }
}

void ShellingAbility::use() {
    int size = enemy.get_board().get_field_size();
    bool hit = false;
    std::uniform_int_distribution<> letter (65,64 + size);
    std::uniform_int_distribution<> digit (1, size);

    while (!hit) {
        std::random_device rd;
        std::mt19937 gen(rd());

        std::pair<char, int> coordinate((char)(letter(gen)), digit(gen));
        if (enemy.get_board().have_ship(coordinate)) {
            enemy.get_board().shoot(coordinate, true);
            hit = true;
        }
    }
}


