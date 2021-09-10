//
// Created by Lajuana Bespin on 9/10/21.
//

#include "ClassAMateria.hpp"

AMateria::AMateria(const std::string &type) : type_(type) {}

AMateria::~AMateria() {

}

const std::string &AMateria::getType() const {
    return type_;
}

void AMateria::use(ICharacter &target) {
    (void)target;
}
