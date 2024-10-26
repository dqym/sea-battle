#include "../includes/Enemy.h"

Enemy::Enemy(int field_size, int ships_count, const std::vector<int>& sizes)
    : AbstractPlayer(field_size, ships_count, sizes) {}

bool Enemy::place_ships() {
    char orientations[] {'H', 'V'};
    std::random_device rd;   // non-deterministic generator
    std::mt19937 gen(rd());  // to seed mersenne twister.
    orient_range = std::uniform_int_distribution<> (0,1);
    letter_range = std::uniform_int_distribution<> (65,64 + board.get_field_size());
    digit_range = std::uniform_int_distribution<> (1,board.get_field_size());
    std::vector<Ship>& ships = manager.get_ships();

    for (auto& ship : ships) {
        bool placed = false;
        int attempts = 50;
        while (!placed and attempts > 0) {
            std::vector<std::pair<char, int>> coords;
            char orientation = orientations[orient_range(gen)];
            int digit = digit_range(gen);
            int letter_code = letter_range(gen);
            if (orientation == 'H') {
                for (int i = 0; i < ship.get_length(); ++i) {
                    coords.emplace_back((char)(letter_code + i), digit);
                }
            } else {
                for (int i = 0; i < ship.get_length(); ++i) {
                    coords.emplace_back((char)letter_code, digit + i);
                }
            }
            if (board.place_ship(ship, coords, orientation)) {
                placed = true;
            }
            attempts--;
        }
        if (attempts <= 0 and !placed){
            return false;
        }
    }
    return true;
}

bool Enemy::make_shot(Board& player_board) {
    std::random_device rd;
    std::mt19937 gen(rd());
    char letter = (char)letter_range(gen);
    int digit = digit_range(gen);

    std::pair coordinate(letter, digit);
    return player_board.shoot(coordinate);
}

