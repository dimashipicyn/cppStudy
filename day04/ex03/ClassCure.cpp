//
// Created by Lajuana Bespin on 9/10/21.
//

#include "ClassCure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {

}

AMateria *Cure::clone() const {
    return new Cure();
}

void Cure::use(ICharacter &target) {
    std::cout << "Heals " << target.getName() << "'s wounds" << std::endl;
}