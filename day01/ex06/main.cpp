//
// Created by Lajuana Bespin on 8/13/21.
//
#include "ClassKaren.hpp"

int main(int ac, char **av)
{
    Karen       karen;
    //std::string levels[4];
    std::string level;
    int         nlvl;

    if (ac != 2) {
        std::cout << "Error, usage: a.out [DEBUG, INFO, WARNING, ERROR]" << std::endl;
        return 1;
    }
    level = av[1];
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (nlvl = 0; nlvl < 4; nlvl++) {
        if (levels[nlvl] == level)
            break ;
    }
    switch (nlvl) {
        case 0: {
            std::cout << "[ DEBUG ]" << std::endl;
            karen.complain("DEBUG");
        }
        case 1: {
            std::cout << "[ INFO ]" << std::endl;
            karen.complain("INFO");
        }
        case 2: {
            std::cout << "[ WARNING ]" << std::endl;
            karen.complain("WARNING");
        }
        case 3: {
            std::cout << "[ ERROR ]" << std::endl;
            karen.complain("ERROR");
            break ;
        }
        default : {
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        }
    }
    return 0;
}
