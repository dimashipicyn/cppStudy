//
// Created by Lajuana Bespin on 15/09/2021.
//

#include "ClassRobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy", 72, 45), target_("target") {

}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("Robotomy", 72, 45), target_(target) {

}

RobotomyRequestForm::~RobotomyRequestForm() {

}

void RobotomyRequestForm::execute(Bureaucrat const &bureaucrat) const {
    if (!isSigned()) {
        std::cout << "Form " << getName() << " is not signed!" << std::endl;
        return;
    }
    if (getGradeExec() < bureaucrat.getGrade()) {
        throw GradeToLowException();
    }
    std::cout << "bzhhzhhzhhhzhhhh hshhhzhhzhhh zhdhhhh h!" << std::endl;
    std::cout << target_ << "has been robotomized successfully 50% of the time." <<std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &r) {
    Form::operator=(r);
    target_ = r.target_;
    return *this;
}
