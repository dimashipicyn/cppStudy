//
// Created by Дима Щипицын on 03/09/2021.
//

#include "ClassDiamondTrap.hpp"

int main()
{
    DiamondTrap a;
    DiamondTrap b("Mike");

    a.attack("Egor");
    a.beRepaired(3);
    a.takeDamage(1);

    b.attack("Egor");
    b.beRepaired(3);
    b.takeDamage(1);
    b.whoAmI();
    b.highFivesGuys();
    b.guardGate();

    return 0;
}

