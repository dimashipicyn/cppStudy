//
// Created by Lajuana Bespin on 15/09/2021.
//

#ifndef CPPSTUDY_CLASSROBOTOMYREQUESTFORM_HPP
#define CPPSTUDY_CLASSROBOTOMYREQUESTFORM_HPP
#include "ClassForm.hpp"
#include "ClassBureaucrat.hpp"

class RobotomyRequestForm : public Form {
public:
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string &target);
    ~RobotomyRequestForm();
    void execute(Bureaucrat const &bureaucrat) const;
    RobotomyRequestForm &operator=(const RobotomyRequestForm &r);
private:
    std::string target_;
};


#endif //CPPSTUDY_CLASSROBOTOMYREQUESTFORM_HPP
