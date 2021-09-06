//
// Created by Lajuana Bespin on 9/6/21.
//

#include "ClassWrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type_("WrongAnimal") {
    std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) {
    std::cout << "WrongAnimal name constructor" << std::endl;
    type_ = type;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor" << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal sound:)" << std::endl;
}

const std::string &WrongAnimal::getType() const {
    return type_;
}