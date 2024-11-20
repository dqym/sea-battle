#ifndef SEA_BATTLE_GAMECONTROL_H
#define SEA_BATTLE_GAMECONTROL_H

#include "GameSession.h"
#include "GameState.h"
#include "GameSetup.h"
#include "../CommandHandler.h"


template<class T>
class GameControl {
public:
    GameControl(GameSession& gameSession, T& cmd)
        : session(gameSession), cmd_handler(cmd),
        state(session), current_command(CommandHandler::command::Unknown) {}

    void run() {
        std::cout << "\rCurrent action: ...> (press any key)";
        while (true) {
            current_command = cmd_handler.read_command();
            switch (current_command) {
                case CommandHandler::command::CallSave:
                    if (state.save("game_save.txt")) {
                        std::cout << "\rCurrent action: Saving> \033[32m Game saved successfully \033[0m";
                    } else {
                        std::cout << "\rCurrent action: Saving> \033[31m Failed to save game \033[0m";
                    }
                    break;
                case CommandHandler::command::CallLoad:
                    if (state.load("game_save.txt")) {
                        std::cout << "\rCurrent action: Loading> \033[32m Game loaded successfully \033[0m";
                    } else {
                        std::cout << "\rCurrent action: Loading> \033[31m Failed to load game \033[0m";
                    }
                    break;
                case CommandHandler::command::CallAbility:
                    break;
                case CommandHandler::command::CallGameStep:
                    break;
                case CommandHandler::command::CallExit:
                    break;
            }
        }
    }

private:
    CommandHandler::command current_command;
    T& cmd_handler;
    GameState state;
    GameSession& session;
};


#endif
