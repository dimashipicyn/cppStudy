//
// Created by Lajuana Bespin on 9/18/21.
//

#ifndef CPPSTUDY_ITER_HPP
#define CPPSTUDY_ITER_HPP

template <typename T>
void print_elem(T const &elem)
{
    std::cout << elem << std::endl;
}

template <typename T>
void iter(T const *array, uint64_t size, void (*f)(T const &elem))
{
    for (uint64_t i = 0; i < size; ++i) {
        f(array[i]);
    }
}

#endif //CPPSTUDY_ITER_HPP
