//
// Created by Lajuana Bespin on 9/3/21.
//

#ifndef CPPSTUDY_CLASSDIAMONDTRAP_HPP
#define CPPSTUDY_CLASSDIAMONDTRAP_HPP
#include "ClassFragTrap.hpp"
#include "ClassScavTrap.hpp"

class DiamondTrap : virtual public FragTrap, virtual public ScavTrap {
public:
    DiamondTrap();

    DiamondTrap();

    ~DiamondTrap();
    void whoAmI();

};


#endif //CPPSTUDY_CLASSDIAMONDTRAP_HPP
