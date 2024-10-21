#ifndef SEA_BATTLE_DISPLAYERCLI_H
#define SEA_BATTLE_DISPLAYERCLI_H

#include "Board.h"

class DisplayerCLI {
public:
    void display(Board& player_board, Board& enemy_board);
private:
    void print_separating_row(int size);
    void print_data_row(Board& board, int rw_counter, bool is_enemy);
    void print_letters_row(int size);
};


#endif
