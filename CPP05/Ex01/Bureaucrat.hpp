#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Bureaucrat
{
    public:

    Bureaucrat();
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat &other);
    Bureaucrat &operator=(const Bureaucrat &op_other);
    ~Bureaucrat(void);

    const std::string getName(void) const;
    int getGrade(void) const;

    void    increment(void);
    void    decrement(void);

    void signForm(class Form &current);

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

    const std::string _name;
    int _grade;

};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &other);

#endif