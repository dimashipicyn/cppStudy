//
// Created by Lajuana Bespin on 9/6/21.
//

#ifndef CPPSTUDY_CLASSANIMAL_HPP
#define CPPSTUDY_CLASSANIMAL_HPP
#include <iostream>

class Animal {
public:
    Animal();
    Animal(const std::string &type);
    virtual ~Animal();

    virtual void                makeSound() const = 0;
    virtual const std::string   &getType() const = 0;

protected:
    std::string type_;
};


#endif //CPPSTUDY_CLASSANIMAL_HPP
