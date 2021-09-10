//
// Created by Lajuana Bespin on 9/10/21.
//

#ifndef CPPSTUDY_CLASSMATERIASOURCE_HPP
#define CPPSTUDY_CLASSMATERIASOURCE_HPP
#include "ClassIMateriaSource.hpp"
#include "ClassAMateria.hpp"

class MateriaSource : IMateriaSource {
public:
    MateriaSource();

    virtual ~MateriaSource();

    virtual void        learnMateria(AMateria *materia);
    virtual AMateria    *createMateria(const std::string &type);
private:
    static const int    max_materies_ = 4;
    AMateria            *materies_[max_materies_];
};


#endif //CPPSTUDY_CLASSMATERIASOURCE_HPP
