#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class PredisentialPardonForm : public Form
{

    public: 

    PredisentialPardonForm();
    PredisentialPardonForm(std::string target);
    PredisentialPardonForm(const PredisentialPardonForm &other);
    PredisentialPardonForm &operator=(const PredisentialPardonForm &op_other);
    ~PredisentialPardonForm(void);

    std::string getTarget(void) const;
    virtual void execute(const Bureaucrat &executor) const;

    private:

    std::string _target;

};

#endif