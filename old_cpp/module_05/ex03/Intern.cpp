#include "Bureaucrat.hpp"

Intern::Intern()
{
    ;
}

Intern::~Intern()
{
    ;
}

Form *  Intern::makeForm(std::string formName, std::string targetName)
{
    Form *newForm;
    if (formName.compare("ShruberryCreationForm") == 0)
        newForm = new ShruberryCreationForm(targetName);
    if (formName.compare("RobotomyRequestForm") == 0)
        newForm = new RobotomyRequestForm(targetName);
    if (formName.compare("PresidentialPardonForm") == 0)
        newForm = new PresidentialPardonForm(targetName);
    return (newForm);
}