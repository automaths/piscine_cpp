#include "Bureaucrat.hpp"

Intern::Intern()
{
    // std::cout << "Class Intern Constructor" << std::endl;
    this->form[0] = "ShruberryCreation";
    this->form[1] = "RobotomyRequest";
    this->form[2] = "PresidentialPardon";
    this->exec[0] = &Intern::MakeShruberryCreationForm;
    this->exec[1] = &Intern::MakeRobotomyRequestForm;
    this->exec[2] = &Intern::MakePresidentialPardonForm;
}

Intern::Intern(const Intern &i)
{
    // std::cout << "Class Form Copy Constructor" << std::endl;
    (void)i;
    this->form[0] = "ShruberryCreation";
    this->form[1] = "RobotomyRequest";
    this->form[2] = "PresidentialPardon";
    this->exec[0] = &Intern::MakeShruberryCreationForm;
    this->exec[1] = &Intern::MakeRobotomyRequestForm;
    this->exec[2] = &Intern::MakePresidentialPardonForm;   
}

Intern& Intern::operator=(const Intern &i)
{
    // std::cout << "Class Form Assignement Operator" << std::endl;
    (void)i;
    this->form[0] = "ShruberryCreation";
    this->form[1] = "RobotomyRequest";
    this->form[2] = "PresidentialPardon";
    this->exec[0] = &Intern::MakeShruberryCreationForm;
    this->exec[1] = &Intern::MakeRobotomyRequestForm;
    this->exec[2] = &Intern::MakePresidentialPardonForm;
    return (*this);
}

Intern::~Intern(){/*std::cout << "Class Intern Destructor" << std::endl;*/}

Form* Intern::makeForm(std::string name, std::string target)
{
    Form *ptr;
    for (unsigned int i = 0; i < 3; ++i)
    {
        if (this->form[i].compare(name) == 0)
        {
            ptr = (this->*exec[i])(target);
            return (ptr);
        }
    }
    error(name);
    return (0);
}

Form* Intern::MakeShruberryCreationForm(std::string target)
{
    Form *ptr = new ShruberryCreationForm (target);
    return (ptr);
}

Form* Intern::MakeRobotomyRequestForm(std::string target)
{
    Form *ptr = new RobotomyRequestForm (target);
    return (ptr);
}

Form* Intern::MakePresidentialPardonForm(std::string target)
{
    Form *ptr = new PresidentialPardonForm (target);
    return (ptr);
}

void Intern::error(std::string name){std::cout << "The " << name << " form doesn't exist, creation impossible" << std::endl;}