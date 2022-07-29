#include "Dog.hpp"
#include <iostream>

using namespace std;

Dog::Dog()
{
    cout << "Dog Default Constructor called" << endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &other)
{
    cout << "Dog Copy Constructor called" << endl;
    this->type = other.type;
}

Dog &Dog::operator=(const Dog &op_other)
{
    cout << "Dog Copy assignement called" << endl;
    this->type = op_other.type;
    return (*this);
}

Dog::~Dog(void)
{
    cout << "Dog Destructor called" << endl;
}

void Dog::makeSound(void) const
{
    cout << "Wuaffffffffff" << endl;
}