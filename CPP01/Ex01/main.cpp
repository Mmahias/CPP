#include "Zombie.hpp"
#include <iostream>

using namespace std;

int main(void)
{
    Zombie *zombie = zombieHorde(5, "Zombies");
    delete[] zombie;
    return (0);
}