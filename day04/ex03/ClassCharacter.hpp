//
// Created by Lajuana Bespin on 9/10/21.
//

#ifndef CPPSTUDY_CLASSCHARACTER_HPP
#define CPPSTUDY_CLASSCHARACTER_HPP
#include "ClassAMateria.hpp"
#include "ClassICharacter.hpp"

class Character : public ICharacter {
public:
    Character();
    Character(const std::string &name);
    Character(const Character &character);
    virtual ~Character();

    virtual const std::string       &getName() const;
    virtual void                    equip(AMateria *m);
    virtual void                    unequip(int idx);
    virtual void                    use(int idx, ICharacter &target);
    Character                       &operator=(const Character *character);

private:
    static const int    max_inventory_ = 4;
    std::string         name_;
    AMateria            *inventory_[max_inventory_];
};


#endif //CPPSTUDY_CLASSCHARACTER_HPP
