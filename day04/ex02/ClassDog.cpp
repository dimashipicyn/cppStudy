//
// Created by Lajuana Bespin on 9/6/21.
//

#include "ClassDog.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << "Dog constructor" << std::endl;
    brain_ = new Brain();
}

Dog::~Dog() {
    std::cout << "Dog destructor" << std::endl;
    delete brain_;
}

void Dog::makeSound() const {
    std::cout << "Gav gav" << std::endl;
}

const std::string &Dog::getType() const {
    return type_;
}


Dog &Dog::operator=(const Dog &dog) {
    std::cout << "Assignation operator dog" << std::endl;
    this->type_ = dog.getType();
    delete this->brain_;
    this->brain_ = dog.brain_;
    return *this;
}
