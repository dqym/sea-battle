#include "Board.h"
#include <sstream>

int main() {
    int count;
    std::vector<int> sizes;
    std::cout << "Enter ships count: ";
    std::cin >> count;
    std::cout << "Enter the size of each ship separated by a space: ";
    for (int i = 0; i < count; ++i) {
        int size;
        std::cin >> size;
        sizes.push_back(size);
    }

    ShipManager manager(int(sizes.size()), sizes);
    Board board(10, manager);
    std::vector<Ship>& ships = manager.get_ships();

    for (auto& ship : ships) {
        std::vector<std::pair<char, int>> coords;
        std::cout << "Enter orientation and coordinates for a ship of length " << ship.get_length()
                  << ": ";

        std::string input;
        std::getline(std::cin >> std::ws, input);
        std::stringstream ss(input);
        char orientation;
        ss >> orientation;

        for (int i = 0; i < ship.get_length(); ++i) {
            std::pair<char, int> position;
            std::string coord;
            ss >> coord;

            position.first = toupper(coord[0]);
            position.second = std::stoi(coord.substr(1));

            coords.push_back(position);
        }
        board.place_ship(ship, coords, toupper(orientation));
    }

    std::pair<char, int> a {'A', 9};
    std::pair<char, int> b {'B', 1};
    std::pair<char, int> c {'C', 1};
    std::pair<char, int> z {'A', 8};
    std::pair<char, int> v {'A', 7};
    board.shoot(a);
    manager.update();
//    board.shoot(a);
    manager.update();
//    board.shoot(z);
//    manager.update();
//    board.shoot(z);
//    manager.update();
//    board.shoot(v);
//    manager.update();
//    board.shoot(v);
    manager.update();
    board.display();

    return 0;
}
