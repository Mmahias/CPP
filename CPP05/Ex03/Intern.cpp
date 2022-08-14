#include "Intern.hpp"
#include <iostream>

Intern::Intern()
{
    std::cout << "Intern Default Constructor called" << std::endl;
}

Intern::Intern(const Intern &other)
{
    std::cout << "Intern Copy Constructor called" << std::endl;
    *this = other;
}

Intern &Intern::operator=(const Intern &op_other)
{
    std::cout << "Intern Copy Assignement called" << std::endl;
    (void)op_other;
    return (*this);
}

Intern::~Intern(void)
{
    std::cout << "Intern Destructor called" << std::endl;
}

Form* Intern::createForm(std::string name, std::string target, int number) const
{
    Form *form = NULL;

    if (number == 0)
        form = new PredisentialPardonForm(target);
    if (number == 1)
        form = new RobotomyRequestForm(target);
    if (number == 2)
        form = new ShruberryCreationForm(target);
    std::cout << "Intern creates " << name << " form." << std::endl;
    return (form);
}

Form* Intern::makeForm(std::string name_form, std::string target_form) const
{
    std::string forms[3] = {"presidential pardon", "robotomy request", "shruberry creation"};

    for (int i = 0; i < 4; i++)
    {
        if (i == 3)
            throw Intern::FormException();
        else if (name_form == forms[i])
            return (this->createForm(name_form, target_form, i));
    }
    return (NULL);
}