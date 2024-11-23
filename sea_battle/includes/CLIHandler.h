#ifndef SEA_BATTLE_CLIHANDLER_H
#define SEA_BATTLE_CLIHANDLER_H

#include "CommandHandler.h"
#include "Exceptions.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <conio.h>

class CLIHandler: public CommandHandler{
public:
    CLIHandler();
    CommandHandler::command read_command() override;
    std::pair<char, int> read_coordinate() override;
    void reload_binds();
private:
    std::map<char, CommandHandler::command> binds{
        {'S', CommandHandler::command::CallGameStep},
        {'A', CommandHandler::command::CallAbility},
        {'O', CommandHandler::command::CallSave},
        {'P', CommandHandler::command::CallLoad},
        {'Q', CommandHandler::command::CallExit}
    };
    std::map<std::string, CommandHandler::command> requested_keys{
        {"SHOOT_KEY", CommandHandler::command::CallGameStep},
        {"ABILITY_KEY", CommandHandler::command::CallAbility},
        {"SAVE_KEY", CommandHandler::command::CallSave},
        {"LOAD_KEY", CommandHandler::command::CallLoad},
        {"EXIT_KEY", CommandHandler::command::CallExit}
    };
};


#endif
