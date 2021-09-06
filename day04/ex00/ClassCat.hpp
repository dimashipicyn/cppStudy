//
// Created by Lajuana Bespin on 9/6/21.
//

#ifndef CPPSTUDY_CLASSCAT_HPP
#define CPPSTUDY_CLASSCAT_HPP
#include "ClassAnimal.hpp"

class Cat : public Animal {
public:
    Cat();
    ~Cat();

    virtual const std::string   &getType() const;
    virtual void                makeSound() const;
};


#endif //CPPSTUDY_CLASSCAT_HPP
