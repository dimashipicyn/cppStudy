//
// Created by Lajuana Bespin on 15/09/2021.
//

#ifndef CPPSTUDY_CLASSPRESIDENTIALPARDONFORM_HPP
#define CPPSTUDY_CLASSPRESIDENTIALPARDONFORM_HPP
#include "ClassForm.hpp"
#include "ClassBureaucrat.hpp"

class PresidentialPardonForm : public Form {
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string &target);
    ~PresidentialPardonForm();
    void execute(Bureaucrat const &bureaucrat) const;
    PresidentialPardonForm &operator=(const PresidentialPardonForm &p);
private:
    std::string target_;
};


#endif //CPPSTUDY_CLASSPRESIDENTIALPARDONFORM_HPP
