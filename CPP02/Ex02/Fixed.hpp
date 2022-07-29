#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
    public:

    Fixed(void);
    Fixed(const int c_value);
    Fixed(const float f_value);
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &op_other);
    ~Fixed(void);

    bool operator>(Fixed const &op_other) const;
    bool operator<(Fixed const &op_other) const;
    bool operator>=(Fixed const &op_other) const;
    bool operator<= (Fixed const &op_other) const;
    bool operator==(Fixed const &op_other) const;
    bool operator!=(Fixed const &op_other) const;
    
    Fixed operator+(Fixed const &op_other) const;
    Fixed operator-(Fixed const &op_other) const;
    Fixed operator*(Fixed const &op_other) const;
    Fixed operator/(Fixed const &op_other) const;

    Fixed operator++(void);
    Fixed operator++(int);
    Fixed operator--(void);
    Fixed operator--(int);

    static const Fixed &min(Fixed const &a, Fixed const &b);
    static Fixed &min(Fixed &a, Fixed &b);
    static const Fixed &max(Fixed const &a, Fixed const &b);
    static Fixed &max(Fixed &a, Fixed &b);

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
    
    private:

    int value;
    static const int fract = 8;
};

std::ostream & operator << (std::ostream &out, const Fixed &c_other);
#endif