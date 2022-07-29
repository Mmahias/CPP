#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
    public:

    Fixed(void);
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &op_other);
    ~Fixed(void);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    
    private:

    int value;
    static const int fract = 8;
};

#endif