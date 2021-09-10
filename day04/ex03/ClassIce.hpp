//
// Created by Lajuana Bespin on 9/10/21.
//

#ifndef CPPSTUDY_CLASSICE_HPP
#define CPPSTUDY_CLASSICE_HPP
#include "ClassAMateria.hpp"
#include "ClassICharacter.hpp"

class Ice : public AMateria {
public:
    Ice();
    virtual ~Ice();

    virtual AMateria    *clone() const;
    virtual void        use(ICharacter &target);

};


#endif //CPPSTUDY_CLASSICE_HPP
