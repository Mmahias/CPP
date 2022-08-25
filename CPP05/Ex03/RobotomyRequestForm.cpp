#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : Form("Default RobotomyForm", 72, 45), _target("RobotomyForm Random target")
{
    std::cout << "RobotomyForm Default Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Argument RobotomyForm", 72, 45), _target(target)
{
    std::cout << "RobotomyForm Argument Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other.getName(), other.getGradeRequired(), other.getGradeExec()), _target(other.getTarget())
{
    std::cout << "RobotomyForm Copy Constructor called" << std::endl;
    *this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &op_other)
{
    std::cout << "RobotomyForm Assignement Copy called" << std::endl;
    this->_target = op_other.getTarget();
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "RobotomyForm Destructor called" << std::endl;
}

std::string RobotomyRequestForm::getTarget(void) const
{
    return (this->_target);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    if (this->getSigned() == false || executor.getGrade() > this->getGradeExec())
        throw (Form::GradeTooLowException());
    else
    {
        std::cout << "* drill noise *" << std::endl;
        if (std::rand() % 2 == 0)
            std::cout << this->_target << " has been robotomized with SUCCESS." << std::endl;
        else
            std::cout << "The operation FAILED ." << std::endl;
    }
}