//
// Created by Lajuana Bespin on 9/6/21.
//

#ifndef CPPSTUDY_CLASSWRONGANIMAL_HPP
#define CPPSTUDY_CLASSWRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal(const std::string &type);
    void                makeSound() const;
    const std::string   &getType() const;

protected:
    std::string type_;
};


#endif //CPPSTUDY_CLASSWRONGANIMAL_HPP
