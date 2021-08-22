//
// Created by Дима Щипицын on 17/08/2021.
//

#include "ClassFixed.hpp"
#include "../ex01/ClassFixed.hpp"

#include <iostream>

Fixed::Fixed() : rawBits_(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return rawBits_;
}

void Fixed::setRawBits(int const rawBits) {
    rawBits_ = rawBits;
}

Fixed::Fixed(const Fixed & fixed) : rawBits_(fixed.getRawBits()) {
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
    std::cout << "Assignation operator called" << std::endl;
    this->rawBits_ = fixed.getRawBits();
    return *this;
}
