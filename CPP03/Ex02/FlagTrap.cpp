#include "FlagTrap.hpp"
#include <iostream>

using namespace std;

FlagTrap::FlagTrap()
{
    cout << "FlagTrap Default Constructor called" << endl;
    this->_name = "Flag Player";
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FlagTrap::FlagTrap(std::string name)
{
    cout << "FlagTrap Name Constructor called" << endl;
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FlagTrap::FlagTrap(const FlagTrap &other)
{
    cout << "FlagTrap Copy Constructor called" << endl;
    *this = other;
}

FlagTrap &FlagTrap::operator=(const FlagTrap &op_other)
{
    cout << "FlagTrap Copy assignement operator called" << endl;
    this->_name = op_other._name;
    this->_hitPoints = op_other._hitPoints;
    this->_energyPoints = op_other._energyPoints;
    this->_attackDamage = op_other._attackDamage;
    return (*this);
}

FlagTrap::~FlagTrap(void)
{
    cout << "FlagTrap Destructor called" << endl;
}

void FlagTrap::highFivesGuys(void)
{
    std::string input;

    cout << "Wanna do a highFive with me ? (Y/N)" << endl;
    cin >> input;
    if (input == "Y")
        cout << "[ " << this->_name << " is doing a highFive with You. ]" << endl;
    else if (input == "N")
        cout << "[ " << this->_name << " thinks : You're not fun Guy ! ]" << endl;
    else
    {
        cout << "[ Sorry, " << this->_name << " he didn't understand (BYYYYE). ]" << endl;
    }
    return ;
}