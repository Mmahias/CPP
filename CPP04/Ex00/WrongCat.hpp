#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
    public :

    WrongCat();
    WrongCat(const WrongCat &other);
    WrongCat &operator=(const WrongCat &op_other);
    virtual ~WrongCat(void);

    virtual void makeSound(void) const;
};

#endif