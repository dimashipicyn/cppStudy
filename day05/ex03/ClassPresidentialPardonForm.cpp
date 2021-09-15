//
// Created by Lajuana Bespin on 15/09/2021.
//

#include "ClassPresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential", 25, 5), target_("target") {

}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("Presidential", 25, 5), target_(target) {

}

PresidentialPardonForm::~PresidentialPardonForm() {

}

void PresidentialPardonForm::execute(Bureaucrat const &bureaucrat) const {
    if (!isSigned()) {
        std::cout << "Form " << getName() << " is not signed!" << std::endl;
        return;
    }
    if (getGradeExec() < bureaucrat.getGrade()) {
        throw GradeToLowException();
    }
    std::cout << target_ << "has been pardoned by Zafod Beeblebrox." <<std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &p) {
    Form::operator=(p);
    target_ = p.target_;
    return *this;
}
