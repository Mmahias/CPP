#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
#include "Bureaucrat.hpp"

class Form
{
    public:

    Form();
    Form(std::string name, int grade_required, int grade_exec);
    Form(const Form &other);
    Form &operator=(const Form &op_other);
    virtual ~Form(void);

    std::string getName(void) const;
    bool getSigned(void) const;
    int getGradeRequired(void) const;
    int getGradeExec(void) const;

    void beSigned(class Bureaucrat &current);
    virtual void execute(Bureaucrat const &executor) const = 0;

    class GradeTooHighException : public std::exception
    { 
        public :
        virtual const char* what() const throw()
        {
            return ("Grade too High !");
        }
    };

    class GradeTooLowException : public std::exception
    {
        public:
        virtual const char* what() const throw()
        {
            return ("Grade too Low");
        }
    };

    private:

    std::string _name;
    bool _signed;
    const int _grade_required;
    const int _grade_exec;

};

std::ostream &operator<<(std::ostream &out, const Form &other);
#endif