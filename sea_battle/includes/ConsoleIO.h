#ifndef SEA_BATTLE_CONSOLEIO_H
#define SEA_BATTLE_CONSOLEIO_H

#include <iostream>
#include <conio.h>

class ConsoleIO {
public:
    template<class... Args>
    void print(Args... text){
        (std::cout << ... << text);
        std::cout << std::flush;
    }

    template<class... Args>
    void print_error(Args... text) {
        std::cout << "\033[31m";
        (std::cout << ... << text);
        std::cout << "\033[0m" << std::flush;
    }

    template<class... Args>
    void print_success(Args... text){
        std::cout << "\033[32m";
        (std::cout << ... << text);
        std::cout << "\033[0m" << std::flush;
    }

    template<class... Args>
    void print_warning(Args... text){
        std::cout << "\033[33m";
        (std::cout << ... << text);
        std::cout << "\033[0m" << std::flush;
    }

    char get_char();
    bool char_available();
    std::string get_line();
    std::pair<char, int> get_coordinate();
};


#endif
