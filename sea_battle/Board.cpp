#include "Board.h"


Board::Board(int size) {
    for (int i = 0; i < size; ++i) {
        field.emplace_back();
        for (int j = 0; j < size; ++j) {
            field[i].emplace_back();
        }
    }
}

Board::Board(const Board &other): field(other.field) {}

Board::Board(Board &&other) noexcept: field(std::move(other.field)) {}

Board& Board::operator=(const Board& other) {
    if (this != &other) {
        field = other.field;
    }
    return *this;
}

Board& Board::operator=(Board&& other) noexcept {
    if (this != &other) {
        field = std::move(other.field);
    }
    return *this;
}

Board::Cell::Cell(): display('~'), segment(nullptr) {}

bool Board::place_ship(Ship& ship, std::vector<std::pair<char, int>>& coords, char orientation) {
    ship.set_orientation(orientation);
    if (!validate_positions(ship, coords)) {return false;}
    for (int i = 0; i < coords.size(); ++i) {
        int row = coords[i].second - 1;
        int col = letters_to_values[coords[i].first] - 1;
        field[row][col].display = 'S';
        field[row][col].segment = &ship.get_segments()[i];
    }
    return true;
}

bool Board::shoot(std::pair<char, int>& coords) {
    int row = coords.second - 1;
    int col = letters_to_values[coords.first] - 1;
    Cell* cell_ptr = nullptr;
    try {
        cell_ptr = &(field.at(row).at(col));
    } catch (std::out_of_range &e) {
        return false;
    }
    Cell& cell = *cell_ptr;

    if (cell.segment) {
        cell.segment->hit();
        if (cell.segment->is_destroyed()) {
            cell.display = 'X';
            std::cout << coords.first << coords.second << ": Segment destroyed.\n";
        } else {
            cell.display = '!';
            std::cout << coords.first << coords.second << ": Target hit.\n";
        }
    } else {
        cell.display = '*';
        std::cout << coords.first << coords.second << ": Miss.\n";
    }
    return true;
}

bool Board::validate_positions(Ship& ship, std::vector<std::pair<char, int>>& coords) {
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
                if (field[temp_row][temp_column].display == 'S') {
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
    if (ship.get_orientation() == Ship::ship_orientation::Vertical) {
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
        std::cout << "+ — ";
    }
    std::cout << "+\n";

    for (int i = 0; i < size; ++i) {
        std::cout << std::setw(2) << i + 1 << ". ";

        for (int j = 0; j < size; ++j) {
            std::cout << "| ";
            switch (field[i][j].display) {
                case 'S':
                    std::cout << "\033[1;32m";
                    break;
                case '~':
                    std::cout << "\033[1;34m";
                    break;
                case '!':
                    std::cout << "\033[1;33m";
                    break;
                case 'X':
                    std::cout << "\033[1;31m";
                    break;
            }
            std::cout << field[i][j].display << "\033[0m ";
        }
        std::cout << "|\n";

        std::cout << "    ";
        for (int j = 0; j < size; ++j) {
            std::cout << "+ — ";
        }
        std::cout << "+\n";
    }

    std::cout << "    ";
    for (int j = 0; j < size; ++j) {
        std::cout << "  " << letters[j] << " ";
    }
    std::cout << '\n';
}