//
// Created by Lajuana Bespin on 8/10/21.
//

#ifndef CPPSTUDY_CLASSHUMANA_HPP
#define CPPSTUDY_CLASSHUMANA_HPP
#include "ClassWeapon.hpp"

class HumanA {
public:
    HumanA();
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void    attack();

private:
    Weapon      *weapon_;
    std::string name_;
};


#endif //CPPSTUDY_CLASSHUMANA_HPP
