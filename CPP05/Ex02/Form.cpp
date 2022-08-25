#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

Form::Form() : _name("Random_Form"), _signed(0), _grade_required(150), _grade_exec(1)
{
    std::cout << "Form Default Constructor called" << std::endl;
}

Form::Form(std::string name, int grade_required, int grade_exec) : _name(name), _signed(0), _grade_required(grade_required), _grade_exec(grade_exec)
{
    if (grade_required > 150 || grade_exec > 150)
        throw Form::GradeTooLowException();
    else if (grade_required < 1 || grade_exec < 1)
        throw Form::GradeTooHighException();
    else
        std::cout << "Form Arguments Constructor called" << std::endl;
}

Form::Form(const Form &other) : _grade_required(other.getGradeRequired()), _grade_exec(other.getGradeExec())
{
    std::cout << "Form Copy Constructor called" << std::endl;
    *this = other;
}

Form &Form::operator=(const Form &op_other)
{
    std::cout << "Form Copy Assignement called" << std::endl;
    this->_name = op_other.getName();
    this->_signed = op_other.getSigned();
    return (*this);
}

Form::~Form(void)
{
    std::cout << "Form Destructor called" << std::endl;
}

std::string Form::getName(void) const
{
    return (this->_name);
}

bool Form::getSigned(void) const
{
    return (this->_signed);
}

int Form::getGradeRequired(void) const
{
    return (this->_grade_required);
}

int Form::getGradeExec(void) const
{
    return (this->_grade_exec);
}

void Form::beSigned(class Bureaucrat &current)
{
    if (current.getGrade() > this->_grade_required)
        throw (Form::GradeTooLowException());
    else
        this->_signed = true;
}

std::ostream &operator<<(std::ostream &out, const Form &other)
{
    out << "Name: " << other.getName() << " , Grade Required: " << other.getGradeRequired() << " , Grade Exec: " << other.getGradeExec() << " and Signed: " << other.getSigned() << std::endl;
    return (out);
}

