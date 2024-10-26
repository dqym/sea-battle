#ifndef SEA_BATTLE_DISPATCHERCLI_H
#define SEA_BATTLE_DISPATCHERCLI_H

#include "iostream"
#include "Board.h"

class DispatcherCLI {
public:
    void display(Board& player_board, Board& enemy_board);
    std::pair<char, int> read_coordinate();

    template<class... Args>
    void message(Args... text){
        (std::cout << ... << text);
    }

private:
    void print_separating_row(int size);
    void print_data_row(Board& board, int rw_counter, bool is_enemy);
    void print_letters_row(int size);
};


#endif
