#ifndef SEA_BATTLE_GAMECONTROL_H
#define SEA_BATTLE_GAMECONTROL_H

#include "GameSession.h"
#include "GameState.h"
#include "GameSetup.h"
#include "../CommandHandler.h"


template<class T>
class GameControl {
public:
    GameControl(GameSession& gameSession)
        : session(gameSession), cmd_handler(),
        state(gameSession), current_command(CommandHandler::command::Unknown) {
        cmd_handler.reload_binds();
    }

    void run() {
        while (true) {
            display_line("...");
            current_command = cmd_handler.read_command();
            switch (current_command) {
                case CommandHandler::command::CallSave:
                    if (state.save("game_save.txt")) {
                        display_line("Saving", "\033[32m Game saved successfully \033[0m\n");
                    } else {
                        display_line("Saving", "\033[31m Failed to save game \033[0m\n");
                    }
                    break;
                case CommandHandler::command::CallLoad:
                    if (state.load("game_save.txt")) {
                        display_line("Loading", "\033[32m Game loaded successfully \033[0m\n");
                    } else {
                        display_line("Loading", "\033[31m Failed to load game \033[0m\n");
                    }
                    break;
                case CommandHandler::command::CallAbility:
                    display_line("Use Ability");
                    session.use_ability();
                    break;
                case CommandHandler::command::CallGameStep: {
                    display_line("Shoot");
                    std::pair<char, int> coordinates = cmd_handler.read_coordinate();
                    GameSession::step_result step_result = session.run_game_step(coordinates);
                    if (step_result == GameSession::step_result::GameOver) {
                        console.print_error(" Game over. A new game starts...\n");
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
    void display_line(const std::string& cur_act, const std::optional<std::string>& status = std::nullopt) {
        console.print("\r\033[KCurrent action: ", cur_act, "> ", status.value_or(""));
    }
    CommandHandler::command current_command;
    T cmd_handler;
    GameState state;
    ConsoleIO console;
    GameSession& session;
};


#endif
