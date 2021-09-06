//
// Created by Дима Щипицын on 03/09/2021.
//

#include <iostream>
#include "ClassAnimal.hpp"
#include "ClassDog.hpp"
#include "ClassCat.hpp"
#include "ClassWrongAnimal.hpp"
#include "ClassWrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    // wrong
    std::cout << "WRONG MESSAGE" << std::endl;
    const WrongAnimal* teta = new WrongAnimal();
    const WrongAnimal* g = new WrongCat();
    std::cout << g->getType() << " " << std::endl;
    g->makeSound(); //no cat
    teta->makeSound();
    return 0;
}

