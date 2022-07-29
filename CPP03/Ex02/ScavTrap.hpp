#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
    public:

    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &other);
    ScavTrap &operator=(const ScavTrap &op_other);
    ~ScavTrap(void);

    void attack(const std::string &target);
    void guardGate(void);

};

#endif