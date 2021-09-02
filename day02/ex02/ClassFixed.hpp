//
// Created by Дима Щипицын on 17/08/2021.
//

#ifndef CLASSFIXED_HPP
#define CLASSFIXED_HPP


#include <ostream>

class Fixed {
public:
    Fixed();
    Fixed(const Fixed & fixed);
    Fixed(const int n);
    Fixed(const float n);
    ~Fixed();

    int     getRawBits() const;
    void    setRawBits(int const rawBits);

    float   toFloat( void ) const;
    int     toInt( void ) const;

    Fixed               &operator=(const Fixed & fixed);

    bool                operator==(const Fixed &rhs) const;
    bool                operator!=(const Fixed &rhs) const;
    bool                operator<(const Fixed &rhs) const;
    bool                operator>(const Fixed &rhs) const;
    bool                operator<=(const Fixed &rhs) const;
    bool                operator>=(const Fixed &rhs) const;

    Fixed               operator+(const Fixed &rhs) const;
    Fixed               operator-(const Fixed &rhs) const;
    Fixed               operator*(const Fixed &rhs) const;
    Fixed               operator/(const Fixed &rhs) const;

    Fixed               operator++();
    Fixed               operator++(int);
    Fixed               operator--();
    Fixed               operator--(int);

    friend std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

    static Fixed& min(Fixed &a, Fixed &b);
    static const Fixed& min(const Fixed &a, const Fixed &b);
    static Fixed& max(Fixed &a, Fixed &b);
    static const Fixed& max(const Fixed &a, const Fixed &b);

private:
    static const int    num_of_fractional_bits_ = 8;
    int                 rawBits_;
};


#endif //CPPSTUDY_CLASSFIXED_HPP
