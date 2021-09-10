//
// Created by Lajuana Bespin on 9/10/21.
//

#include "ClassMateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < max_materies_; ++i) {
        materies_[i] = 0;
    }
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < max_materies_; ++i) {
        delete materies_[i];
    }
}

void MateriaSource::learnMateria(AMateria *materia) {
    for (int i = 0; i < max_materies_; i++) {
        if (materies_[i] == 0) {
            materies_[i] = materia->clone();
            break ;
        }
    }
}

AMateria *MateriaSource::createMateria(const std::string &type) {
    for (int i = 0; i < max_materies_; i++) {
        if (materies_[i] != 0) {
            if (materies_[i]->getType() == type) {
                return materies_[i]->clone();
            }
        }
    }
    return NULL;
}
