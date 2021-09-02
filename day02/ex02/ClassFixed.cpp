//
// Created by Дима Щипицын on 17/08/2021.
//

#include "ClassFixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : rawBits_(0) {
//    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
//    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed & fixed) {
    //    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::Fixed(const float n) {
    //    std::cout << "Float constructor called" << std::endl;
    setRawBits(roundf(n * (1 << num_of_fractional_bits_)));
}

Fixed::Fixed(const int n) {
    //    std::cout << "Int constructor called" << std::endl;
    setRawBits(n << num_of_fractional_bits_);
}

int Fixed::getRawBits() const {
    //std::cout << "getRawBits member function called" << std::endl;
    return rawBits_;
}

void Fixed::setRawBits(int const rawBits) {
    rawBits_ = rawBits;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
    //    std::cout << "Assignation operator called" << std::endl;
    this->rawBits_ = fixed.getRawBits();
    return *this;
}

float Fixed::toFloat(void) const {
    return rawBits_ / (float)(1 << num_of_fractional_bits_);
}

int Fixed::toInt(void) const {
    return rawBits_ / (1 << num_of_fractional_bits_);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
    os << fixed.toFloat();
    return os;
}

bool Fixed::operator==(const Fixed &rhs) const {
    return rawBits_ == rhs.rawBits_;
}

bool Fixed::operator!=(const Fixed &rhs) const {
    return rawBits_ != rhs.rawBits_;
}

bool Fixed::operator<(const Fixed &rhs) const {
    return rawBits_ < rhs.rawBits_;
}

bool Fixed::operator>(const Fixed &rhs) const {
    return rawBits_ > rhs.rawBits_;
}

bool Fixed::operator<=(const Fixed &rhs) const {
    return rawBits_ <= rhs.rawBits_;
}

bool Fixed::operator>=(const Fixed &rhs) const {
    return rawBits_ >= rhs.rawBits_;
}

Fixed Fixed::operator+(const Fixed &rhs) const {
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed &rhs) const {
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed &rhs) const {
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed &rhs) const {
    return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed Fixed::operator++() {
    rawBits_++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed old = *this;
    rawBits_++;
    return old;
}

Fixed Fixed::operator--() {
    rawBits_--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed old = *this;
    rawBits_--;
    return old;
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
    if (a.getRawBits() < b.getRawBits()) {
        return a;
    }
    return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
    if (a.getRawBits() < b.getRawBits()) {
        return a;
    }
    return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
    if (a.getRawBits() > b.getRawBits()) {
        return a;
    }
    return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
    if (a.getRawBits() > b.getRawBits()) {
        return a;
    }
    return b;
}