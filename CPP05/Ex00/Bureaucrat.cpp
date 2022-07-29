#include "Bureaucrat.hpp"
#include <iostream>

using namespace std;

Bureaucrat::Bureaucrat() : _name("Random"), _grade(150)
{
    cout << "Bureaucrat Default Constructor called" << endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
    cout << "Bureacrat Arguments Constructor called" << endl;
   
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    else
        this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
    cout << "Bureaucrat Copy Constructor called" << endl;
    *this = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &op_other)
{
    cout << "Bureaucrat Copy Assignement called" << endl;
    this->_grade = op_other._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
    cout << "Bureaucrat Destructor called" << endl;
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
        cout << "INCREMENT" << endl;
        this->_grade--;
        cout << "Now, grade : " << this->_grade << endl;
    }
}

void Bureaucrat::decrement(void)
{
    if (this->_grade == 150)
        throw (GradeTooLowException());
    else
    {
        cout << "DECREMENT" << endl;
        this->_grade++;
        cout << "Now, grade : " << this->_grade << endl;
    }
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &other)
{
    out << other.getName() << ", bureaucrat grade " << other.getGrade() << endl;
    return (out);
}