//
// Created by Lajuana Bespin on 9/6/21.
//

#include "ClassCat.hpp"
#include "../ex01/ClassCat.hpp"


Cat::Cat() : Animal("Cat") {
    std::cout << "Cat constructor" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow meow" << std::endl;
}

const std::string &Cat::getType() const {
    return type_;
}
