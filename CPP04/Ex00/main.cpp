#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include <iostream>

using namespace std;

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    cout << "Type: [ " << j->getType() << " ] " << endl;
    cout << "Type: [ " << i->getType() << " ] " << endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    // suite des tests
    
    const WrongAnimal *bad = new WrongAnimal();
    const WrongAnimal *badcat = new WrongCat();

    cout << "Type: [ " << bad->getType() << " ] " << endl;
    cout << "Type: [ " << badcat->getType() << " ] " << endl;

    bad->makeSound();
    badcat->makeSound();

    delete bad;
    delete badcat;

    return (0);
}