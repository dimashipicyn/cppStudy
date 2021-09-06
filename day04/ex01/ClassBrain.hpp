//
// Created by Lajuana Bespin on 9/6/21.
//

#ifndef CPPSTUDY_CLASSBRAIN_HPP
#define CPPSTUDY_CLASSBRAIN_HPP

#include <iostream>

class Brain {
public:
    Brain();
    ~Brain();
private:
    static const int numIdeas_ = 100;
    std::string ideas_[numIdeas_];
    Brain & operator=(const Brain *brain);
};


#endif //CPPSTUDY_CLASSBRAIN_HPP
