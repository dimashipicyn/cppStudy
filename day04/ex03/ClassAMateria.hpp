//
// Created by Lajuana Bespin on 9/10/21.
//

#ifndef CPPSTUDY_CLASSAMATERIA_HPP
#define CPPSTUDY_CLASSAMATERIA_HPP
#include <iostream>

class ICharacter;

class AMateria {
public:
    AMateria(std::string const & type);
    virtual ~AMateria();
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);

protected:
    std::string type_;

};


#endif //CPPSTUDY_CLASSAMATERIA_HPP
