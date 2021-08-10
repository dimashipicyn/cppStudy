//
// Created by Lajuana Bespin on 8/10/21.
//

#ifndef CPPSTUDY_CLASSWEAPON_HPP
#define CPPSTUDY_CLASSWEAPON_HPP
#include <iostream>

class Weapon {
public:
    Weapon();
    Weapon(std::string type);
    ~Weapon();
    const std::string   &getType(void);
    void                setType(std::string type);
private:
    std::string type_;
};


#endif //CPPSTUDY_CLASSWEAPON_HPP
