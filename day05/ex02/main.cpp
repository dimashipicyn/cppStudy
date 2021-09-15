//
// Created by Дима Щипицын on 03/09/2021.
//

#include <iostream>
#include "ClassBureaucrat.hpp"
#include "ClassForm.hpp"
#include "ClassShrubberyCreationForm.hpp"
#include "ClassRobotomyRequestForm.hpp"
#include "ClassPresidentialPardonForm.hpp"

int main()
{
    try {
        Bureaucrat bureaucrat("Yaric", 3);
        Bureaucrat bureaucrat1("Sergay", 149);

        ShrubberyCreationForm form("Hello");
        RobotomyRequestForm form1("World");
        PresidentialPardonForm form2("Cuck");

        form.beSigned(bureaucrat);
        form1.beSigned(bureaucrat);
        form2.beSigned(bureaucrat);

        bureaucrat1.executeForm(form);
        bureaucrat.executeForm(form1);
        bureaucrat.executeForm(form2);


    }
    catch (Bureaucrat::GradeToHighException &e) {
        std::cout << "Bureaucrat failed! " << e.what() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Failed! " << e.what() << std::endl;
    }
    return 0;
}

