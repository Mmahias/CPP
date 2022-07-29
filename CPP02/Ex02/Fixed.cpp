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

bool Fixed::operator>(Fixed const &op_other) const
{
    return (this->getRawBits() > op_other.getRawBits());
}

bool Fixed::operator<(Fixed const &op_other) const
{
    return (this->getRawBits() < op_other.getRawBits());
}

bool Fixed::operator>=(Fixed const &op_other) const
{
    return (this->getRawBits() >= op_other.getRawBits());
}

bool Fixed::operator<=(Fixed const &op_other) const
{
    return (this->getRawBits() <= op_other.getRawBits());
}

bool Fixed::operator==(Fixed const &op_other) const
{
    return (this->getRawBits() == op_other.getRawBits());
}

bool Fixed::operator!=(Fixed const &op_other) const
{
    return (this->getRawBits() != op_other.getRawBits());
}

Fixed Fixed::operator+(Fixed const &op_other) const
{
    Fixed res;

    res.setRawBits(this->getRawBits() + op_other.getRawBits());
    return (res);
}

Fixed Fixed::operator-(Fixed const &op_other) const
{
    Fixed res;

    res.setRawBits(this->getRawBits() - op_other.getRawBits());
    return (res);
}

Fixed Fixed::operator*(Fixed const &op_other) const
{
    Fixed res(this->toFloat() * op_other.toFloat());

    return (res);
}

Fixed Fixed::operator/(Fixed const &op_other) const
{
    Fixed res(this->toFloat() / op_other.toFloat());

    return (res);
}

Fixed Fixed::operator++(void)
{
    cout << "Pre Increment operator called" << endl;
    this->value++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    cout << "Post Increment operator called" << endl;

    Fixed tmp(*this);
    operator++();
    return (tmp);
}

Fixed Fixed::operator--(void)
{
    cout << "Pre Decrement operator called" << endl;
    this->value--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    cout << "Post decrement operator called" << endl;

    Fixed tmp(*this);
    operator--();
    return (tmp);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return (b);
    else
        return (a);
}

Fixed   &Fixed::min(Fixed &a, Fixed &b)
{
    if (a > b)
        return (b);
    else
        return (a);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return (a);
    else
        return (b);
}

Fixed   &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return (a);
    else
        return (b);
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