//
// Created by Lajuana Bespin on 9/6/21.
//

#include "ClassDog.hpp"
#include "../ex01/ClassDog.hpp"


Dog::Dog() : Animal("Dog") {
    std::cout << "Dog constructor" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Gav gav" << std::endl;
}

const std::string &Dog::getType() const {
    return type_;
}
