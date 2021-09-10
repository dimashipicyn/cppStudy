//
// Created by Lajuana Bespin on 9/6/21.
//

#ifndef CPPSTUDY_CLASSCAT_HPP
#define CPPSTUDY_CLASSCAT_HPP
#include "ClassAnimal.hpp"
#include "ClassBrain.hpp"

class Cat : public Animal {
public:
    Cat();
    virtual ~Cat();

    const Brain                 *getBrain() const;
    virtual const std::string   &getType() const;
    virtual void                makeSound() const;
    virtual Cat                 &operator=(const Cat &cat);
private:
    Brain *brain_;
};


#endif //CPPSTUDY_CLASSCAT_HPP
