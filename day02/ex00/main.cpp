//
// Created by Дима Щипицын on 17/08/2021.
//

#include <iostream>
#include "ClassFixed.hpp"

int main()
{
    Fixed a;
    Fixed b( a );
    Fixed c;
    Fixed d;

    d.setRawBits(1212);
    c = b;
    a = d;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    std::cout << d.getRawBits() << std::endl;

    return 0;
}