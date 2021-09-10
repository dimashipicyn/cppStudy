//
// Created by Lajuana Bespin on 9/10/21.
//

#ifndef CPPSTUDY_CLASSICHARACTER_HPP
#define CPPSTUDY_CLASSICHARACTER_HPP
#include "ClassAMateria.hpp"

class ICharacter {
public:
    virtual ~ICharacter();
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria *m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};


#endif //CPPSTUDY_CLASSICHARACTER_HPP
