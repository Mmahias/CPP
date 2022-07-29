#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include <iostream>

using namespace std;

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;
    
    cout << "\n-------------------------------\n" << endl;

    // Test Copy
    Cat a;
    Cat b;

    Brain br;

    br.ideas[0] = "I'am CAAAAAT";

    a.getBrain()->ideas[0] = br.ideas[0];

    cout << "Before Assignation [b = a]" << endl;

    cout << "b idea[0]: " << b.getBrain()->ideas[0] << endl;

    //Copy Assignation
    b = a;

    //Copy
    Cat c(a);

    cout << "After Assignation [b = a]" << endl;
    cout << "a idea[0]: " << a.getBrain()->ideas[0] << endl;
    cout << "b idea[0]: " << b.getBrain()->ideas[0] << endl;
    cout << "c idea[0]: " << c.getBrain()->ideas[0] << endl;

    cout << "\n-------------------------------\n" << endl;

    // Test Array

    int nb = 6;

    Animal *array[nb];

    for (int i = 0; i < nb; i++)
    {
        if (i % 2 == 0)
            array[i] = new Cat();
        else
            array[i] = new Dog();
        array[i]->makeSound();
        cout << endl;
    }

    for (int i = 0; i < nb; i++)
        delete array[i];

    return (0);

}