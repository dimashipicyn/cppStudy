//
// Created by Lajuana Bespin on 9/14/21.
//

#include "ClassBureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::~Bureaucrat() {

}

const std::string &Bureaucrat::getName() const {
    return name_;
}

int Bureaucrat::getGrade() const {
    return grade;
}

void Bureaucrat::gradeUp(int grade) {

}

void Bureaucrat::gradeDown(int grade) {

}
