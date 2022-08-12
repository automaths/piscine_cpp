#pragma once

#include "Bureaucrat.hpp"

class ShruberryCreationForm: public Form
{
    std::string target;
    public:
    ShruberryCreationForm(std::string str);
    ~ShruberryCreationForm();
    void    execute(Bureaucrat const& executor) const;
};
