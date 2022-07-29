#include "Harl.hpp"
#include <iostream>

using namespace std;

int main(void)
{
    Harl harl_20;

    harl_20.complain("DEBUG");
    harl_20.complain("INFO");
    harl_20.complain("WARNING");
    harl_20.complain("ERROR");
    harl_20.complain("blabla");
    return (0);
}