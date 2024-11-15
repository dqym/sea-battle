#include "../includes/DispatcherCLI.h"

std::pair<char, int> DispatcherCLI::read_coordinate() {
    char letter;
    int digit;
    std::cin >> letter >> digit;
    letter = toupper(letter);

    std::pair coordinate(letter, digit);
    return coordinate;
}
