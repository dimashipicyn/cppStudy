//
// Created by Lajuana Bespin on 15/09/2021.
//

#ifndef CPPSTUDY_CLASSFORM_HPP
#define CPPSTUDY_CLASSFORM_HPP
#include "ClassBureaucrat.hpp"

class Form {
public:
    Form();
    Form(const std::string &name, int gradeSign, int gradeExec);
    Form(const Form &form);
    virtual ~Form();

    const std::string   &getName() const;
    bool                isSigned() const;
    int                 getGradeSign() const;
    int                 getGradeExec() const;
    Form                &operator=(const Form &form);

    void                beSigned(const Bureaucrat &bureaucrat);
    void                signForm();
    virtual void execute(Bureaucrat const &bureaucrat) const = 0;

class GradeToLowException : public Bureaucrat::GradeToLowException {};
class GradeToHighException : public Bureaucrat::GradeToHighException {};

private:
    std::string name_;
    bool        isSigned_;
    int         gradeSign_;
    int         gradeExec_;
    Bureaucrat  bureaucrat_;
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif //CPPSTUDY_CLASSFORM_HPP
