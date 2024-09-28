
#include "Board.h"

int main() {
    std::vector<std::pair<char, int>> coords {{'A', 1}, {'B', 1}, {'C', 1}};
    std::vector<int> sizes {3};

    ShipManager manager(int(sizes.size()), sizes);
    Board board(10, manager);
    std::vector<Ship>& ships = manager.get_ships();

    for (auto& ship : ships) {
        board.place_ship(ship, coords);
    }
    std::pair<char, int> a {'A', 1};
    std::cout << board.shoot(a) << std::endl;
    board.display();
    std::cout << board.shoot(a) << std::endl;
    board.display();

    return 0;
}
