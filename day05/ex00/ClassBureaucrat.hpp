//
// Created by Lajuana Bespin on 9/14/21.
//

#ifndef CPPSTUDY_CLASSBUREAUCRAT_HPP
#define CPPSTUDY_CLASSBUREAUCRAT_HPP


class Bureaucrat {
public:
    Bureaucrat();
    virtual ~Bureaucrat();
    const std::string &getName() const;
    int getGrade() const;
    void    gradeUp(int grade);
    void    gradeDown(int grade);

private:
    std::string name_;
    int         grade;
};


#endif //CPPSTUDY_CLASSBUREAUCRAT_HPP
