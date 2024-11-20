#include "../includes/FieldRenderer.h"

void FieldRenderer::display(Board& player_board, Board& enemy_board) {
    int size = player_board.get_field_size();

    int rw_counter = 1;
    for (int i = 0; i < 2 * size + 1; ++i) {
        if (i % 2 == 0) {
            print_separating_row(size);
            std::cout << "      ";
            print_separating_row(size);
            std::cout << "\n";
        } else {
            print_data_row(player_board, rw_counter, false);
            std::cout << "      ";
            print_data_row(enemy_board, rw_counter, true);
            std::cout << "\n";
            rw_counter++;
        }
    }

    print_letters_row(size);
    std::cout << "      ";
    print_letters_row(size);
    std::cout << "\n\n";

}

void FieldRenderer::print_separating_row(int size) {
    std::cout << "    ";
    for (int j = 0; j < size; ++j) {
        std::cout << "+ - ";
    }
    std::cout << "+";
}

void FieldRenderer::print_data_row(Board& board, int rw_counter, bool is_enemy) {
    std::cout << std::setw(2) << rw_counter << ". ";

    for (int j = 0; j < board.get_field_size(); ++j) {
        std::cout << "| ";
        char cell_display;
        if (is_enemy) {
            cell_display = board.get_cell(rw_counter-1, j).public_display;
        } else {
            cell_display = board.get_cell(rw_counter-1, j).actual_display;
        }
        switch (cell_display) {
            case 'S':
                std::cout << "\033[1;32m";
                break;
            case '~':
                std::cout << "\033[1;34m";
                break;
            case '!':
                std::cout << "\033[1;33m";
                break;
            case 'X':
                std::cout << "\033[1;31m";
                break;
            case '*':
                std::cout << "\033[1;35m";
                break;
        }
        std::cout << cell_display << "\033[0m ";
    }
    std::cout << "|";
}

void FieldRenderer::print_letters_row(int size) {
    char letters[] {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
                    'L','M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
                    'V', 'W', 'X','Y', 'Z'};
    std::cout << "    ";
    for (int j = 0; j < size; ++j) {
        std::cout << "  " << letters[j] << " ";
    }
    std::cout << " ";
}