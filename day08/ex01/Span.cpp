//
// Created by Lajuana Bespin on 10/5/21.
//

#include "Span.hpp"
#include <iostream>
#include <algorithm>

Span::Span(unsigned int n) : size_(0) {
    capacity_ = n;
}

Span::~Span() {
}

void Span::addNumber(int num) {
    if (capacity_ <= size_) {
        throw std::overflow_error("Span overflow");
    }
    numbers_.push_back(num);
    size_++;
}

unsigned int Span::shortSpan() {
    if (size_ < 2)
        throw std::runtime_error("Elements less than two");
    std::vector<int> copy_num = numbers_;
    std::sort(copy_num.begin(), copy_num.end());
    unsigned int minInterval = 0xFFFFFFFF;
    for (std::vector<int>::iterator it = copy_num.begin(); it < copy_num.end() - 1; it++) {
        unsigned int newMinInterval = *(it + 1) - *it;
        if (newMinInterval < minInterval)
            minInterval = newMinInterval;
    }
    return minInterval;
}

unsigned int Span::longestSpan() {
    if (size_ < 2)
        throw std::runtime_error("Elements less than two");
    std::vector<int>::iterator min = std::min_element(numbers_.begin(), numbers_.end());
    std::vector<int>::iterator max = std::max_element(numbers_.begin(), numbers_.end());

    return *max - *min;
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    while (begin < end) {
        addNumber(*begin);
        begin++;
    }
}

int Span::getSize() {
    return size_;
}

int Span::operator[](int n) {
    return numbers_[n];
}
