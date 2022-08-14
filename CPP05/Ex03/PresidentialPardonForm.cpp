#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include <iostream>

PredisentialPardonForm::PredisentialPardonForm() : _target("Presidential Pardon Random Target"), Form("Default Presidential Pardon", 25, 5)
{   
    std::cout << "PresidentialPardonForm Default Constructor called" << std::endl;
}

PredisentialPardonForm::PredisentialPardonForm(std::string target) : _target(target), Form("Argument Presidential Pardon", 25, 5)
{
    std::cout << "PresidentialPardonForm Argument Constructor called" << std::endl;
}

PredisentialPardonForm::PredisentialPardonForm(const PredisentialPardonForm &other) : _target(other.getTarget()),  Form(other.getName(), other.getGradeRequired(), other.getGradeExec())
{
    std::cout << "PresidentialPardonForm Copy Constructor called" << std::endl;
    *this = other;
}

PredisentialPardonForm &PredisentialPardonForm::operator=(const PredisentialPardonForm &op_other)
{
    std::cout << "PresidentialPardonForm Copy Assignement called" << std::endl;
    this->_target = op_other.getTarget();
    return (*this);
}

PredisentialPardonForm::~PredisentialPardonForm(void)
{
    std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

std::string PredisentialPardonForm::getTarget(void) const
{
    return (this->_target);
}

void PredisentialPardonForm::execute(const Bureaucrat &executor) const
{
    if (this->getSigned() == false || executor.getGrade() > this->getGradeExec())
        throw (Form::GradeTooLowException());
    else
        std::cout << this->_target << " was pardonned by Zafod Beeblebrox" << std::endl;
}