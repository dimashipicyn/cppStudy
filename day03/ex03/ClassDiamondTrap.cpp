//
// Created by Lajuana Bespin on 9/3/21.
//

#include "ClassDiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap() {
    std::cout << "Diamond default constructor" << std::endl;
    diamondName_ = "No diamond name";
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), FragTrap(name + "_frag_name"), ScavTrap(name + "_scav_name") {
    std::cout << "Diamond name constructor" << std::endl;
    diamondName_ = name;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "Diamond destructor" << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "Diamond name: " << diamondName_ << std::endl;
    std::cout << "Clap name: " << ClapTrap::name_ << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
    FragTrap::attack(target);
}