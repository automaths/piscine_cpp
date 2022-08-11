#pragma once

#include "Bureaucrat.hpp"

class Intern
{
    public:
    Form *makeForm(std::string formName, std::string targetName);
    Intern();
    ~Intern();
};
