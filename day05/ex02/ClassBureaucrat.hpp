//
// Created by Lajuana Bespin on 9/14/21.
//

#ifndef CPPSTUDY_CLASSBUREAUCRAT_HPP
#define CPPSTUDY_CLASSBUREAUCRAT_HPP
#include <iostream>
#include <exception>

class Form;

class Bureaucrat {
public:
    Bureaucrat();
    Bureaucrat(const std::string &name, int grade);
    Bureaucrat(const Bureaucrat & bureaucrat);
    virtual ~Bureaucrat();

    Bureaucrat          &operator=(const Bureaucrat &bureaucrat);
    const std::string   &getName() const;
    int                 getGrade() const;
    void                gradeUp();
    void                gradeDown();
    void                executeForm(Form const & form);

    class GradeToHighException : public std::exception {
    public:
        GradeToHighException();
        virtual ~GradeToHighException() _NOEXCEPT;
        const char *what() const _NOEXCEPT;
    };

    class GradeToLowException : public std::exception {
    public:
        GradeToLowException();
        virtual ~GradeToLowException() _NOEXCEPT;

        const char *what() const _NOEXCEPT;
    };

private:
    std::string     name_;
    int             grade_;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);


#endif //CPPSTUDY_CLASSBUREAUCRAT_HPP
