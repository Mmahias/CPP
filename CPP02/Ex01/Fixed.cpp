#include "Fixed.hpp"
#include <iostream>
#include <cmath>

using namespace std;

Fixed::Fixed(void) : value(0)
{
    cout << "Default constructor called" << endl;
}

Fixed::Fixed(const int c_value)
{
    cout << "Int constructor called" << endl;
    this->value = c_value << this->fract;
}

Fixed::Fixed(const float f_value)
{
    cout << "Float construcor called" << endl;
    this->value = roundf(f_value * (1 << fract));
}

Fixed::Fixed(const Fixed &other)
{
    cout << "Copy constructor called" << endl;
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &op_other)
{
    cout << "Copy assignment operator called" << endl;
    if (this != &op_other)
        this->value = op_other.value;
    return *this;
}

Fixed::~Fixed(void)
{
    cout << "Destructor called" << endl;
}

int Fixed::getRawBits(void) const
{
    cout << "getRawBits member function called" << endl;
    return (this->value);
}

void Fixed::setRawBits(int const raw)
{
    cout << "setRawBits member fonction called" << endl;
    this->value = raw;
}

ostream  & operator << (ostream &out, const Fixed &c_other)
{
    out << c_other.toFloat();
    return (out);
}

float Fixed::toFloat(void) const
{
    return ((float)this->value / (float)(1 << fract));
}

int Fixed::toInt(void) const
{
    return (this->value >> fract);
}