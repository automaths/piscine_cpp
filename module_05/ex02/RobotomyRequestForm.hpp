#pragma once

#include "Bureaucrat.hpp"

class RobotomyRequestForm: public Form
{
    std::string target;
    public:
    RobotomyRequestForm(std::string str);
    ~RobotomyRequestForm();
    void    execute(Bureaucrat const& executor) const;
};
