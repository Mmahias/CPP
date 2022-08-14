#include  "ShruberryCreationForm.hpp"
#include "Form.hpp"
#include <iostream>
#include <fstream>

ShruberryCreationForm::ShruberryCreationForm() : _target("Shruberry Random Target"), Form("Default ShruberryForm", 145, 137)
{
    std::cout << "ShruberryCreationForm Default Constructor called" << std::endl;
}

ShruberryCreationForm::ShruberryCreationForm(std::string target) : _target(target), Form("Argument ShruberryForm", 145, 137)
{
    std::cout << "ShruberryCreattionForm Argument Constructor called" << std::endl;
}

ShruberryCreationForm::ShruberryCreationForm(const ShruberryCreationForm &other) : _target(other.getTarget()), Form(other.getName(), other.getGradeRequired(), other.getGradeExec())
{
    std::cout << "ShruberryCreationForm Copy Constructor called" << std::endl;
    *this = other;
}

ShruberryCreationForm &ShruberryCreationForm::operator=(const ShruberryCreationForm &op_other)
{
    std::cout << "ShruberryCreationForm Assigenement Copy called" << std::endl;
    this->_target = op_other.getTarget();
    return (*this);
}

ShruberryCreationForm::~ShruberryCreationForm(void)
{
    std::cout << "ShruberryCreationForm Destructor called" << std::endl;
}

std::string ShruberryCreationForm::getTarget(void) const
{
    return (this->_target);
}

void ShruberryCreationForm::execute(const Bureaucrat &executor) const
{
    if (this->getSigned() == false || executor.getGrade() > this->getGradeExec())
        throw (Form::GradeTooLowException());
    else
    {
        std::string name = ".shruberry";
        std::ofstream file1((this->_target + name), std::ios::out);

        if (!file1 || !file1.is_open())
        {
            std::cout << "Error file" << std::endl;
            return ; 
        }
        
        file1 << "    ###" << std::endl;
        file1 << "   #o###" << std::endl;
        file1 << "  #####o###" << std::endl;
        file1 << " #o###|#/###" << std::endl;
        file1 << "  ####|/#o#" << std::endl;
        file1 << "   # }|{  #" << std::endl;
        file1 << "     }|{" << std::endl;

        file1 << std::endl;
        file1 << "Execute by " << executor.getName() << std::endl;
    }

}