#include "../../includes/Players/Player.h"

Player::Player(int field_size, int ships_count, const std::vector<int> &sizes)
    : AbstractPlayer(field_size, ships_count, sizes) {}

bool Player::place_ships() {
    std::vector<Ship>& ships = ship_manager.get_ships();

    for (auto& ship : ships) {
        bool placed = false;
        while (!placed) {
            std::vector<std::pair<char, int>> coords;

            console.print("Enter orientation and coordinates for a ship of length ",
                          ship.get_length(), ": ");
            std::string input = console.get_line();

            std::stringstream ss(input);
            char orientation;
            ss >> orientation;

            for (int i = 0; i < ship.get_length(); ++i) {
                std::pair<char, int> position;
                std::string coord;

                ss >> coord;
                if (coord.empty() || coord.size() < 2) {
                    console.print_error("Invalid input format.\n");
                    coords.clear();
                    continue;
                }

                position.first = toupper(coord[0]);
                try {
                    position.second = std::stoi(coord.substr(1));
                } catch (std::exception& e) {
                    console.print_error("Invalid coordinate.\n");
                    coords.clear();
                    continue;
                }

                coords.push_back(position);
            }

            if (coords.size() != ship.get_length()) {
                console.print_warning("Invalid number of coordinates.\n");
                continue;
            }

            if (!board.place_ship(ship, coords, toupper(orientation))) {
                console.print_warning("Cannot place here. Try again.\n");
            } else {
                placed = true;
            }
        }
    }
    return true;
}

bool Player::make_shot(AbstractPlayer& opponent, std::optional<std::pair<char, int>> coords) {
    if (coords) {
        return opponent.get_board().shoot(coords.value(), false, damage);
    }
    return false;
}
