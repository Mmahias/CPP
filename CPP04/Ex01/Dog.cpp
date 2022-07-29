#include "Dog.hpp"
#include <iostream>

using namespace std;

Dog::Dog()
{
    cout << "Dog Default Constructor called" << endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog &other)
{
    cout << "Dog Copy Constructor called" << endl;
    this->brain = new Brain(*(other.brain));
    this->type = other.type;
    *this = other;
}

Dog &Dog::operator=(const Dog &op_other)
{
    cout << "Dog Copy assignement called" << endl;
    this->type = op_other.type;
    *(this->brain) = *(op_other.brain);
    return (*this);
}

Dog::~Dog(void)
{
    cout << "Dog Destructor called" << endl;
    delete this->brain;
}

void Dog::makeSound(void) const
{
    cout << "Wuaffffffffff" << endl;
}

Brain *Dog::getBrain(void) const
{
    return (this->brain);
}