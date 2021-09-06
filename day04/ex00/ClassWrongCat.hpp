//
// Created by Lajuana Bespin on 9/6/21.
//

#ifndef CPPSTUDY_CLASSWRONGCAT_HPP
#define CPPSTUDY_CLASSWRONGCAT_HPP

#include "ClassWrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
    WrongCat();
    ~WrongCat();

    const std::string   &getType() const;
    void                makeSound() const;
};


#endif //CPPSTUDY_CLASSWRONGCAT_HPP
