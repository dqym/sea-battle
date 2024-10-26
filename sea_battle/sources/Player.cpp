#include "../includes/Player.h"

Player::Player(int field_size, int ships_count, const std::vector<int> &sizes)
    : AbstractPlayer(field_size, ships_count, sizes) {}

bool Player::place_ships() {
    std::vector<Ship>& ships = ship_manager.get_ships();

    for (auto& ship : ships) {
        bool placed = false;
        while (!placed) {
            std::vector<std::pair<char, int>> coords;
            cli.message("Enter orientation and coordinates for a ship of length ", ship.get_length(), ": ");

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

bool Player::make_shot(AbstractPlayer& opponent) {
    std::pair<char, int> coordinate = cli.read_coordinate();
    return opponent.get_board().shoot(coordinate);
}
