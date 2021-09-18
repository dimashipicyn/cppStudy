//
// Created by Дима Щипицын on 03/09/2021.
//

#include <iostream>
#include <cmath>

void print_char(double num)
{
    std::cout << "char: ";
    if (isnan(num) || isinf(num)) {
        std::cout << "impossible" << std::endl;
        return ;
    }
    
    char ch;
    ch = static_cast<char>(num);
    if (std::isprint(ch)) {
         std::cout << "'" << ch << "'" << std::endl;
    }
    else {
        std::cout << "Non displayable" << std::endl;
    }
}

void print_int(double num)
{
    std::cout << "int: ";
    if (isnan(num) || isinf(num)) {
        std::cout << "impossible" << std::endl;
        return ;
    }
    
    int n;
    n = static_cast<int>(num);
    std::cout << n << std::endl;
}

void print_float(double num)
{
    std::cout << "float: ";

    float n;
    n = static_cast<float>(num);
    std::cout << n << ((ceil(n) - floor(n)) == 0.0 ? ".0" : "") << "f" << std::endl;
}

void print_double(double num)
{
    std::cout << "double: ";

    double n;
    n = static_cast<double>(num);
    std::cout << n << ((ceil(n) - floor(n)) == 0.0 ? ".0" : "") << std::endl;
}

void conv(const std::string &s)
{
    char    *end;
    double  num;

    num = std::strtod(s.c_str(), &end);
    if ((*end != '\0' && *end != 'f') || (*end == 'f' && *(end + 1) != '\0')) {
        std::cout << "Not cast!" << std::endl;
        return ;
    }

    print_char(num);
    print_int(num);
    print_float(num);
    print_double(num);
}

int main(int ac , char **av)
{
    if (ac != 2) {
        std::cout << "Error!" << std::endl;
        return 1;
    }
    conv(av[1]);
    return 0;
}

