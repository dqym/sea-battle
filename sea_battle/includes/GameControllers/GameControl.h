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
        state(gameSession), current_command(CommandHandler::command::Unknown) {}

    void run() {
        while (true) {
            std::cout << "\rCurrent action: ...> ";
            current_command = cmd_handler.read_command();
            switch (current_command) {
                case CommandHandler::command::CallSave:
                    if (state.save("game_save.txt")) {
                        std::cout << "\r\033[KCurrent action: Saving> \033[32m Game saved successfully \033[0m" << std::flush;
                    } else {
                        std::cout << "\r\033[KCurrent action: Saving> \033[31m Failed to save game \033[0m" << std::flush;
                    }
                    break;
                case CommandHandler::command::CallLoad:
                    if (state.load("game_save.txt")) {
                        std::cout << "\r\033[KCurrent action: Loading> \033[32m Game loaded successfully \033[0m" << std::flush;
                    } else {
                        std::cout << "\r\033[KCurrent action: Loading> \033[31m Failed to load game \033[0m" << std::flush;
                    }
                    break;
                case CommandHandler::command::CallAbility:
                    std::cout << "\r\033[KCurrent action: Use Ability> " << std::flush;
                    session.use_ability();
                    break;
                case CommandHandler::command::CallGameStep: {
                    std::cout << "\r\033[KCurrent action: Shoot> " << std::flush;
                    std::pair<char, int> coordinates = cmd_handler.read_coordinate();
                    GameSession::step_result step_result = session.run_game_step(coordinates);
                    if (step_result == GameSession::step_result::GameOver) {
                        return;
                    }
                    break;
                }
                case CommandHandler::command::CallExit:
                    exit(0);
            }
        }
    }

private:
    CommandHandler::command current_command;
    T& cmd_handler;
    GameSession& session;
    GameState state;
};


#endif
