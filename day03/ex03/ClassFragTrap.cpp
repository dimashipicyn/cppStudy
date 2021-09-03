//
// Created by Дима Щипицын on 03/09/2021.
//

#include "ClassFragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    std::cout << "Fragtrap default constructor" << std::endl;
    hitPoints_ = 100;
    energyPoints_ = 100;
    attackDamage_ = 30;
}

FragTrap::~FragTrap() {
    std::cout << "Fragtrap default destructor" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
    std::cout << "Fragtrap name constructor" << std::endl;
    hitPoints_ = 100;
    energyPoints_ = 100;
    attackDamage_ = 30;
}

void FragTrap::highFivesGuys() {
    std::cout << "Fragtrap high fives guys request" << std::endl;
}

void FragTrap::attack(const std::string &target) {
    std::cout << "FragTrap " << name_ << " attack " << target << ", causing " << attackDamage_ << " points of damage!" << std::endl;
}