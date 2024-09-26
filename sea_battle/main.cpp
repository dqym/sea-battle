#include <iostream>

#include "Board.h"

int main() {
    Board board1(10);
    Ship ship(3);
    std::vector<std::pair<char, int>> sizes {{'A', 1}, {'B', 1}, {'C', 1}};
    board1.place_ship(ship, sizes);
    board1.display();
    return 0;
}
