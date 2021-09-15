//
// Created by Дима Щипицын on 03/09/2021.
//

#include <iostream>
#include "ClassBureaucrat.hpp"
#include "ClassForm.hpp"
#include "ClassShrubberyCreationForm.hpp"
#include "ClassRobotomyRequestForm.hpp"
#include "ClassPresidentialPardonForm.hpp"
#include "ClassIntern.hpp"

int main()
{
    try {
        Intern intern;

        Form *rrf = intern.makeForm("robotomy request", "Bender");
        Form *scf = intern.makeForm("shrubbery creation", "Hello");
        Form *ppf = intern.makeForm("presidential pardon", "World");
        Form *none = intern.makeForm("hello world", "hello world");

        std::cout << *rrf << std::endl;
        std::cout << *scf << std::endl;
        std::cout << *ppf << std::endl;
        
        std::cout << none << std::endl;
    }
    catch (Bureaucrat::GradeToHighException &e) {
        std::cout << "Bureaucrat failed! " << e.what() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Failed! " << e.what() << std::endl;
    }
    return 0;
}

