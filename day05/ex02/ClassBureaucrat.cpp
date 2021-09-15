//
// Created by Lajuana Bespin on 9/14/21.
//

#include "ClassBureaucrat.hpp"
#include "ClassForm.hpp"

Bureaucrat::Bureaucrat() : name_(""), grade_(150) {

}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name_(name) {
    if (grade > 150)
        throw Bureaucrat::GradeToLowException();
    if (grade < 1)
        throw Bureaucrat::GradeToHighException();
    grade_ = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) {
    Bureaucrat::operator=(bureaucrat);
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
    grade_ = bureaucrat.grade_;
    name_ = bureaucrat.name_;
    return *this;
}

Bureaucrat::~Bureaucrat() {

}

const std::string &Bureaucrat::getName() const {
    return name_;
}

int Bureaucrat::getGrade() const {
    return grade_;
}

void Bureaucrat::gradeUp() {
    if ((grade_ - 1) < 1)
        throw Bureaucrat::GradeToHighException();
    grade_ -= 1;
}

void Bureaucrat::gradeDown() {
    if ((grade_ + 1) > 150)
        throw Bureaucrat::GradeToLowException();
    grade_ += 1;
}

void Bureaucrat::executeForm(Form const &form) {
    try {
        form.execute(*this);
        std::cout << "Bureaucrat " << name_ << " execute " << form.getName() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Form cannot execute! "  << e.what() << std::endl;
    }
}

const char *Bureaucrat::GradeToHighException::what() const _NOEXCEPT {
    return "Grade too high exception";
}

Bureaucrat::GradeToHighException::GradeToHighException() {

}

Bureaucrat::GradeToHighException::~GradeToHighException() _NOEXCEPT {

}

Bureaucrat::GradeToLowException::GradeToLowException() {

}

Bureaucrat::GradeToLowException::~GradeToLowException() _NOEXCEPT {

}

const char *Bureaucrat::GradeToLowException::what() const _NOEXCEPT {
    return "Grade to low exception";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
    os << "Bureaucrat name: " << bureaucrat.getName() << ", grade: " << bureaucrat.getGrade();
    return os;
}