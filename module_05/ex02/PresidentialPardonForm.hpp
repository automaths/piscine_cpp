#pragma once 

#include "Bureaucrat.hpp"

class PresidentialPardonForm: public Form
{
    std::string target;
    public:
    PresidentialPardonForm(std::string str);
    ~PresidentialPardonForm();
    void    execute(Bureaucrat const& executor) const;
};
