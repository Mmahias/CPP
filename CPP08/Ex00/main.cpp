#include "Easyfind.hpp"
#include <iostream>

int main(void)
{
    std::vector<int> v;

    for (int i = 1; i < 5; i++)
    {
        v.push_back(i);
    }
    
    for (std::vector<int>::iterator i = v.begin(); i != v.end(); i++)
    {
        std::cout << "V[" << (*i - 1) << "]: " << *i << std::endl;
    }

    // FIND OCCURENCE
    std::cout << "-----FIND OCCURENCE-----" << std::endl;
    try
    {
        int f =  ::easyfind(v, 2);
        std::cout << "Find: " << f << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "------------------------" << std::endl;

    // FAIL
    std::cout << "-----FAIL OCCURENCE-----" << std::endl;
    try
    {
        int f2 =  ::easyfind(v, 10);
        std::cout << "Find: " << f2 << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "------------------------" << std::endl;
}