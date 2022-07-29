#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{

    public :

    Dog();
    Dog(const Dog &other);
    Dog &operator=(const Dog & op_other);
    virtual ~Dog(void);

    virtual void makeSound(void) const;

};

#endif