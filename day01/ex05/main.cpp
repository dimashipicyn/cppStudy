//
// Created by Lajuana Bespin on 8/13/21.
//
#include "ClassKaren.hpp"

int main()
{
    Karen karen;

    std::cout << "Debug function" << std::endl;
    karen.complain("DEBUG");
    std::cout << "Info function" << std::endl;
    karen.complain("INFO");
    std::cout << "Warning function" << std::endl;
    karen.complain("WARNING");
    std::cout << "Error function" << std::endl;
    karen.complain("ERROR");
}
