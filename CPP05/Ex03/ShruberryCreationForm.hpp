#ifndef SHRUBERRYCREATIONFORM_HPP
#define SHRUBERRYCREATIONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class ShruberryCreationForm : public Form
{
    public:

    ShruberryCreationForm();
    ShruberryCreationForm(std::string target);
    ShruberryCreationForm(const ShruberryCreationForm &other);
    ShruberryCreationForm &operator=(const ShruberryCreationForm &op_other);
    ~ShruberryCreationForm(void);

    std::string getTarget(void) const;
    virtual void execute(const Bureaucrat &executor) const;

    private:

    std::string _target;

};

#endif