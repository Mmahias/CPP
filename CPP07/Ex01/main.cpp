#include "iter.hpp"
#include <iostream>

template <typename T>
void ft_printf(T &t)
{
    std::cout << t << std::endl;
}

int     main( void )
{
    // TAB CHAR
    std::cout << "TAB of CHAR:" << std::endl;
    char tab[6] = {'h', 'e', 'l', 'l', 'o'};
    ::iter(tab, 6, &ft_printf);
    std::cout << std::endl;

    // TAB STRING
    std::cout << "TAB of STRING" << std::endl;
    std::string tab3[2] = {"hello", "world"};
    ::iter(tab3, 2, &ft_printf);
    std::cout << std::endl;

    // TAB INT 
    std::cout << "TAB of INT" << std::endl;
    int tab1[2] = {4, 2};
    ::iter(tab1, 2, &ft_printf);
    std::cout << std::endl;

    // TAB FLOAT
    std::cout << "TAB of FLOAT" << std::endl;
    float tab2[2] = {3.14, 42.21};
    ::iter(tab2, 2, &ft_printf);
    std::cout << std::endl;

    // TAB DOUBLE
    std::cout << "TAB of DOUBLE" << std::endl;
    double tab4[2] = {42.2, 0.42};
    ::iter(tab4, 2, &ft_printf);
    std::cout << std::endl;
    
    return (0);
}
