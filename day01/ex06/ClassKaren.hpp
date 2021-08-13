//
// Created by Lajuana Bespin on 8/13/21.
//

#ifndef CPPSTUDY_CLASSKAREN_HPP
#define CPPSTUDY_CLASSKAREN_HPP
#include <iostream>

class Karen {
public:
    Karen( void );
    ~Karen( void );
    void complain( std::string level );
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    struct keyval_ {
        std::string key;
        void(Karen::*f)(void);
    };
    const int size_;
    keyval_     arrKeyval_[4];
};


#endif //CPPSTUDY_CLASSKAREN_HPP
