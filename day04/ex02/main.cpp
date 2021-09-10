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
    Animal *animals[10];

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

    Cat cat;
    Cat deep_copy_cat;
    std::cout << "Idea in cat: " << cat.getBrain()->getIdeas()[0] << std::endl;
    std::cout << "Idea in deep_copy_cat do copy: " << deep_copy_cat.getBrain()->getIdeas()[0] << std::endl;
    deep_copy_cat = cat;
    std::cout << "Idea in cat: " << cat.getBrain()->getIdeas()[0] << std::endl;
    std::cout << "Idea in deep_copy_cat after copy: " << deep_copy_cat.getBrain()->getIdeas()[0] << std::endl;

    std::cout << "------------------------------------------" << std::endl;
    std::cout << "------------------------------------------" << std::endl;

    std::cout << "DELETE ANIMALS DOG AND CAT" << std::endl;
    for (int i = 0; i < 10; ++i) {
        delete animals[i];
    }
    std::cout << "------------------------------------------" << std::endl;
    
    //Animal animal; FIXME DOES NOT COMPILE
    //std::string s;
    //std::getline(std::cin, s);

    return 0;
}

