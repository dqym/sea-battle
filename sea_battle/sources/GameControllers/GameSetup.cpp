#include "../../includes/GameControllers/GameSetup.h"

void GameSetup::read_start_data() {
    std::cout << "Enter field size: ";
    bool field_size_is_correct = false;
    while(!field_size_is_correct){
        std::cin >> field_size;
        if (field_size > 26 or field_size < 1) {
            std::cout << "Field sizes should be in the range [1, 26]!\nTry again: ";
        } else {
            field_size_is_correct = true;
        }
    }

    std::cout << "Enter ships count: ";
    std::cin >> ships_count;

    std::cout << "Enter the size of each ship separated by a space: ";
    for (int i = 0; i < ships_count; ++i) {
        int size;
        std::cin >> size;
        sizes.push_back(size);
    }
}

int GameSetup::get_ships_count() {
    return ships_count;
}

const std::vector<int>& GameSetup::get_sizes() {
    return sizes;
}

int GameSetup::get_field_size() {
    return field_size;
}

void GameSetup::serialize(std::ostream& os) {
    os << field_size << " " << ships_count << " ";
    for (auto& size : sizes) {
        os << size << " ";
    }
    os << "\n";
}

void GameSetup::deserialize(std::istream& is){
    is >> field_size >> ships_count;
    sizes.resize(ships_count);
    for (int i = 0; i < ships_count; ++i) {
        is >> sizes[i];
    }
}
