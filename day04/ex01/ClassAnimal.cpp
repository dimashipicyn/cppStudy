//
// Created by Lajuana Bespin on 9/6/21.
//

#include "ClassAnimal.hpp"

Animal::Animal() : type_("Animal") {
    std::cout << "Animal constructor" << std::endl;
}

Animal::Animal(const std::string &type) {
    std::cout << "Animal type constructor" << std::endl;
    type_ = type;
}

Animal::~Animal() {
    std::cout << "Animal destructor" << std::endl;
}

void Animal::makeSound() const {
    std::cout << "Animal sound:)" << std::endl;
}

const std::string &Animal::getType() const {
    return type_;
}

Animal& Animal::operator=(const Animal &animal) {
    std::cout << "Assignation operator animal" << std::endl;
    this->type_ = animal.getType();
    return *this;
}
