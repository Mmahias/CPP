#include "Bureaucrat.hpp"
#include <iostream>

int main(void)
{
    //LOW
    try
    {
        std::cout << "Low Exception" << std::endl;
        Bureaucrat low("LowLow", 155);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }

    //HIGH
    try
    {
        std::cout << "High Exception" << std::endl;
        Bureaucrat high("HighHigh", 0);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }

    //INCREMENT
    Bureaucrat carry("Carry", 1);
    try
    {
        std::cout << "Increment" << std::endl;
        carry.increment();
        
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }

    //DECREMENT
    Bureaucrat noob("Noob", 150);
    try
    {
        std::cout << "Decrement" << std::endl;
        noob.decrement();
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    
    // SURCHARGE OPERATOR <<
    Bureaucrat gomar("Gomar", 1);
    std::cout << gomar << std::endl; 
    
    return (0);
}