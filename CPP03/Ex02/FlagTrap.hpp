#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FlagTrap : public ClapTrap
{
    public: 

    FlagTrap();
    FlagTrap(std::string name);
    FlagTrap(const FlagTrap &other);
    FlagTrap &operator=(const FlagTrap &op_other);
    ~FlagTrap(void);

    void highFivesGuys(void);

};

#endif