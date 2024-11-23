#ifndef SEA_BATTLE_FIELDRENDERER_H
#define SEA_BATTLE_FIELDRENDERER_H

#include "Board.h"

template<class Renderer>
class FieldRenderer {
public:
    FieldRenderer(): renderer() {}
    void display(Board& player_board, Board& enemy_board) {
        renderer.display(player_board, enemy_board);
    }
private:
    Renderer renderer;
};


#endif
