//
// Created by Lajuana Bespin on 15/09/2021.
//

#ifndef CPPSTUDY_CLASSINTERN_HPP
#define CPPSTUDY_CLASSINTERN_HPP
#include "ClassShrubberyCreationForm.hpp"
#include "ClassPresidentialPardonForm.hpp"
#include "ClassRobotomyRequestForm.hpp"

typedef Form *(*func)(const std::string &target);

class Intern {
public:
    Intern();
    ~Intern();
    Form *makeForm(const std::string &form, const std::string &target);
private:
    struct keyval {
        std::string key;
        Form *(*func)(const std::string &target);
    };
    keyval  functions_[3];
    static Form *newShrubberyForm(const std::string &target);
    static Form *newRobotomyForm(const std::string &target);
    static Form *newPresidentialForm(const std::string &target);
};


#endif //CPPSTUDY_CLASSINTERN_HPP
