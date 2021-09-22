//
// Created by Дима Щипицын on 03/09/2021.
//

#include <iostream>
#include "iter.hpp"

void foo(const std::string &s)
{
    std::cout << "Print foo: " << s << std::endl;
}

int main()
{
    int array_int[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    double array_double[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 0.1};
    std::string array_str[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};

    ::iter(array_int, 10, ::print_elem);
    ::iter(array_double, 10, ::print_elem);
    ::iter(array_str, 10, ::print_elem);
    ::iter(array_str, 10, foo);
    return 0;
}

