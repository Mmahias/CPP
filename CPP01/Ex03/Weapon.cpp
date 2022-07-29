#include "Weapon.hpp"
#include <iostream>

using namespace std;

Weapon::Weapon(void)
{
    cout << "Weapon: Default constructor" << endl;   
}

Weapon::Weapon(std::string type): w_type(type)
{
    cout << "Weapon: Constructor with arguments" << endl;
}

Weapon::~Weapon(void)
{
    cout << "Weapon: Delete" << endl;
}

const std::string &Weapon::getType()
{
    return (this->w_type);
}

void    Weapon::setType(const std::string &type)
{
    this->w_type = type;
}