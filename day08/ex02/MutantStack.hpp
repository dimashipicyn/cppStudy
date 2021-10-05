//
// Created by Lajuana Bespin on 10/5/21.
//

#ifndef CPPSTUDY_MUTANTSTACK_HPP
#define CPPSTUDY_MUTANTSTACK_HPP
#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
public:
    typedef typename std::stack<T>::container_type::iterator iterator;

    iterator    begin() {
        return std::stack<T>::c.begin();
    }
    iterator    end() {
        return std::stack<T>::c.end();
    }
};


#endif //CPPSTUDY_MUTANTSTACK_HPP
