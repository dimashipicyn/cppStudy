//
// Created by Дима Щипицын on 03/09/2021.
//

#include <iostream>
#include "Span.hpp"

int main()
{
    const int maxElem = 10;
    Span span(maxElem + maxElem);
    std::vector<int> numbers;

    std::srand(std::time(NULL));
    for (int i = 0; i < maxElem; ++i) {
        int num = std::rand();
        if (i % 2 == 0)
            num *= -1;
        span.addNumber(num);
        numbers.push_back(std::rand() * num);
    }
    span.addNumber(numbers.begin(), numbers.end());


    std::cout << "Size of span: "  << span.getSize() << std::endl;
    for (int i = 0; i < span.getSize(); ++i) {
        std::cout << "Span elem index: " << i << " value: " << span[i] << std::endl;
    }

    std::cout << "Search longest span: "  << span.longestSpan() << std::endl;
    std::cout << "Search short span: "  << span.shortSpan() << std::endl;

    return 0;
}

