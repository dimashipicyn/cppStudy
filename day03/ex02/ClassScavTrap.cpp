//
// Created by Дима Щипицын on 03/09/2021.
//

#include "ClassScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << "Scavtrap default constructor" << std::endl;
    hitPoints_ = 100;
    energyPoints_ = 50;
    attackDamage_ = 20;
}

ScavTrap::~ScavTrap() {
    std::cout << "Scavtrap default destructor" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
    std::cout << "Scavtrap name constructor" << std::endl;
    hitPoints_ = 100;
    energyPoints_ = 50;
    attackDamage_ = 20;
}

void ScavTrap::guardGate() {
    std::cout << "Scavtrap have entered in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    std::cout << "ScavTrap " << name_ << " attack " << target << ", causing " << attackDamage_ << " points of damage!" << std::endl;
}
