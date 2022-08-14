#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <iostream>

class RobotomyRequestForm : public Form
{

    public:

    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &other);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &op_other);
    ~RobotomyRequestForm(void);

    std::string getTarget(void) const;
    virtual void execute(const Bureaucrat &executor) const;
    
    private:

    std::string _target;
};

#endif