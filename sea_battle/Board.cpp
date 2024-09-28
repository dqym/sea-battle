#include "Board.h"


Board::Board(int size, ShipManager& ship_manager): ship_manager(ship_manager) {
    for (int i = 0; i < size; ++i) {
        field.emplace_back();
        for (int j = 0; j < size; ++j) {
            field[i].push_back('~');
        }
    }
}

bool Board::place_ship(Ship& ship, std::vector<std::pair<char, int>>& coords) {
    if (!validate_positions(ship, coords)) {return false;}
    for (auto& coord_pair: coords) {
        int letter_conv = letters_to_values[coord_pair.first];
        field[coord_pair.second-1][letter_conv-1] = 'S';
    }
    ship_manager.set_coordinates(ship, coords);
    return true;
}

bool Board::shoot(std::pair<char, int>& coords) {
    std::pair<bool, bool> result = ship_manager.is_hit(coords);
    int letter_conv = letters_to_values[coords.first];
    if (result.first and !result.second) {
        std::cout << coords.first << coords.second << ": Target hit.\n";
        field[coords.second-1][letter_conv-1] = '!';
        return true;
    } else if (result.first && result.second) {
        std::cout << coords.first << coords.second << ": Target destroyed.\n";
        field[coords.second-1][letter_conv-1] = 'X';
        return true;
    } else {
        std::cout << coords.first << coords.second << ": Miss.\n";
        return false;
    }
}

bool Board::validate_positions(const Ship& ship, std::vector<std::pair<char, int>>& coords) {
    std::vector<std::pair<int, int>> directions = {
            {-1, -1}, {-1, 0}, {-1, 1},
            { 0, -1}, { 0, 0}, { 0, 1},
            { 1, -1}, { 1, 0}, { 1, 1}
    };
    for (auto& coord_pair: coords) {
        int column = letters_to_values[coord_pair.first] - 1;
        int row = coord_pair.second - 1;

        for (auto &dir: directions) {
            int temp_column = column + dir.second;
            int temp_row = row + dir.first;
            if (temp_row >= 0 && temp_column >= 0 && temp_row < field.size() && temp_column < field.size()) {
                if (field[temp_row][temp_column] == 'S') {
                    return false;
                }
            }
        }
    }

    std::vector<char> letters;
    std::vector<int> digits;
    for (auto [letter, digit] : coords) {
        digits.push_back(digit);
        letters.push_back(letter);
    }
    std::set<int> unique_digits(digits.begin(), digits.end());
    std::set<char> unique_letters(letters.begin(), letters.end());
    if (ship.is_vertical()) {
        int min = *std::min_element(digits.begin(), digits.end());
        int max = *std::max_element(digits.begin(), digits.end());

        if (unique_letters.size() != 1) {return false;}
        if (max - min != digits.size() - 1) {return false;}
        if (unique_digits.size() != digits.size()) {return false;}
    } else {
        int min = *std::min_element(letters.begin(), letters.end());
        int max = *std::max_element(letters.begin(), letters.end());

        if (unique_digits.size() != 1) {return false;}
        if (max - min != letters.size() - 1) {return false;}
        if (unique_letters.size() != letters.size()) {return false;}
    }
    return true;
}

void Board::display() const {
    int size = field.size();
    char letters[] {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
                    'L','M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
                    'V', 'W', 'X','Y', 'Z'};

    std::cout << "    ";
    for (int j = 0; j < size; ++j) {
        std::cout << "+---";
    }
    std::cout << "+\n";

    for (int i = 0; i < size; ++i) {
        std::cout << std::setw(2) << i + 1 << ". ";

        for (int j = 0; j < size; ++j) {
            std::cout << "| " << field[i][j] << ' ';
        }
        std::cout << "|\n";

        std::cout << "    ";
        for (int j = 0; j < size; ++j) {
            std::cout << "+---";
        }
        std::cout << "+\n";
    }

    std::cout << "    ";
    for (int j = 0; j < size; ++j) {
        std::cout << "  " << letters[j] << " ";
    }
    std::cout << '\n';
}