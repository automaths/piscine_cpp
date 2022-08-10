#ifndef FORM_HPP
# define FORM_HPP

typedef class Form Form;

#include "Bureaucrat.hpp"

class Form
{
    std::string const name;
    bool isSigned;
    int signGrade;
    int execGrade;
    public:
    Form();
    Form(std::string str, bool b, int sign, int exec);
    ~Form();
    friend class ShruberryCreationForm;
    friend class RobotomyRequestForm;
    friend class PresidentialPardonForm;
    void    GradeTooLowException();
    void    GradeTooHighException();
    void    beSigned(Bureaucrat TheSigner);
    int     getSignGrade() const;
    bool     getStatus() const;
    void    execSign();
    virtual void   execute(Bureaucrat const& executor) const = 0;
};

class ShruberryCreationForm: public Form
{
    std::string target;
    public:
    ShruberryCreationForm(std::string str);
    ~ShruberryCreationForm();
    void    execute(Bureaucrat const& executor) const;
};

class RobotomyRequestForm: public Form
{
    std::string target;
    public:
    RobotomyRequestForm(std::string str);
    ~RobotomyRequestForm();
    void    execute(Bureaucrat const& executor) const;
};

class PresidentialPardonForm: public Form
{
    std::string target;
    public:
    PresidentialPardonForm(std::string str);
    ~PresidentialPardonForm();
    void    execute(Bureaucrat const& executor) const;
};

#endif