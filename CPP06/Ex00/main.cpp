#include "Convert.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    if (argc <= 1)
    {
        std::cout << "No arguments to convert." << std::endl;
        return (1);
    }
    else if (argc > 2)
    {
        std::cout << "Too many arguments to convert." << std::endl;
        return (1);
    }
    else
    {
        std::string arg = argv[1];
        Convert conv(arg);

        char c = conv;
        int i = conv;
        float f = conv;
        double d = conv;
    }
    return (0);
}