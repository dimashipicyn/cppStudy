//
// Created by Lajuana Bespin on 10/5/21.
//

#ifndef CPPSTUDY_EASYFIND_HPP
#define CPPSTUDY_EASYFIND_HPP
#include <algorithm>

template<typename T>
int easyfind(T cont, int num)
{
    typename T::iterator it = std::find(cont.begin(), cont.end(), num);
    if (it == cont.end())
        throw std::runtime_error("Find element fail");
    return num;
}

#endif //CPPSTUDY_EASYFIND_HPP
