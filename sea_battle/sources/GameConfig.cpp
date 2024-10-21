#include "../includes/GameConfig.h"

void GameConfig::read_data() {
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

int GameConfig::get_ships_count() const {
    return ships_count;
}

const std::vector<int>& GameConfig::get_sizes() const {
    return sizes;
}

int GameConfig::get_field_size() const {
    return field_size;
}
