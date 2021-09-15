//
// Created by Lajuana Bespin on 9/14/21.
//

#include "ClassBureaucrat.hpp"

Bureaucrat::Bureaucrat() {
    throw Bureaucrat::GradeToLowException();
}

Bureaucrat::~Bureaucrat() {

}

const std::string &Bureaucrat::getName() const {
    return name_;
}

int Bureaucrat::getGrade() const {
    return grade_;
}

void Bureaucrat::gradeUp(int grade) {
    grade_ += grade;
}

void Bureaucrat::gradeDown(int grade) {
    grade_ -= grade;
}

const char *Bureaucrat::GradeToHighException::what() const _NOEXCEPT {
    return err_.c_str();
}

Bureaucrat::GradeToHighException::GradeToHighException() : err_("Grade to high exception") {

}

Bureaucrat::GradeToHighException::~GradeToHighException() _NOEXCEPT {

}

Bureaucrat::GradeToLowException::GradeToLowException() : err_("Grade to low exception") {

}

Bureaucrat::GradeToLowException::~GradeToLowException() _NOEXCEPT {

}

const char *Bureaucrat::GradeToLowException::what() const _NOEXCEPT {
    return err_.c_str();
}
