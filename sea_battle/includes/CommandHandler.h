#ifndef SEA_BATTLE_COMMANDHANDLER_H
#define SEA_BATTLE_COMMANDHANDLER_H

#include <vector>

class CommandHandler {
public:
    enum class command {CallGameStep, CallAbility, CallSave, CallLoad, CallExit, Unknown};
    virtual CommandHandler::command read_command() = 0;
    virtual std::pair<char, int> read_coordinate() = 0;
};


#endif
