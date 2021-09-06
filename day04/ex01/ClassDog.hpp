//
// Created by Lajuana Bespin on 9/6/21.
//

#ifndef CPPSTUDY_CLASSDOG_HPP
#define CPPSTUDY_CLASSDOG_HPP
#include "ClassAnimal.hpp"
#include "ClassBrain.hpp"

class Dog : public Animal {
public:
    Dog();
    virtual ~Dog();

    virtual const std::string   &getType() const;
    virtual void                makeSound() const;
    Dog & operator=(const Dog &dog);

private:
    Brain *brain_;
};


#endif //CPPSTUDY_CLASSDOG_HPP
