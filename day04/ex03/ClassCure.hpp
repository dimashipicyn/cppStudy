//
// Created by Lajuana Bespin on 9/10/21.
//

#ifndef CPPSTUDY_CLASSCURE_HPP
#define CPPSTUDY_CLASSCURE_HPP
#include "ClassAMateria.hpp"
#include "ClassICharacter.hpp"

class Cure : public AMateria {
public:
    Cure();
    virtual ~Cure();

    virtual AMateria    *clone() const;
    virtual void        use(ICharacter &target);

};


#endif //CPPSTUDY_CLASSCURE_HPP
