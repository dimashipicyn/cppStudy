//
// Created by Lajuana Bespin on 15/09/2021.
//

#include "ClassShrubberyCreationForm.hpp"
#include <fstream>
ShrubberyCreationForm::ShrubberyCreationForm()  : Form("Shrubbery", 145, 137), target_("target"){

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("Shrubbery", 145, 137), target_(target) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

void ShrubberyCreationForm::execute(Bureaucrat const &bureaucrat) const {
    if (!isSigned()) {
        std::cout << "Form " << getName() << " is not signed!" << std::endl;
        return;
    }
    if (getGradeExec() < bureaucrat.getGrade()) {
        throw GradeToLowException();
    }
    std::string filename(target_ + "_shrubbery");
    try {
        std::ofstream out(filename);

        out << "   ^   " << std::endl;
        out << "  ^^^  " << std::endl;
        out << " ^^^^^ " << std::endl;
        out << "^^^^^^^" << std::endl;
        out.close();
    }
    catch (std::exception &e) {
        std::cout << "Fail to write file: " << filename << ". "  << e.what() << std::endl;
    }
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &s) {
    Form::operator=(s);
    target_ = s.target_;
    return *this;
}
