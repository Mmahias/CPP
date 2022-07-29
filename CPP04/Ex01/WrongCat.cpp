#include "WrongCat.hpp"
#include <iostream>

using namespace std;

WrongCat::WrongCat()
{
    cout << "WrongCat Default Constructor called" << endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other)
{
    cout << "WrongCat Copy Constructor called" << endl;
    this->type = other.type;
}

WrongCat &WrongCat::operator=(const WrongCat &op_other)
{
    cout << "WrongCat Copy assignement called" << endl;
    this->type = op_other.type;
    return (*this);
}

WrongCat::~WrongCat(void)
{
    cout << "WrongCat Destructor called" << endl;
}

void WrongCat::makeSound(void) const
{
    cout << "Bad Cat !!!!!!!!!!" << endl;
}