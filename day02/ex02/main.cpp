//
// Created by Дима Щипицын on 17/08/2021.
//

#include <iostream>
#include "ClassFixed.hpp"

int main()
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed const c( Fixed( 5.05f ) - Fixed( 2 ) );
    Fixed d( Fixed( 5.05f ) + Fixed( 2 ) );
    Fixed e( Fixed( 5.05f ) / Fixed( 2 ) );

    std::cout << "a value: " << a << std::endl;
    std::cout << "a value prefics operator: " << ++a << std::endl;
    std::cout << "a value: " << a << std::endl;
    std::cout << "a value postfics operator: " << a++ << std::endl;
    std::cout << "a value: " << a << std::endl;
    std::cout << "b value: " << b << std::endl;
    std::cout << "c value: " << c << std::endl;
    std::cout << "d value: " << d << std::endl;
    std::cout << "e value: " << e << std::endl;

    std::cout << "max a, b " << Fixed::max( a, b ) << std::endl;
    std::cout << "min a, b " << Fixed::min( a, b ) << std::endl;
    std::cout << "max d, e " << Fixed::max( d, e ) << std::endl;
    std::cout << "min d, e " << Fixed::min( d, e ) << std::endl;
    return 0;
}