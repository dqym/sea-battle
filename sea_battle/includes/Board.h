#ifndef SEA_BATTLE_BOARD_H
#define SEA_BATTLE_BOARD_H

#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include "ShipManager.h"

class Board {
public:
    struct Cell {
        Cell();
        Segment* segment;
        char actual_display;
        char public_display;
    };
    Board(int size);
    Board(const Board& other);
    Board(Board&& other) noexcept ;
    Board& operator=(const Board& other);
    Board& operator=(Board&& other) noexcept ;
    bool place_ship(Ship& ship, std::vector<std::pair<char, int>>& coords, char orientation);
    bool shoot(std::pair<char, int>& coords);
    int get_field_size();
    const Cell& get_cell(int x, int y);
private:
    std::map<char, int> letters_to_values {
            {'A', 1}, {'B', 2}, {'C', 3}, {'D', 4}, {'E', 5}, {'F', 6},
            {'G', 7}, {'H', 8}, {'I', 9}, {'J', 10}, {'K', 11}, {'L', 12},
            {'M', 13}, {'N', 14}, {'O', 15}, {'P', 16}, {'Q', 17}, {'R', 18},
            {'S', 19}, {'T', 20}, {'U', 21}, {'V', 22}, {'W', 23}, {'X', 24},
            {'Y', 25}, {'Z', 26}
    };
    std::vector<std::vector<Cell>> field;
    bool validate_positions(Ship& ship, std::vector<std::pair<char, int>>& coords);
};

#endif