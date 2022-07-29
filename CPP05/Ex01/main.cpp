#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

using namespace std;

int main(void)
{
    //FORM LOW
    try
    {
        cout << "Low Exception" << endl;
        Form low("LowLow", 155, 155);
    }
    catch(const std::exception& e)
    {
        cout << e.what() << '\n';
    }

    //HIGH
    try
    {
        cout << "High Exception" << endl;
        Form high("HighHigh", 0, 0);
    }
    catch(const std::exception& e)
    {
        cout << e.what() << '\n';
    }

    //BE SIGNED => TRUE
    Bureaucrat margaux("Gomar", 1);
    Form form_1("Form 1", 5, 10);
    
    margaux.signForm(form_1);

    //BE SIGNED => FALSE
    Bureaucrat noob("Noob", 150);

    noob.signForm(form_1);

    // SURCHARGE OPERATOR <<
    cout << margaux << endl;
    cout << form_1 << endl;

    // Copy Bureaucrat
    Bureaucrat cp(margaux);
    Bureaucrat copy;
    
    cout << cp << endl;
    copy = margaux;
    cout << copy << endl;

    // Copy Form
    Form cp_f(form_1);
    Form copy_1;

    cout << cp_f << endl;
    copy_1 = form_1;
    cout << copy_1 << endl;
    
    return (0);
}