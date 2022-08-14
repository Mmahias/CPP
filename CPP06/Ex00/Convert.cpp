#include "Convert.hpp"
#include <iostream>

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

    if (_arg == "-inff" || _arg == "+inff" || _arg == "nanf" || _arg == "_ifn" || _arg == "+ifn" || _arg == "nan")
    {
        std::cout << "char : impossible" << std::endl;
        return (0);
    }
    else
    {
        try
        {

            int nb = stoi(_arg);
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
    }
    return (c);
    

}

//https://www.delftstack.com/fr/howto/cpp/how-to-convert-string-to-int-in-cpp/

Convert::operator int()
{
    int i;
    
    try
    {
        i = std::stoi(_arg);
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

    try
    {
        f = std::stof(_arg);
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
        d = std::stod(_arg);
        
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