//
// Created by Lajuana Bespin on 9/6/21.
//

#ifndef CPPSTUDY_CLASSBRAIN_HPP
#define CPPSTUDY_CLASSBRAIN_HPP

#include <iostream>

class Brain {
public:
    Brain();
    Brain(const Brain &brain);
    ~Brain();

    const std::string       *getIdeas() const;
    Brain                   &operator=(const Brain *brain);

private:
    static const int numIdeas_ = 100;
    std::string ideas_[numIdeas_];
};


#endif //CPPSTUDY_CLASSBRAIN_HPP
