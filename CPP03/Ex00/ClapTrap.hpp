#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    public:

    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &other);
    ClapTrap &operator=(const ClapTrap &op_other);
    ~ClapTrap(void);
    void attack(const std::string &target);
    void takeDamage(unsigned int amout);
    void beRepaired(unsigned int amout);

    private:

    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;

};

#endif