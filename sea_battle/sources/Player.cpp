#include "../includes/Player.h"

bool Player::place_ships(Board& board, ShipManager& manager) {
    std::vector<Ship>& ships = manager.get_ships();

    for (auto& ship : ships) {
        bool placed = false;
        while (!placed) {
            std::vector<std::pair<char, int>> coords;
            std::cout << "Enter orientation and coordinates for a ship of length " << ship.get_length() << ": ";

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
            if (!board.place_ship(ship, coords, toupper(orientation))) {
                std::cout << "Cannot place here.\n";
            } else {
                placed = true;
            }
        }
    }
    return true;
}

bool Player::make_shot(Board& enemy_board, ShipManager& enemy_manager) {
    char letter;
    int digit;
    std::cin >> letter >> digit;
    letter = toupper(letter);

    std::pair coordinate(letter, digit);
    bool result = enemy_board.shoot(coordinate);
    enemy_manager.update();
    return result;
}
