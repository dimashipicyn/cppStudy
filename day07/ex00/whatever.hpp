//
// Created by Lajuana Bespin on 9/18/21.
//

#ifndef CPPSTUDY_WHATEVER_HPP
#define CPPSTUDY_WHATEVER_HPP

template <typename T>
void    swap(T &a, T &b)
{
    T tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T&  min(T &a, T &b)
{
    if (a < b) {
        return a;
    }
    return b;
}

template <typename T>
T&  max(T &a, T &b)
{
    if (a > b) {
        return a;
    }
    return b;
}

#endif //CPPSTUDY_WHATEVER_HPP
