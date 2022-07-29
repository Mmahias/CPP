#include "Brain.hpp"
#include <iostream>

using namespace std;

Brain::Brain()
{
    cout << "Brain Default Constructor called" << endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "Another idea";
}

Brain::Brain(const Brain &other)
{
    cout << "Brain Copy Constructor called" << endl;
    *this = other;
}

Brain &Brain::operator=(const Brain &op_other)
{
    cout << "Brain Copy assignement called" << endl;
    if (this !=  &op_other)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = op_other.ideas[i];
    }
    return (*this);
}

Brain::~Brain(void)
{
    cout << "Brain Destrutor called" << endl;
}