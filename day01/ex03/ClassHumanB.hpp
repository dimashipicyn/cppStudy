//
// Created by Lajuana Bespin on 8/10/21.
//

#ifndef CPPSTUDY_CLASSHUMANB_HPP
#define CPPSTUDY_CLASSHUMANB_HPP
#include "ClassWeapon.hpp"

class HumanB {
public:
    HumanB();
    HumanB(std::string name);
    ~HumanB();
    void    attack();
    void    setWeapon(Weapon &weapon);

private:
    Weapon      *weapon_;
    std::string name_;
};


#endif //CPPSTUDY_CLASSHUMANB_HPP
