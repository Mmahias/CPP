#include "Cat.hpp"
#include <iostream>

using namespace std;

Cat::Cat()
{
    cout << "Cat Default Constructor called" << endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &other)
{
    cout << "Cat Copy Constructor called" << endl;
    this->type = other.type;
}

Cat &Cat::operator=(const Cat &op_other)
{
    cout << "Cat Copy assignement called" << endl;
    this->type = op_other.type;
    return (*this);
}

Cat::~Cat(void)
{
    cout << "Cat Destructor called" << endl;
}

void Cat::makeSound(void) const
{
    cout << "Meowwwwwwwwww" << endl;
}