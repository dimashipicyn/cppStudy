//
// Created by Lajuana Bespin on 10/5/21.
//

#ifndef CPPSTUDY_SPAN_HPP
#define CPPSTUDY_SPAN_HPP
#include <vector>

class Span {
public:
    Span(unsigned int n);
    Span(const Span &span);
    ~Span();
    int getSize() const;
    void addNumber(int num);
    void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    unsigned int     shortSpan();
    unsigned int     longestSpan();
    int     operator[](int n);
    Span&   operator=(const Span& span);
private:
    std::vector<int>    numbers_;
    int                 size_;
    int                 capacity_;
};


#endif //CPPSTUDY_SPAN_HPP
