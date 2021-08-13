//
// Created by Lajuana Bespin on 8/13/21.
//

#include "ClassKaren.hpp"

Karen::Karen() : size_(4) {
    arrKeyval_[0] = (keyval_){"DEBUG", &Karen::debug};
    arrKeyval_[1] = (keyval_){"INFO", &Karen::info};
    arrKeyval_[2] = (keyval_){"WARNING", &Karen::warning};
    arrKeyval_[3] = (keyval_){"ERROR", &Karen::error};
}

Karen::~Karen() {

}

void Karen::complain(std::string level) {
    for (int i = 0; i < size_; i++) {
        if (level == arrKeyval_[i].key) {
            (this->*arrKeyval_[i].f)();
            return ;
        }
    }
}

void Karen::debug(void) {
    std::cout << "I love to get extra bacon for my "
                 "XL-double-cheese-triple-pickle-special-ketchup burger. "
                 "I just love it!" << std::endl;
}

void Karen::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been"
                 " coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void) {
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::info(void) {
    std::cout << "I cannot believe adding extra"
                 " bacon cost more money. You don’t put enough!"
                 " If you did I would not have to ask for it!" << std::endl;
}
