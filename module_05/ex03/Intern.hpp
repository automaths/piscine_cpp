#pragma once

#include "Bureaucrat.hpp"

class Intern{
    public: 
    Intern();
    Intern(const Intern &i);
    Intern& operator=(const Intern &i);
    ~Intern();
    Form* makeForm(std::string form, std::string target);

    private:
    std::string form[3];
    Form*    (Intern::*exec[3])(std::string target);
    Form* MakeShruberryCreationForm(std::string target);
    Form* MakeRobotomyRequestForm(std::string target);
    Form* MakePresidentialPardonForm(std::string target);
    void error(std::string name);
};
