//
// Created by Дима Щипицын on 03/09/2021.
//

#ifndef CPPSTUDY_CLASSSCAVTRAP_HPP
#define CPPSTUDY_CLASSSCAVTRAP_HPP
#include "ClassClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    ScavTrap();
    ScavTrap(const std::string &name);
    ~ScavTrap();
    void    guardGate();
    void    attack(const std::string &target);
};


#endif //CPPSTUDY_CLASSSCAVTRAP_HPP
