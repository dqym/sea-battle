#include "../includes/CLIHandler.h"

CommandHandler::command CLIHandler::read_command() {
    while (true) {
        if (_kbhit()) {
            char key = (char)_getch();
            switch (key) {
                case 's':
                    return CommandHandler::command::CallGameStep;
                case 'a':
                    return CommandHandler::command::CallAbility;
                case 'o':
                    return CommandHandler::command::CallSave;
                case 'p':
                    return CommandHandler::command::CallLoad;
                case 'q':
                    return CommandHandler::command::CallExit;
                default:
                    return CommandHandler::command::Unknown;
            }
        }
    }
}

std::pair<char, int> CLIHandler::read_coordinate() {
    char letter;
    int digit;
    std::cin >> letter >> digit;
    letter = toupper(letter);

    std::pair coordinate(letter, digit);
    return coordinate;
}

