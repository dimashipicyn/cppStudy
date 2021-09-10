//
// Created by Lajuana Bespin on 9/10/21.
//

#include "ClassCharacter.hpp"

Character::Character() {
    Character("");
}

Character::~Character() {

}

Character::Character(const std::string &name) : name_(name) {
    for (int i = 0; i < max_inventory_; ++i) {
        inventory_[i] = 0;
    }
}

Character::Character(const Character &character) {
    *this = character;
}

const std::string &Character::getName() const {
    return name_;
}

void Character::equip(AMateria *m) {
    for (int i = 0; i < max_inventory_; i++) {
        if (inventory_[i] == 0) {
            inventory_[i] = m;
            break ;
        }
    }
}

void Character::unequip(int idx) {
    if (idx < 0 || idx > (max_inventory_ - 1))
        return ;
    inventory_[idx] = 0;
}

void Character::use(int idx, ICharacter &target) {
    if (idx < 0 || idx > (max_inventory_ - 1) || inventory_[idx] == 0)
        return ;
    inventory_[idx]->use(target);
}

Character &Character::operator=(const Character *character) {
    this->name_ = character->getName();
    for (int i = 0; i < max_inventory_; ++i) {
        this->inventory_[i] = character->inventory_[i];
    }
    return *this;
}


