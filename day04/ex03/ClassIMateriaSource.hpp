//
// Created by Lajuana Bespin on 9/10/21.
//

#ifndef CPPSTUDY_CLASSIMATERIASOURCE_HPP
#define CPPSTUDY_CLASSIMATERIASOURCE_HPP
#include "ClassAMateria.hpp"

class IMateriaSource
{
public:
    virtual ~IMateriaSource();

    virtual void        learnMateria(AMateria*) = 0;
    virtual AMateria*      createMateria(std::string const & type) = 0;
};


#endif //CPPSTUDY_CLASSIMATERIASOURCE_HPP
