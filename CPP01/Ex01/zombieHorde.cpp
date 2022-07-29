#include "Zombie.hpp"
#include <string>
#include <cstring>

Zombie* Zombie::newZombie(Zombie *zombie, std::string name, int i)
{
    std::string number = std::to_string(i);

    this->z_name = name + number; 
    return (zombie);
}

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombie = new Zombie[N];

    for (size_t i = 0; i < N; i++)
    {
        zombie[i].newZombie(zombie, name, i);
        zombie[i].annonce();      
    }
    return (zombie);
}