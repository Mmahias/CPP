#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"
#include <iostream>

using namespace std;

int main(void)
{
    ClapTrap default_player;
    ScavTrap player1("Gomar");
    FlagTrap player2("Buddy");
    ScavTrap copy(player1);

    default_player.attack("Gomar");
    player1.attack("Janet");
    player1.takeDamage(5);
    default_player.takeDamage(5);
    player1.beRepaired(4);
    default_player.beRepaired(4);
    player1.takeDamage(9);
    player1.beRepaired(10);
    player1.guardGate();
    player2.highFivesGuys();
    return (0);

}