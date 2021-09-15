//
// Created by Lajuana Bespin on 15/09/2021.
//

#ifndef CPPSTUDY_CLASSSHRUBBERYCREATIONFORM_HPP
#define CPPSTUDY_CLASSSHRUBBERYCREATIONFORM_HPP
#include "ClassForm.hpp"
#include "ClassBureaucrat.hpp"

class ShrubberyCreationForm : public Form {
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string &target);
    ~ShrubberyCreationForm();
    void execute(Bureaucrat const &bureaucrat) const;
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &s);
private:
    std::string target_;
};


#endif //CPPSTUDY_CLASSSHRUBBERYCREATIONFORM_HPP
