#include "../includes/ConsoleIO.h"

char ConsoleIO::get_char() {
    return (char)toupper(_getch());
}

bool ConsoleIO::char_available() {
    return _kbhit();
}

std::string ConsoleIO::get_line() {
    std::string input;
    std::getline(std::cin >> std::ws, input);
    return input;
}

std::pair<char, int> ConsoleIO::get_coordinate() {
    while (true) {
        std::string input;
        std::cin >> input;

        if (input.length() < 2 || input.length() > 3) {
            print_error("Invalid input. Expected format: letter + number (for example, A1).\n");
        }

        char letter = toupper(input[0]);
        if (letter < 'A' || letter > 'Z') {
            print_error("Invalid letter. Use letters A to Z.\n");
        }

        std::string digit_str = input.substr(1);
        int digit;
        try {
            digit = std::stoi(digit_str);
        } catch (const std::exception &) {
            print_error("Incorrect number. Use numbers from 1 to 26.\n");
        }

        if (digit < 1 || digit > 26) {
            print_error("The number must be from 1 to 26.\n");
        }

        return std::make_pair(letter, digit);
    }
}
