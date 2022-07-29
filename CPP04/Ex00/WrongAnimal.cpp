#include "WrongAnimal.hpp"
#include <iostream>

using namespace std;

WrongAnimal::WrongAnimal()
{
    cout << "WrongAnimal Default Constructor called" << endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    cout << "WrongAnimal Copy Constructor called" << endl;
    *this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &op_other)
{
    cout << "WrongAnimal Copy assignement called" << endl;
    this->type = op_other.type;
    return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
    cout << "WrongAnimal Destructor called" << endl;
}

void WrongAnimal::makeSound(void) const
{
    cout << "WrongAnimal Sound ..." << endl;
}

std::string WrongAnimal::getType(void) const
{
    return (this->type);
}