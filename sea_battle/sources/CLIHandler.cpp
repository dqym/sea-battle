#include "../includes/CLIHandler.h"

CommandHandler::command CLIHandler::read_command() {
    while (true) {
        if (console.char_available()) {
            char key = console.get_char();
            try {
                return binds.at(key);
            } catch (std::out_of_range& e) {
                return CommandHandler::command::Unknown;
            }
        }
    }
}

std::pair<char, int> CLIHandler::read_coordinate() {
    return console.get_coordinate();
}

void CLIHandler::reload_binds() {
    std::string filename = "cfg.txt";
    while (true) {
        std::ifstream is(filename);
        if (!is.is_open()) {
            console.print_error("Failed to open configuration file '", filename, "'.");
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
            console.print_success("Configuration successfully loaded.\n");
            return;

        } catch (const GameException &e) {
            console.print_error("Error loading configuration: ", e.what());
            console.print_warning("Please fix the configuration file and press any key to reload...");
            while (true) {
                if (console.char_available()) {
                    is.close();
                    break;
                }
            }
        }
    }
}


