//
// Created by Дима Щипицын on 20/09/2021.
//

#ifndef CPPSTUDY_ARRAY_HPP
#define CPPSTUDY_ARRAY_HPP

template <class T>
class Array {
public:
    Array() {
        len = 0;
        data = nullptr;
    }
    Array(unsigned int n) {
        data = new T();
        capacity = n;
    }
    Array(const Array &array) {

    }
private:
    int len;
    int capacity;
    T   *data;
};

#endif //CPPSTUDY_ARRAY_HPP
