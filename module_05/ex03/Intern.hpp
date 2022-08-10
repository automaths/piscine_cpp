#ifndef INTERN_HPP
# define INTERN_HPP

#include "Bureaucrat.hpp"

class Intern
{
    public:
    Form *makeForm(std::string formName, std::string targetName);
    Intern();
    ~Intern();
};

#endif