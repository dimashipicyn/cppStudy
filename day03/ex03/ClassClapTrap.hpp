//
// Created by Дима Щипицын on 03/09/2021.
//

#ifndef CPPSTUDY_CLASSCLAPTRAP_HPP
#define CPPSTUDY_CLASSCLAPTRAP_HPP
#include <iostream>

class ClapTrap {
public:
    ClapTrap();
    ClapTrap(const std::string &name);
    ~ClapTrap();
    virtual void    attack(std::string const &target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);

protected:
    std::string name_;
    int         hitPoints_;
    int         energyPoints_;
    int         attackDamage_;
};


#endif //CPPSTUDY_CLASSCLAPTRAP_HPP
