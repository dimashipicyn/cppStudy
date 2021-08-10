//
// Created by Lajuana Bespin on 8/10/21.
//

#include "ClassHumanA.hpp"

HumanA::HumanA() {
}

HumanA::HumanA(std::string name, Weapon &weapon)// можно и так : weapon_(&weapon), name_(name)
{
    name_ = name;
    weapon_ = &weapon;
}

HumanA::~HumanA() {}

void HumanA::attack() {
    std::cout << name_ << " attack with his "  << weapon_->getType() << std::endl;
}