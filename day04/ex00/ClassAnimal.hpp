//
// Created by Lajuana Bespin on 9/6/21.
//

#ifndef CPPSTUDY_CLASSANIMAL_HPP
#define CPPSTUDY_CLASSANIMAL_HPP
#include <iostream>

class Animal {
public:
    Animal();
    ~Animal();
    Animal(const std::string &type);
    virtual void                makeSound() const;
    virtual const std::string   &getType() const;

protected:
    std::string type_;
};


#endif //CPPSTUDY_CLASSANIMAL_HPP
