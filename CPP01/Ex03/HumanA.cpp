#include "HumanA.hpp"
#include <iostream>

using namespace std;

HumanA::HumanA(std::string name, Weapon &weapon): a_name(name), a_weapon(weapon)
{
    cout << "HumanA: Constructor with arguments" << endl;
}

HumanA::~HumanA(void)
{
    cout << "Delete: " << this->a_name << endl;
}

void    HumanA::attack(void)
{
    cout << this->a_name << " attack with this " << this->a_weapon.getType() << endl;
}