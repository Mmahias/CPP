#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShruberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main(void)
{

    // BUREAUCRAT
    std::cout << "-----Create Bureaucrat-----" << std::endl;
    Bureaucrat gomar("Margaux", 1);
    Bureaucrat janet("Sonia", 149);
    std::cout << std::endl;

    // SHRUBERRY FORM
    std::cout << "-----Create ShruberryForm-----" << std::endl;
    ShruberryCreationForm s_form("s_form");
    std::cout << std::endl;

    // GRADE TOO LOW
    std::cout << "------Shruberry Grade Too Low-----" << std::endl;
    janet.executeForm(s_form);
    std::cout << std::endl;
    
    // SIGNED FORM
    std::cout << "-----Signed Form----" << std::endl;
    gomar.signForm(s_form);
    gomar.executeForm(s_form);
    std::cout << std::endl;

    // ROBOTOMY FORM
    std::cout << "-----Create RobotomyForm-----" << std::endl;
    RobotomyRequestForm r_form("r_form");
    std::cout << std::endl;

    // GRADE TOO LOW
    std::cout << "-----Robotomy Grade Too Low-----" << std::endl;
    janet.executeForm(r_form);
    std::cout << std::endl;

    // SIGNED FORM (50% SUCCESS)
    std::cout << "-----Signed Form (50/100 Success)-----" << std::endl;
    gomar.signForm(r_form);
    gomar.executeForm(r_form);
    gomar.executeForm(r_form);
    gomar.executeForm(r_form);
    std::cout << std::endl;

    // PRESIDENTION FORM
    std::cout << "-----Create PresidentialForm-----" << std::endl;
    PredisentialPardonForm p_form("p_form");
    std::cout << std::endl;

    // GRADE TOO LOW
    std::cout << "-----Presidential Grade Too Low-----" << std::endl;
    janet.executeForm(p_form);
    std::cout << std::endl;

    // SIGNED FORM
    std::cout << "-----Signed Form-----" << std::endl;
    gomar.signForm(p_form);
    gomar.executeForm(p_form);
    std::cout << std::endl;


    return (0);
}