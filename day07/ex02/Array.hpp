//
// Created by Дима Щипицын on 20/09/2021.
//

#ifndef CPPSTUDY_ARRAY_HPP
#define CPPSTUDY_ARRAY_HPP
#include <iostream>

template <class T>
class Array {
public:
    Array() : len_(0), data_(nullptr) {}
    Array(unsigned int n) {
        data_ = new T[n];
        len_ = n;
    }
    Array(const Array &array) : len_(0), data_(nullptr) {
        operator=(array);
    }
    ~Array() {
        delete data_;
    }
    Array &operator=(const Array &array) {
        if (data_)
            delete data_;
        data_ = new T[array.len_];
        std::memcpy(data_, array.data_, array.len_ * sizeof(T));
        len_ = array.len_;
        return *this;
    }
    T &operator[](unsigned int n) {
        if (n < len_)
            return data_[n];
        throw std::out_of_range("Array out of range");
    }
    const unsigned int &len() {return len_;}
private:
    unsigned int    len_;
    T               *data_;
};

#endif //CPPSTUDY_ARRAY_HPP
