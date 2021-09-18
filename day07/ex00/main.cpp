//
// Created by Дима Щипицын on 03/09/2021.
//

#include <iostream>
#include "whatever.hpp"

int main()
{
    int a = 4;
    int b = 9;

    std::cout << "int a = "  << a << std::endl;
    std::cout << "int b = "  << b << std::endl;
    ::swap(a, b);
    std::cout << "swap int a = "  << a << std::endl;
    std::cout << "swap int b = "  << b << std::endl;
    std::cout << "max int: " << ::max(a, b) << std::endl;
    std::cout << "min int: " << ::min(a, b) << std::endl << std::endl;

    float c  = 44.4;
    float d = 99.2;

    std::cout << "float c = "  << c << std::endl;
    std::cout << "float d = "  << d << std::endl;
    ::swap(c, d);
    std::cout << "swap float c = "  << c << std::endl;
    std::cout << "swap float d = "  << d << std::endl;
    std::cout << "max float: " << ::max(c, d) << std::endl;
    std::cout << "min float: " << ::min(c, d) << std::endl << std::endl;

    std::string e = "value 1";
    std::string f = "value 2";

    std::cout << "str e = "  << e << std::endl;
    std::cout << "str f = "  << f << std::endl;
    ::swap(e, f);
    std::cout << "swap str e = "  << e << std::endl;
    std::cout << "swap str f = "  << f << std::endl;
    std::cout << "max str: " << ::max(e, f) << std::endl;
    std::cout << "min str: " << ::min(e, f) << std::endl;

    return 0;
}

