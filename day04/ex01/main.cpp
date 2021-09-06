//
// Created by Дима Щипицын on 03/09/2021.
//

#include <iostream>
#include "ClassAnimal.hpp"
#include "ClassCat.hpp"
#include "ClassDog.hpp"
#include "ClassBrain.hpp"

int main()
{
    Animal *animals[20];

    std::cout << "CREATE ANIMALS DOG AND CAT" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    for (int i = 0; i < 10; i++) {
        if (i < 5) {
            animals[i] = new Cat();
        }
        else {
            animals[i] = new Dog();
        }
    }
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "------------------------------------------" << std::endl;

    Animal *other = animals[0];
    std::cout << other->getType() << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "DELETE ANIMALS DOG AND CAT" << std::endl;
    for (int i = 0; i < 10; ++i) {
        delete animals[i];
    }
    std::cout << "------------------------------------------" << std::endl;

    std::string s;
    std::getline(std::cin, s);

    return 0;
}

