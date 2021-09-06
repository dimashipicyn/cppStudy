//
// Created by Lajuana Bespin on 9/6/21.
//

#ifndef CPPSTUDY_CLASSDOG_HPP
#define CPPSTUDY_CLASSDOG_HPP
#include "ClassAnimal.hpp"

class Dog : public Animal {
public:
    Dog();
    ~Dog();

    virtual const std::string   &getType() const;
    virtual void                makeSound() const;
};


#endif //CPPSTUDY_CLASSDOG_HPP
