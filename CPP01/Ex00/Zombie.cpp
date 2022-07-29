#include "Zombie.hpp"
#include <iostream>

using namespace std;

Zombie::Zombie(void)
{
    cout << "Default constructor" << endl;   
}

Zombie::Zombie(std::string name): z_name(name)
{
    cout << "Constructor with arguments" << endl;
}

Zombie::~Zombie(void)
{
    cout << "Delete Zombie: " << this->z_name << endl;
}

void    Zombie::annonce(void)
{
    cout << this->z_name << ": BraiiiiiiinnnzzzZ..." << endl;
}