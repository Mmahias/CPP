#include "HumanB.hpp"
#include <iostream>

using namespace std;

HumanB::HumanB(std::string name): b_name(name)
{
      cout << "HumanB: Constructor with arguments" << endl;  
}

HumanB::~HumanB(void)
{
    cout << "Delete: " << this->b_name << endl;
}

void    HumanB::attack(void)
{
    cout << this->b_name << " attack with this " << this->b_weapon->getType() << endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->b_weapon = &weapon;
}

