#include "../includes/DisplayerCLI.h"

void DisplayerCLI::display(Board& board, bool is_enemy) const {
    int size = board.get_field_size();
    char letters[] {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
                    'L','M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
                    'V', 'W', 'X','Y', 'Z'};

    std::cout << "    ";
    for (int j = 0; j < size; ++j) {
        std::cout << "+ — ";
    }
    std::cout << "+\n";

    for (int i = 0; i < size; ++i) {
        std::cout << std::setw(2) << i + 1 << ". ";

        for (int j = 0; j < size; ++j) {
            std::cout << "| ";
            char cell_display;
            if (is_enemy) {
                cell_display = board.get_cell(i, j).public_display;
            } else {
                cell_display = board.get_cell(i, j).actual_display;
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
            }
            std::cout << cell_display << "\033[0m ";
        }
        std::cout << "|\n";

        std::cout << "    ";
        for (int j = 0; j < size; ++j) {
            std::cout << "+ — ";
        }
        std::cout << "+\n";
    }

    std::cout << "    ";
    for (int j = 0; j < size; ++j) {
        std::cout << "  " << letters[j] << " ";
    }
    std::cout << '\n';
}