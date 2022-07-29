#include "ClapTrap.hpp"
#include <iostream>

using namespace std;

ClapTrap::ClapTrap() : _name("Player"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    cout << "Default constructor called" << endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    cout << "Name constructor called" << endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    cout << "Copy construcor called" << endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &op_other)
{
    cout << "Copy assignement oeprator called" << endl;
    this->_name = op_other._name;
    this->_hitPoints = op_other._hitPoints;
    this->_energyPoints = op_other._energyPoints;
    this->_attackDamage = op_other._attackDamage;
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    cout << "Destructor called" << endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->_hitPoints <= 0)
    {
        cout << "ClapTrap " << this->_name << " is dead and can't attack !" << endl;
        return ;
    }
    else if (this->_energyPoints <= 0)
    {
        cout << "ClapTrap " << this->_name << " not have energy for attacks." << endl;
        return ;
    }
    else
    {
        this->_energyPoints--;
        cout << "ClapTrap " << this->_name << " attacks " << target;
        cout << ", causing " << this->_attackDamage << " points of damage!" << endl;
        return ;
    }
}

void ClapTrap::takeDamage(unsigned int amout)
{
    cout << "ClapTrap " << this->_name << " take " << amout << " points of damage";
    if (this->_hitPoints <= amout)
    {
        cout << ", and he died !" << endl;
        this->_hitPoints = 0;
        return;
    }
    this->_hitPoints -= amout;
    cout << " , and have " << this->_hitPoints << " points ." << endl;
    return ;
}

void ClapTrap::beRepaired(unsigned int amout)
{
    if (this->_energyPoints <= 0)
    {
        cout << "ClapTrap " << this->_name << " not have energy for repaire !" << endl;
        return;
    }
    else
    {
        this->_energyPoints--;
        cout << "ClapTrap " << this->_name << " be repaired of " << amout << " points." << endl;
        this->_hitPoints += amout;
        cout << "Now ClapTrap " << this->_name << " have " << this->_hitPoints << " points." << endl;
        return ;
    }
}