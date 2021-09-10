//
// Created by Lajuana Bespin on 9/10/21.
//

#include "ClassIce.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {

}

AMateria *Ice::clone() const {
    return new Ice();
}

void Ice::use(ICharacter &target) {
    std::cout << "Shoots an ice bolt at " << target.getName() << std::endl;
}
