#include "../includes/GameControllers/GameSession.h"
#include "../includes/GameControllers/GameControl.h"
#include "../includes/CLIHandler.h"

int main() {
    CLIHandler cli;

    GameSetup config;
    config.read_start_data();

    GameSession session(config);
    session.place_ships();

    GameControl<CLIHandler> control(session, cli);

    control.run();



//
//    GameState state(session);
//    state.save("game_save.txt");
//    session.run_game_loop();
//    state.load("game_save.txt");
//    session.run_game_loop();

//    GameSetup setup;
//    GameSession session;
//    GameState state(session);
//    state.load("game_save.txt");
//    session.run_game_loop();

    return 0;
}
