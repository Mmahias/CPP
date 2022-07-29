#include "Fixed.hpp"
#include <iostream>

using namespace std;

Fixed::Fixed(void) : value(0)
{
    cout << "Default constructor called" << endl;
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