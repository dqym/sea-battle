#include "Board.h"


Board::Board(int size) {
    for (int i = 0; i < size; ++i) {
        field.emplace_back();
        for (int j = 0; j < size; ++j) {
            field[i].push_back('~');
        }
    }
}

void Board::place_ship(Ship& ship, std::vector<std::pair<char, int>>& coords) {
        for (auto& coord_pair: coords) {
        int letter_conv = letters_to_values[coord_pair.first];
        field[coord_pair.second-1][letter_conv-1] = 'S';
    }
    ship.set_coords(coords);
    ships.push_back(ship);
}

bool Board::shoot(std::pair<char, int>& coords) {
    int letter_conv = letters_to_values[coords.first];
    return field[coords.second-1][letter_conv-1] == 'S';
}

bool Board::validate_positions(std::vector<std::pair<char, int>>& coords) {
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