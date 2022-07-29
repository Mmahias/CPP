#include "Cat.hpp"
#include <iostream>

using namespace std;

Cat::Cat()
{
    cout << "Cat Default Constructor called" << endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat &other)
{
    cout << "Cat Copy Constructor called" << endl;
    this->brain = new Brain(*(other.brain));
    this->type = other.type;
    *this = other;
}

Cat &Cat::operator=(const Cat &op_other)
{
    cout << "Cat Copy assignement called" << endl;
    this->type = op_other.type;
    *(this->brain) = *(op_other.getBrain());
    return (*this);
}

Cat::~Cat(void)
{
    cout << "Cat Destructor called" << endl;
    delete this->brain;
}

void Cat::makeSound(void) const
{
    cout << "Meowwwwwwwwww" << endl;
}

Brain *Cat::getBrain(void) const
{
    return (this->brain);
}