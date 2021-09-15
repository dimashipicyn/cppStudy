//
// Created by Lajuana Bespin on 15/09/2021.
//

#include "ClassIntern.hpp"

Intern::Intern() {
    std::string fname[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    func f[3] = {newShrubberyForm, newRobotomyForm, newPresidentialForm};
    for (int i = 0; i < 3; ++i) {
        functions_[i] = (keyval){
            .key = fname[i],
            .func = f[i]
        };
    }
}

Intern::~Intern() {

}

Form *Intern::makeForm(const std::string &form, const std::string &target) {
    for (int i = 0; i < 3; ++i) {
        if (functions_[i].key == form) {
            std::cout << "Intern creation '" << form << "' form." << std::endl;
            return functions_[i].func(target);
        }
    }
    std::cout << "Form: '" << form << "' not found!" << std::endl;
    return NULL;
}

Form *Intern::newShrubberyForm(const std::string &target) {
    return new ShrubberyCreationForm(target);
}

Form *Intern::newRobotomyForm(const std::string &target) {
    return new RobotomyRequestForm(target);
}

Form *Intern::newPresidentialForm(const std::string &target) {
    return new PresidentialPardonForm(target);
}
