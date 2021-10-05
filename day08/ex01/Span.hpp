//
// Created by Lajuana Bespin on 10/5/21.
//

#ifndef CPPSTUDY_SPAN_HPP
#define CPPSTUDY_SPAN_HPP
#include <vector>

class Span {
public:
    Span(unsigned int n);
    ~Span();
    int getSize();
    void addNumber(int num);
    void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    unsigned int     shortSpan();
    unsigned int     longestSpan();
    int     operator[](int n);
private:
    std::vector<int>    numbers_;
    int                 size_;
    int                 capacity_;
};


#endif //CPPSTUDY_SPAN_HPP
