#pragma once 

#include "Bureaucrat.hpp"

class PresidentialPardonForm: public Form
{
    std::string const target;
    public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string str);
    PresidentialPardonForm(PresidentialPardonForm &p);
    PresidentialPardonForm& operator=(PresidentialPardonForm &p);
    ~PresidentialPardonForm();
    void    execute(Bureaucrat const& executor) const;
};
