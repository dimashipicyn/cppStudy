//
// Created by Lajuana Bespin on 9/14/21.
//

#ifndef CPPSTUDY_CLASSBUREAUCRAT_HPP
#define CPPSTUDY_CLASSBUREAUCRAT_HPP
#include <iostream>
#include <exception>

class Bureaucrat {
public:
    Bureaucrat();
    virtual ~Bureaucrat();
    const std::string &getName() const;
    int getGrade() const;
    void    gradeUp(int grade);
    void    gradeDown(int grade);

    class GradeToHighException : public std::exception {
    public:
        GradeToHighException();
        virtual ~GradeToHighException() _NOEXCEPT;

        const char *what() const _NOEXCEPT;

    private:
        std::string err_;
    };

    class GradeToLowException : public std::exception {
    public:
        GradeToLowException();
        virtual ~GradeToLowException() _NOEXCEPT;

        const char *what() const _NOEXCEPT;

    private:
        std::string err_;
    };

private:
    std::string name_;
    int         grade_;
};


#endif //CPPSTUDY_CLASSBUREAUCRAT_HPP
