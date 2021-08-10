//
// Created by Lajuana Bespin on 8/10/21.
//

#include "ClassHumanB.hpp"

HumanB::HumanB() {}

HumanB::HumanB(std::string name) {
    name_ = name;
}

HumanB::~HumanB() {}

void HumanB::attack() {
    std::cout << name_ << " attack with his "  << weapon_->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
    weapon_ = &weapon;
}