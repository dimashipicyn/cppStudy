//
// Created by Lajuana Bespin on 9/6/21.
//

#include "ClassBrain.hpp"

static const int N = 10;
std::string ideas[N] = {
        "Hello cat",
        "Hello dog",
        "Go to the moon",
        "I m cow",
        "Yes",
        "No",
        "Of course",
        "loh",
        "Privet Yaric",
        "Bye"
};

Brain::Brain() {
    std::cout << "Constructor Brain" << std::endl;
    for (int i = 0; i < numIdeas_; i++) {
        ideas_[i] = ideas[random() % N];
    }
}

Brain::~Brain() {
    std::cout << "Destructor Brain" << std::endl;
}

Brain &Brain::operator=(const Brain *brain) {
    std::cout << "Assignation operator brain" << std::endl;
    for (int i = 0; i < numIdeas_; ++i) {
        this->ideas_[i] = brain->getIdeas()[i];
    }
    return *this;
}

Brain::Brain(const Brain &brain) {
    for (int i = 0; i < numIdeas_; ++i) {
        this->ideas_[i] = brain.getIdeas()[i];
    }
}

const std::string *Brain::getIdeas() const {
    return ideas_;
}
