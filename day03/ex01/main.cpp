//
// Created by Дима Щипицын on 03/09/2021.
//

#include "ClassScavTrap.hpp"

int main()
{
    ScavTrap a;
    ScavTrap b("Egor");

    a.attack("Egor");
    a.beRepaired(3);
    a.takeDamage(1);

    b.attack("Mike");
    b.beRepaired(3);
    b.takeDamage(1);
    b.guardGate();
    return 0;
}

