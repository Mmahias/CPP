#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShruberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

class Intern
{
    public:

    Intern();
    Intern(const Intern &other);
    Intern &operator=(const Intern &op_other);
    ~Intern(void);

    Form *makeForm(std::string name_form, std::string target_form) const;

    class FormException : public std::exception
    {
        public:
                virtual const char* what() const throw()
                {
                    return ("Intern can't creates Form.");
                }
    };

    private:
        Form *createForm(std::string name, std::string target, int number) const;
};

#endif