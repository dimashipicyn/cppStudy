//
// Created by Дима Щипицын on 03/09/2021.
//

#include <iostream>
#include "ClassAMateria.hpp"
#include "ClassICharacter.hpp"
#include "ClassCure.hpp"
#include "ClassIce.hpp"
#include "ClassCharacter.hpp"
#include "ClassMateriaSource.hpp"

int main()
{
    Character yaric("Yaric");
    Character sergay("Sergay");

    AMateria *ice = new Ice();
    AMateria *cure = new Cure();

    yaric.equip(ice);
    yaric.equip(cure);
    yaric.equip(ice->clone());
    yaric.equip(cure->clone());

    sergay.equip(cure);
    sergay.equip(cure);
    sergay.equip(ice->clone());
    sergay.equip(cure->clone());

    std::cout << "-----Sergay use materia!------" << std::endl;
    sergay.use(0, yaric);
    sergay.use(1, yaric);
    sergay.use(2, yaric);
    sergay.use(3, yaric);

    std::cout << "-----Yaric use materia!------" << std::endl;
    yaric.use(0, sergay);
    yaric.use(1, sergay);

    Character sergayCopy(sergay);
    Character yaricCopy;
    yaricCopy = yaric;

    std::cout << "-----Yaric_copy use materia!------" << std::endl;
    yaricCopy.use(0, sergay);
    yaricCopy.use(1, sergay);

    std::cout << "-----Sergay_copy use materia!------" << std::endl;
    sergayCopy.use(0, yaric);
    sergayCopy.use(1, yaric);

    MateriaSource materiaSource;

    materiaSource.learnMateria(ice);
    materiaSource.learnMateria(cure);

    AMateria *materiaCure = materiaSource.createMateria("cure");
    AMateria *materiaIce = materiaSource.createMateria("ice");
    AMateria *materiaFire = materiaSource.createMateria("fire");

    std::cout << "Type materiaCure: " << materiaCure->getType() << std::endl;
    std::cout << "Type materiaIce: " << materiaIce->getType() << std::endl;
    std::cout << "Type materiaFire: " << materiaFire << std::endl;
    return 0;
}

