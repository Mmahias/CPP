#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

Bureaucrat::Bureaucrat() : _name("Random"), _grade(150)
{
    std::cout << "Bureaucrat Default Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
    std::cout << "Bureacrat Arguments Constructor called" << std::endl;
   
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    else
        this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other.getName())
{
    std::cout << "Bureaucrat Copy Constructor called" << std::endl;
    *this = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &op_other)
{
    std::cout << "Bureaucrat Copy Assignement called" << std::endl;
    this->_grade = op_other._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat Destructor called" << std::endl;
}

const std::string Bureaucrat::getName(void) const
{
    return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

void Bureaucrat::increment(void)
{
    if (this->_grade == 1)
        throw (GradeTooHighException());
    else
    {
        std::cout << "INCREMENT" << std::endl;
        this->_grade--;
        std::cout << "Now, grade : " << this->_grade << std::endl;
    }
}

void Bureaucrat::decrement(void)
{
    if (this->_grade == 150)
        throw (GradeTooLowException());
    else
    {
        std::cout << "DECREMENT" << std::endl;
        this->_grade++;
        std::cout << "Now, grade : " << this->_grade << std::endl;
    }
}

void Bureaucrat::signForm(class Form &current)
{
    try
    {
        current.beSigned(*this);
        std::cout << this->_name << " signed " << current.getName() << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cout << this->_name << " couldn't sign " << current.getName() << " because " << e.what() << std::endl;
    }
    
}

void Bureaucrat::executeForm(const Form &form)
{
    try
    {
        form.execute(*this);
        std::cout << this->_name << " executed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &other)
{
    out << other.getName() << ", bureaucrat grade " << other.getGrade() << std::endl;
    return (out);
}