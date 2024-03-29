#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal
{
    public :

    Cat();
    Cat(const Cat &other);
    Cat &operator=(const Cat &op_other);
    virtual ~Cat(void);

    virtual void makeSound(void) const;
    virtual Brain *getBrain(void) const;

    private :

    Brain *brain;
};

#endif