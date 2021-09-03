//
// Created by Дима Щипицын on 03/09/2021.
//

#include "ClassClapTrap.hpp"

ClapTrap::ClapTrap() : name_("No name"), hitPoints_(10), energyPoints_(10), attackDamage_(0) {
    std::cout << "Default constructor" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "Default destructor" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) {
    std::cout << "Name constructor" << std::endl;
    name_ = name;
}

void ClapTrap::attack(const std::string &target) {
    std::cout << "ClapTrap " << name_ << " attack " << target << ", causing " << attackDamage_ << " points of damage!" << std::endl;
    energyPoints_ -= 3;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << name_ << " take damage " << amount << std::endl;
    hitPoints_ -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "ClapTrap " << name_ << " be repaired " << amount << std::endl;
    hitPoints_ += amount;
}
