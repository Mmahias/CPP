#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void)
{
    //FORM LOW
    try
    {
        std::cout << "Low Exception" << std::endl;
        Form low("LowLow", 155, 155);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }

    //HIGH
    try
    {
        std::cout << "High Exception" << std::endl;
        Form high("HighHigh", 0, 0);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }

    //BE SIGNED => TRUE
    Bureaucrat margaux("Gomar", 1);
    Form form_1("Form 1", 5, 10);
    
    margaux.signForm(form_1);

    //BE SIGNED => FALSE
    Bureaucrat noob("Noob", 150);

    noob.signForm(form_1);

    // SURCHARGE OPERATOR <<
    std::cout << margaux << std::endl;
    std::cout << form_1 << std::endl;

    // Copy Bureaucrat
    Bureaucrat cp(margaux);
    Bureaucrat copy;
    
    std::cout << cp << std::endl;
    copy = margaux;
    std::cout << copy << std::endl;

    // Copy Form
    Form cp_f(form_1);
    Form copy_1;

    std::cout << cp_f << std::endl;
    copy_1 = form_1;
    std::cout << copy_1 << std::endl;
    
    return (0);
}