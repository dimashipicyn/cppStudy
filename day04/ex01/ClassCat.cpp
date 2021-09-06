//
// Created by Lajuana Bespin on 9/6/21.
//

#include "ClassCat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << "Cat constructor" << std::endl;
    brain_ = new Brain();
}

Cat::~Cat() {
    std::cout << "Cat destructor" << std::endl;
    delete brain_;
}

void Cat::makeSound() const {
    std::cout << "Meow meow" << std::endl;
}

const std::string &Cat::getType() const {
    return type_;
}

Cat &Cat::operator=(const Cat &cat) {
    std::cout << "Assignation operator cat" << std::endl;
    this->type_ = cat.getType();
    delete this->brain_;
    this->brain_ = cat.brain_;
    return *this;
}