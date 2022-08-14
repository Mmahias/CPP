#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShruberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main(void)
{
    // INTERN CREATE
    std::cout << "-----Create Intern-----" << std::endl;
    Intern someRandomIntern;

    // FORM*
    Form* rrf = NULL;
    Form* rrf1 = NULL;
    Form* rrf2 = NULL;
    Form* rrf_e = NULL;

    // MAKEFORM
    std::cout << "-----Intern Make Forms-----" << std::endl;
    std::cout << "------ROBOTOMY FORM-----" << std::endl;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    std::cout << "-----PRESIDENTIAL FORM-----" << std::endl;
    rrf1 = someRandomIntern.makeForm("presidential pardon", "Macron");
    std::cout << "-----SHRUBERRY FORM-----" << std::endl;
    rrf2 = someRandomIntern.makeForm("shruberry creation", "Shrub");

    std::cout << "-----ERROR FORM-----" << std::endl;
    try
    {
        rrf_e = someRandomIntern.makeForm("error form", "Error");
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
    std::cout << "-----FREE/DESTRUCTOR FORMS&INTERN-----" << std::endl;

    delete rrf;
    delete rrf1;
    delete rrf2;
    delete rrf_e;

    return (0);
}