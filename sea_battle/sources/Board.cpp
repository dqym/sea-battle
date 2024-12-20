#include "../includes/Board.h"


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

Board::Cell::Cell(): public_display('~'), actual_display('~'), segment(nullptr) {}

bool Board::place_ship(Ship& ship, std::vector<std::pair<char, int>>& coords, char orientation) {
    ship.set_orientation(orientation);
    try {
        validate_positions(ship, coords);
    } catch (GameException& exception) {
        console.print_error(exception.what());
        return false;
    }
    for (int i = 0; i < coords.size(); ++i) {
        int row = coords[i].second - 1;
        int col = letters_to_values[coords[i].first] - 1;
        field[row][col].actual_display = 'S';
        field[row][col].segment = &ship.get_segments()[i];
    }
    return true;
}

bool Board::have_ship(std::pair<char, int> coords) {
    try {
        int column = letters_to_values[coords.first] - 1;
        int row = coords.second - 1;
        if (row >= field.size() or column >= field.size()) {
            throw std::out_of_range("Out of range");
        }
        if (field[row][column].segment) {
            return true;
        }
        return false;
    } catch (std::exception &e) {
        return false;
    }
}

bool Board::shoot(std::pair<char, int>& coords, bool silent, int damage) {
    int row = coords.second - 1;
    int col = letters_to_values[coords.first] - 1;
    Cell* cell_ptr = nullptr;
    try {
        cell_ptr = &(field.at(row).at(col));
    } catch (std::out_of_range &e) {
        if (!silent) {
            console.print_error(OutOfBoundsAttackException().what());
        }
        return false;
    }
    Cell& cell = *cell_ptr;

    //actual_display -- для отрисовки союзного поля
    //public_display -- для отрисовки вражеского поля
    if (cell.segment) {
        for (int i = 0; i < damage; ++i) {
            cell.segment->hit();
        }
        if (!silent) {
            if (cell.segment->is_destroyed()) {
                cell.actual_display = 'X';
                cell.public_display = cell.actual_display;
                console.print(coords.first, coords.second, ": Segment destroyed.\n");
            } else {
                cell.actual_display = '!';
                cell.public_display = cell.actual_display;
                console.print(coords.first, coords.second, ": Target hit.\n");
            }
        }
    } else {
        if (!silent) {
            cell.actual_display = '*';
            cell.public_display = cell.actual_display;
            console.print(coords.first, coords.second, ": Miss.\n");
        }
        return false;
    }
    return true;
}

void Board::validate_positions(Ship& ship, std::vector<std::pair<char, int>>& coords) {
    std::vector<std::pair<int, int>> directions = {
            {-1, -1}, {-1, 0}, {-1, 1},
            { 0, -1}, { 0, 0}, { 0, 1},
            { 1, -1}, { 1, 0}, { 1, 1}
    };
    for (auto& coord_pair: coords) {
        if ((int)coord_pair.first > 90 or (int)coord_pair.first < 65 or coord_pair.second > 26
                or coord_pair.second < 1) {
            throw ShipPlacementException();
        }

        int column = letters_to_values[coord_pair.first] - 1; // [A:Z]
        int row = coord_pair.second - 1; // [0:26]

        if (row > field.size() - 1 or column > field.size() - 1){
            throw ShipPlacementException();
        }

        for (auto &dir: directions) {
            int temp_column = column + dir.second;
            int temp_row = row + dir.first;
            if (temp_row >= 0 && temp_column >= 0 && temp_row < field.size() && temp_column < field.size()) {
                if (field[temp_row][temp_column].actual_display == 'S') {
                    throw ShipPlacementException();
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

        if (unique_letters.size() != 1) {throw WrongShipCoordinatesException();}
        if (max - min != digits.size() - 1) {throw WrongShipCoordinatesException();}
        if (unique_digits.size() != digits.size()) {throw WrongShipCoordinatesException();}
    } else {
        int min = *std::min_element(letters.begin(), letters.end());
        int max = *std::max_element(letters.begin(), letters.end());

        if (unique_digits.size() != 1) {throw WrongShipCoordinatesException();}
        if (max - min != letters.size() - 1) {throw WrongShipCoordinatesException();}
        if (unique_letters.size() != letters.size()) {throw WrongShipCoordinatesException();}
    }
}

int Board::get_field_size() {
    return (int)field.size();
}

const Board::Cell& Board::get_cell(int x, int y) {
    return field[x][y];
}

void Board::serialize(std::ostream& os) {
    os << field.size() << "\n";
    for (int i = 0; i < field.size(); ++i) {
        for (int j = 0; j < field.size(); ++j) {
            os << field[i][j].actual_display << " " << field[i][j].public_display << " ";
            if (field[i][j].segment) {
                os << field[i][j].segment->get_id() << "\n";
            } else {
                os << -1 << '\n';
            }
        }
    }
}

void Board::deserialize(std::istream& is, ShipManager& manager) {
    int temp_size;
    is >> temp_size;
    field.resize(temp_size);
    for (int i = 0; i < temp_size; ++i) {
        field[i].resize(temp_size);
        for (int j = 0; j < temp_size; ++j) {
            int temp_id;
            is >> field[i][j].actual_display >> field[i][j].public_display >> temp_id;
            if (temp_id >= 0) {
                field[i][j].segment = manager.find_segment_by_id(temp_id);
            } else {
                field[i][j].segment = nullptr;
            }
        }
    }
}
