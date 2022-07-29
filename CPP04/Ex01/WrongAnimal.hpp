#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    public: 

    WrongAnimal();
    WrongAnimal(const WrongAnimal &other);
    WrongAnimal &operator=(const WrongAnimal &op_other);
    virtual ~WrongAnimal(void);

    virtual std::string getType(void) const;
    virtual void makeSound(void) const;
    

    protected :

    std::string type;
};

#endif