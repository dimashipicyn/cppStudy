//
// Created by Lajuana Bespin on 9/6/21.
//

#include "ClassWrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "Meow meow" << std::endl;
}

const std::string &WrongCat::getType() const {
    return type_;
}