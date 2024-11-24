#include "../includes/ConsoleRenderer.h"

void ConsoleRenderer::display(Board& player_board, Board& enemy_board) {
    int size = player_board.get_field_size();

    int rw_counter = 1;
    for (int i = 0; i < 2 * size + 1; ++i) {
        if (i % 2 == 0) {
            print_separating_row(size);
            console.print("      ");
            print_separating_row(size);
            console.print("\n");
        } else {
            print_data_row(player_board, rw_counter, false);
            console.print("      ");
            print_data_row(enemy_board, rw_counter, true);
            console.print("\n");
            rw_counter++;
        }
    }

    print_letters_row(size);
    console.print("      ");
    print_letters_row(size);
    console.print("\n\n");

}

void ConsoleRenderer::print_separating_row(int size) {
    console.print("    ");
    for (int j = 0; j < size; ++j) {
        console.print("+ - ");
    }
    console.print("+");
}

void ConsoleRenderer::print_data_row(Board& board, int rw_counter, bool is_enemy) {
    console.print(std::setw(2), rw_counter, ". ");

    for (int j = 0; j < board.get_field_size(); ++j) {
        console.print("| ");
        char cell_display;
        if (is_enemy) {
            cell_display = board.get_cell(rw_counter-1, j).public_display;
        } else {
            cell_display = board.get_cell(rw_counter-1, j).actual_display;
        }
        switch (cell_display) {
            case 'S':
                console.print("\033[1;32m");
                break;
            case '~':
                console.print("\033[1;34m");
                break;
            case '!':
                console.print("\033[1;33m");
                break;
            case 'X':
                console.print("\033[1;31m");
                break;
            case '*':
                console.print("\033[1;35m");
                break;
        }
        console.print(cell_display, "\033[0m ");
    }
    console.print("|");
}

void ConsoleRenderer::print_letters_row(int size) {
    char letters[] {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
                    'L','M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
                    'V', 'W', 'X','Y', 'Z'};
    console.print("    ");
    for (int j = 0; j < size; ++j) {
        console.print("  ", letters[j], " ");
    }
    console.print(" ");
}