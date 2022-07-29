#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
    public:

    Zombie(void);
    Zombie(std::string z_name);
    ~Zombie(void);
    Zombie* newZombie(Zombie *zombie, std::string name, int i);
    void    annonce(void);

    private:

    int z_n;
    std::string z_name;

};

Zombie* zombieHorde( int N, std::string name );

#endif