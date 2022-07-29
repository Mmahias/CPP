#include "Bureaucrat.hpp"
#include <iostream>

using namespace std;

int main(void)
{
    //LOW
    try
    {
        cout << "Low Exception" << endl;
        Bureaucrat low("LowLow", 155);
    }
    catch(const std::exception& e)
    {
        cout << e.what() << '\n';
    }

    //HIGH
    try
    {
        cout << "High Exception" << endl;
        Bureaucrat high("HighHigh", 0);
    }
    catch(const std::exception& e)
    {
        cout << e.what() << '\n';
    }

    //INCREMENT
    Bureaucrat carry("Carry", 1);
    try
    {
        cout << "Increment" << endl;
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
        cout << "Decrement" << endl;
        noob.decrement();
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    
    // SURCHARGE OPERATOR <<
    Bureaucrat gomar("Gomar", 1);
    cout << gomar << endl; 
    
    return (0);
}