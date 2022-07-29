#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    public: 

    Animal();
    Animal(const Animal &other);
    Animal &operator=(const Animal &op_other);
    virtual ~Animal(void);

    virtual std::string getType(void) const;
    virtual void makeSound(void) const = 0;
    

    protected :

    std::string type;
};

#endif