#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>

class Convert
{
    public:

    Convert();
    Convert(std::string arg);
    Convert(const Convert &other);
    Convert &operator=(const Convert &op_other);
    ~Convert(void);

    std::string getArg(void) const;

    // Cast Operators
    operator char(); 
    operator int();
    operator float();
    operator double(); 

    private:

    std::string _arg;
};

#endif