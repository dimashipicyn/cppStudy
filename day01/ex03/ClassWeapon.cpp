//
// Created by Lajuana Bespin on 8/10/21.
//

#include "ClassWeapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string type) {
    type_ = type;
}

Weapon::~Weapon() {}

const std::string & Weapon::getType() {
    return type_;
}

void Weapon::setType(std::string type) {
    type_ = type;
}