#include "../includes/CLIHandler.h"

CLIHandler::CLIHandler() {reload_binds();}

CommandHandler::command CLIHandler::read_command() {
    while (true) {
        if (_kbhit()) {
            char key = toupper((char)_getch());
            try {
                return binds.at(key);
            } catch (std::out_of_range& e) {
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

void CLIHandler::reload_binds() {
    while (true) {
        std::ifstream is("cfg.txt");
        if (!is.is_open()) {
            std::cerr << "\033[31mFailed to open configuration file 'cfg.txt'.\033[0m" << std::endl;
            return;
        }
        std::map<char, CommandHandler::command> new_binds;
        std::set<char> used_keys;
        std::set<CommandHandler::command> assigned_commands;
        std::string line;

        try {
            while (std::getline(is, line)) {
                std::istringstream iss(line);
                std::string key, equals, value;
                if (iss >> key >> equals >> value and equals == "=") {
                    if (!value.empty() and value.front() == '"' and value.back() == '"') {
                        value = value.substr(1, value.size() - 2);
                    }

                    auto requested_key_it = requested_keys.find(key);
                    if (requested_key_it != requested_keys.end() and !value.empty()) {
                        char bind_key = toupper(value[0]);
                        auto command = requested_key_it->second;

                        if (used_keys.count(bind_key)) {
                            throw MultipleBindException();
                        }
                        if (assigned_commands.count(command)) {
                            throw MultipleBindException();
                        }

                        new_binds[bind_key] = command;
                        used_keys.insert(bind_key);
                        assigned_commands.insert(command);
                    }
                }
            }

            for (const auto &[key, command]: requested_keys) {
                if (assigned_commands.find(command) == assigned_commands.end()) {
                    throw NotEnoughBindsException();
                }
            }

            binds = std::move(new_binds);
            is.close();
            std::cout << "\033[32mConfiguration successfully loaded.\033[0m" << std::endl;
            return;

        } catch (const GameException &e) {
            std::cerr << "\033[31mError loading configuration: " << e.what() << "\033[0m" << std::endl;
            std::cout << "\033[33mPlease fix the configuration file and press any key to reload...\033[0m" << std::endl;
            while (true) {
                if (_kbhit()) {
                    _getch();
                    is.close();
                    break;
                }
            }
        }
    }
}


