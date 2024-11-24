#include "../includes/GameControllers/GameSession.h"
#include "../includes/GameControllers/GameControl.h"
#include "../includes/CLIHandler.h"

int main() {
    while (true) {
        GameSetup config;
        config.read_start_data();

        GameSession session(config);
        session.place_ships();

        GameControl<CLIHandler> control(session);

        control.run();
    }

    return 0;
}
