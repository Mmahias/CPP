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