//
// Created by Дима Щипицын on 03/09/2021.
//

#include <iostream>
#include "ClassBureaucrat.hpp"

int main()
{
    try {
        Bureaucrat bureaucrat("Yaric", 3);
        Bureaucrat bureaucrat1("Sergay", 149);
        Bureaucrat b;

        b = bureaucrat;
        
        std::cout << b << std::endl;

        std::cout << bureaucrat << std::endl;
        bureaucrat.gradeUp();
        std::cout << bureaucrat << std::endl;
        bureaucrat.gradeUp();
        std::cout << bureaucrat << std::endl;
        //bureaucrat.gradeUp();                 // throw GradeToHighException
        //std::cout << bureaucrat << std::endl; // не выполнится

        std::cout << bureaucrat1 << std::endl;
        bureaucrat1.gradeDown();
        std::cout << bureaucrat1 << std::endl;
        //bureaucrat1.gradeDown();              // throw GradeToLowException
        //std::cout << bureaucrat1 << std::endl;// не выполнится
    }
    catch (Bureaucrat::GradeToHighException &e) {
        std::cout << "Bureaucrat failed! " << e.what() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Failed! " << e.what() << std::endl;
    }
    return 0;
}

