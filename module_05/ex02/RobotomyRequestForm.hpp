#pragma once

#include "Bureaucrat.hpp"

class RobotomyRequestForm: public Form
{
    std::string const target;
    public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string str);
    RobotomyRequestForm(RobotomyRequestForm &p);
    RobotomyRequestForm& operator=(RobotomyRequestForm &p);
    ~RobotomyRequestForm();
    void    execute(Bureaucrat const& executor) const;
};
