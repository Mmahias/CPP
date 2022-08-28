#include "Convert.hpp"
#include <iostream>
#include <sstream>
#include <stdlib.h>

Convert::Convert() : _arg("Random")
{
    std::cout << "Default Constructor called" << std::endl;
}

Convert::Convert(std::string arg) : _arg(arg)
{
    std::cout << "Argument Constructor called" << std::endl;
}

Convert::Convert(const Convert &other) : _arg(getArg())
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = other;
}

Convert &Convert::operator=(const Convert &op_other)
{
    std::cout << "Copy Assignement called" << std::endl;
    this->_arg = op_other.getArg();
    return (*this);
}

Convert::~Convert(void)
{
    std::cout << "Destructor called" << std::endl;
}

std::string Convert::getArg(void) const
{
    return (this->_arg);
}

Convert::operator char()
{
    char c;

    if (_arg == "-inff" || _arg == "+inff" || _arg == "nanf" || _arg == "-ifn" || _arg == "+ifn" || _arg == "nan")
    {
        std::cout << "char : impossible" << std::endl;
        return (0);
    }
    else
    {
        try
        {

            //int nb = stoi(_arg);
            int nb = atoi(_arg.c_str());
            c = static_cast<char>(nb);
            if (isprint(c))
                std::cout << "char: " << c << std::endl;
            else
            {
                std::cout << "char: non displayable" << std::endl;
                c = 0;
            }
        }
        catch(std::invalid_argument const &e)
        {
            c = 0;
            std::cout << "char: non displayable" << std::endl;
        }
        catch(std::out_of_range &e)
        {
            c = 0;
            std::cout << "char: non displayable" << std::endl;
        }
    }
    return (c);
    

}

//https://www.delftstack.com/fr/howto/cpp/how-to-convert-string-to-int-in-cpp/

Convert::operator int()
{
    int i;

    if (_arg == "-inff" || _arg == "+inff" || _arg == "nanf" || _arg == "-ifn" || _arg == "+ifn" || _arg == "nan")
    {
        std::cout << "int : impossible" << std::endl;
        return (0);
    }
    
    try
    {
        //i = std::stoi(_arg);
        i = atoi(_arg.c_str());
        std::cout << "int: " << i << std::endl;
    }
    catch(std::invalid_argument const &e)
    {
        i = 0;
        std::cout << "int: impossible" << std::endl;
    }
    catch(std::out_of_range &e)
    {
        i = 0;
        std::cout << "int: overflow" << std::endl;
    }
    return (i);
}

Convert::operator float()
{
    float f;
    int tmp;
    try
    {
        //f = std::stof(_arg);
        f = atof(_arg.c_str());
        tmp = (int)f;
        if (tmp == f)
            std::cout.precision(1);
        else
            std::cout.precision(_arg.length());
        std::cout << std::fixed << "float: " << f << "f" << std::endl;
    }
    catch(std::invalid_argument const &e)
    {
        f = 0;
        std::cout << "float: impossible" << std::endl;
    }
    catch(std::out_of_range const &e)
    {
        f = 0;
        std::cout << "float: overflow" << std::endl;
    }
    return (f);
}

Convert::operator double()
{
    double d;

    try
    {
        //d = std::stod(_arg);
        d = std::strtod(_arg.c_str(), 0);
        
        std::cout << std::fixed << "double: " << d << std::endl;
    }
    catch(std::invalid_argument const &e)
    {
        d = 0;
        std::cout << "double: impossible" << std::endl;
    }
    catch(std::out_of_range const &e)
    {
        d = 0;
        std::cout << "double: overflow" << std::endl;
    }
    return (d);
    
}