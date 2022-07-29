#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
    public:

    Zombie(void);
    Zombie(std::string z_name);
    ~Zombie(void);
    Zombie* newZombie(std::string name);
    void    annonce(void);

    private:

    std::string z_name;
};

void    randomChump(std::string name);

#endif