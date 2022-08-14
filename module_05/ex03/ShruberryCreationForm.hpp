#pragma once

#include "Bureaucrat.hpp"

class ShruberryCreationForm: public Form
{
    std::string const target;
    public:
    ShruberryCreationForm();
    ShruberryCreationForm(std::string str);
    ShruberryCreationForm(ShruberryCreationForm &p);
    ShruberryCreationForm& operator=(ShruberryCreationForm &p);
    ~ShruberryCreationForm();
    void    execute(Bureaucrat const& executor) const;
};
