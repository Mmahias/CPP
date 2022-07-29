#include "Animal.hpp"
#include <iostream>

using namespace std;

Animal::Animal()
{
    cout << "Animal Default Constructor called" << endl;
    this->type = "Animal";
}

Animal::Animal(const Animal &other)
{
    cout << "Animal Copy Constructor called" << endl;
    *this = other;
}

Animal &Animal::operator=(const Animal &op_other)
{
    cout << "Animal Copy assignement called" << endl;
    this->type = op_other.type;
    return (*this);
}

Animal::~Animal(void)
{
    cout << "Animal Destructor called" << endl;
}

void Animal::makeSound(void) const
{
    cout << "Animal Sound ..." << endl;
}

std::string Animal::getType(void) const
{
    return (this->type);
}