//
// Created by Дима Щипицын on 03/09/2021.
//

#include <iostream>
#include "ClassBureaucrat.hpp"
#include "ClassForm.hpp"

int main()
{
    try {
        Bureaucrat bureaucrat("Yaric", 3);
        Bureaucrat bureaucrat1("Sergay", 149);

        Form form("Form one", 30, 50);
        std::cout << form << std::endl;

        //Form form1("Form two", 151, 50); // except
        //std::cout << form1 << std::endl;

        form.beSigned(bureaucrat);
        form.signForm();

        Form form2("Form three", 78, 78);
        //form2.beSigned(bureaucrat1); // except

        form2.signForm();

    }
    catch (Bureaucrat::GradeToHighException &e) {
        std::cout << "Bureaucrat failed! " << e.what() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Failed! " << e.what() << std::endl;
    }
    return 0;
}

