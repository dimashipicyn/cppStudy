//
// Created by Lajuana Bespin on 15/09/2021.
//

#include "ClassForm.hpp"

Form::Form() : name_(""), isSigned_(false), gradeSign_(0), gradeExec_(0), bureaucrat_() {}

Form::Form(const std::string &name, int gradeSign, int gradeExec) : name_(name), isSigned_(false) {
    if (gradeSign > 150 || gradeExec > 150)
        throw GradeToLowException();
    if (gradeSign < 1 || gradeExec < 1)
        throw GradeToHighException();
    gradeExec_ = gradeExec;
    gradeSign_ = gradeSign;
}

Form::Form(const Form &form) {
    Form::operator=(form);
}

Form &Form::operator=(const Form &form) {
    name_ = form.name_;
    isSigned_ = form.isSigned_;
    gradeSign_ = form.gradeSign_;
    gradeExec_ = form.gradeExec_;
    bureaucrat_ = form.bureaucrat_;
    return *this;
}

Form::~Form() {

}

const std::string &Form::getName() const {
    return name_;
}

bool Form::isSigned() const {
    return isSigned_;
}

int Form::getGradeSign() const {
    return gradeSign_;
}

int Form::getGradeExec() const {
    return gradeExec_;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
    if (isSigned()) {
        std::cout << "The form is already signed!" << std::endl;
        return;
    }
    if (bureaucrat.getGrade() > getGradeSign()) {
        throw GradeToLowException();
    }
    isSigned_ = true;
    bureaucrat_ = bureaucrat;
}

void Form::signForm() {
    if (isSigned()) {
        std::cout << bureaucrat_.getName() << " signs the " << name_ << std::endl;
    } else {
        if (!bureaucrat_.getName().empty()) {
            std::cout << bureaucrat_.getName() << " cannot sign "\
            << name_ << " because a low grade to sign" << std::endl;
        } else {
            std::cout << name_ << " not signed yet" << std::endl;
        }
    }
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
    os << "Form name: " << form.getName() << ", is signed form: "\
    << (form.isSigned() ? "yes" : "no") << ", grade to sign: " << form.getGradeSign()\
    << ", grade to execute: " << form.getGradeExec();
    return os;
}
