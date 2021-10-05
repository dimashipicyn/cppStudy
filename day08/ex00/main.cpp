//
// Created by Дима Щипицын on 03/09/2021.
//

#include <algorithm>
#include <vector>
#include <iostream>
#include "easyfind.hpp"

int main()
{
    std::vector<int> cont;
    int num = 0;
    for (int i = 0; i < 10; ++i) {
        cont.push_back(i);
    }
    try {
        num = easyfind(cont, 5);
        std::cout << "Elem is find: " << num << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}

