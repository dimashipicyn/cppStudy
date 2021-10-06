//
// Created by Дима Щипицын on 03/09/2021.
//

#include <iostream>
#include "Span.hpp"

void foo() {
    const int maxElem = 10;
    Span span(maxElem + maxElem);
    std::vector<int> numbers;

    // initial span
    std::srand(std::time(NULL));
    for (int i = 0; i < maxElem; ++i) {
        int num = std::rand();
        if (i % 2 == 0)
            num *= -1;
        span.addNumber(num);
        numbers.push_back(std::rand() * num);
    }

    // addNumber iterators
    span.addNumber(numbers.begin(), numbers.end());

    // test copy constructors
    {
        Span spanCopy1(1);
        spanCopy1 = span;
        Span spanCopy2(spanCopy1);
        for (int i = 0; i < span.getSize(); ++i) {
            if (span[i] != spanCopy2[i]) {
                std::cout << "Invalid copy" << std::endl;
            }
        }
    }

    // print values
    std::cout << "Size of span: "  << span.getSize() << std::endl;
    for (int i = 0; i < span.getSize(); ++i) {
        std::cout << "Span elem index: " << i << " value: " << span[i] << std::endl;
    }

    // print functions
    std::cout << "Search longest span: "  << span.longestSpan() << std::endl;
    std::cout << "Search short span: "  << span.shortSpan() << std::endl;
}

int main()
{
    foo(); // tests
//   while (1) // leaks
//       ;
    return 0;
}

