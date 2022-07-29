#include "ClapTrap.hpp"
#include <iostream>

using namespace std;

int main(void)
{
    ClapTrap default_player;
    ClapTrap player1("Gomar");
    ClapTrap copy(player1);

    default_player.attack("Gomar");
    player1.attack("Janet");
    player1.takeDamage(5);
    player1.beRepaired(4);
    player1.takeDamage(9);
    player1.beRepaired(10);
    return (0);
}