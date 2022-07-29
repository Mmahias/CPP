#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include <iostream>

using namespace std;

int main()
{
    Animal *a = new Cat();
    Animal *b = new Dog();

    //Animal *c = new Animal();

    a->makeSound();
    b->makeSound();

    delete a;
    delete b;

    return (0);
}