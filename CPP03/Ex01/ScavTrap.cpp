#include "ScavTrap.hpp"
#include <iostream>

using namespace std;

ScavTrap::ScavTrap()
{
    cout << "ScavTrap Default Constructor called" << endl;
    this->_name = "Scav Player";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
    cout << "ScavTrap Name Constructor called" << endl;
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
    cout << "ScavTrap Copy Constructor called" << endl;
    *this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap & op_other)
{
    cout << "ScavTrap Copy assigenement operator called" << endl;
    this->_name = op_other._name;
    this->_hitPoints = op_other._hitPoints;
    this->_energyPoints = op_other._energyPoints;
    this->_attackDamage = op_other._attackDamage;
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
    cout << "ScavTrap Destructor called" << endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (this->_hitPoints <= 0)
    {
        cout << "ScavTrap " << this->_name << " is dead and can't attack !" << endl;
        return ;
    }
    else if (this->_energyPoints <= 0)
    {
        cout << "ScavTrap " << this->_name << " not have energy for attacks." << endl;
        return ;
    }
    else
    {
        this->_energyPoints--;
        cout << "ScavTrap " << this->_name << " attacks " << target;
        cout << ", causing " << this->_attackDamage << " points of damage!" << endl;
        return ;
    }
}

void ScavTrap::guardGate(void)
{
    cout << "ScavTrap " << this->_name << " in GuardGate Mode !" << endl;
}