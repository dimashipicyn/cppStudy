//
// Created by Дима Щипицын on 17/08/2021.
//

#ifndef CPPSTUDY_CLASSFIXED_HPP
#define CPPSTUDY_CLASSFIXED_HPP


class Fixed {
public:
    Fixed();
    ~Fixed();

    Fixed(const Fixed & fixed);
    int getRawBits() const;
    void setRawBits(int const rawBits);
    Fixed & operator= (const Fixed & fixed);

private:
    static const int    num_of_fractional_bits_ = 8;
    int                 rawBits_;
};


#endif //CPPSTUDY_CLASSFIXED_HPP
