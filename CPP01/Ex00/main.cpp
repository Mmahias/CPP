#include "Zombie.hpp"
#include <iostream>

int main(void)
{
    randomChump("random_zombie");
    Zombie *new_zombie = new Zombie("new_zombie");
    new_zombie->annonce();
    delete new_zombie;
    return (0);
}