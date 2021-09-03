//
// Created by Lajuana Bespin on 9/3/21.
//

#ifndef CPPSTUDY_CLASSDIAMONDTRAP_HPP
#define CPPSTUDY_CLASSDIAMONDTRAP_HPP
#include "ClassFragTrap.hpp"
#include "ClassScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
public:
    DiamondTrap();
    DiamondTrap(const std::string &name);
    ~DiamondTrap();
    void    whoAmI();
    void    attack(const std::string &target);
private:
    std::string diamondName_;
};

#endif //CPPSTUDY_CLASSDIAMONDTRAP_HPP
