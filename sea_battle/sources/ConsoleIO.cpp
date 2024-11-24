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
            print_error("Некорректный ввод. Ожидается формат: буква + число (например, A1).\n");
        }

        char letter = toupper(input[0]);
        if (letter < 'A' || letter > 'Z') {
            print_error("Некорректная буква. Используйте буквы от A до Z.\n");
        }

        std::string digit_str = input.substr(1);
        int digit;
        try {
            digit = std::stoi(digit_str);
        } catch (const std::exception &) {
            print_error("Некорректное число. Используйте цифры от 1 до 26.\n");
        }

        if (digit < 1 || digit > 26) {
            print_error("Число должно быть от 1 до 26.\n");
        }

        return std::make_pair(letter, digit);
    }
}
