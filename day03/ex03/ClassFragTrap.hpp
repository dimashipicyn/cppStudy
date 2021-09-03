//
// Created by Дима Щипицын on 03/09/2021.
//

#ifndef CPPSTUDY_CLASSFRAGTRAP_HPP
#define CPPSTUDY_CLASSFRAGTRAP_HPP
#include "ClassClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
    FragTrap();
    FragTrap(const std::string &name);
    ~FragTrap();
    void highFivesGuys(void);
    void attack(const std::string &target);
};


#endif //CPPSTUDY_CLASSFRAGTRAP_HPP
