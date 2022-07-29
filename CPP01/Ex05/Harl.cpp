#include "Harl.hpp"
#include <iostream>

using namespace std;

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void    Harl::debug(void)
{
    cout << "DEBUG: ";
    cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"<< endl;
}

void Harl::info(void)
{
    cout << "INFO: ";
    cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << endl;
}

void Harl::warning(void)
{
    cout << "WARNING: ";
    cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << endl;
}

void Harl::error(void)
{
    cout << "ERROR: ";
    cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void Harl::complain(std::string level)
{
    ftab[0] = &Harl::debug;
    ftab[1] = &Harl::info;
    ftab[2] = &Harl::warning;
    ftab[3] = &Harl::error;
    
    std::string levels_complain[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (level == levels_complain[i])
            (this->*ftab[i])();
    }
}