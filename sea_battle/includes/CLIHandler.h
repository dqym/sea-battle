#ifndef SEA_BATTLE_CLIHANDLER_H
#define SEA_BATTLE_CLIHANDLER_H

#include "CommandHandler.h"
#include <iostream>
#include <conio.h>

class CLIHandler: public CommandHandler{
public:
    CommandHandler::command read_command() override;
    std::pair<char, int> read_coordinate() override;
};


#endif
