//
// Created by Дима Щипицын on 03/09/2021.
//

#include <iostream>
#include "ClassBureaucrat.hpp"

int main()
{
    try {
        Bureaucrat bureaucrat;
    }
    catch (Bureaucrat::GradeToHighException &e) {
        std::cout << "Bureaucrat failed! " << e.what() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Failed! " << e.what() << std::endl;
    }
    return 0;
}

