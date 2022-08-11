#pragma once

#include "Bureaucrat.hpp"

typedef class Bureaucrat Bureaucrat;

class Form
{
    public:
    Form();
    Form(std::string str, int b, int sign, int exec);
    ~Form();

    int     getSignGrade() const;
    int     getStatus() const;
    int     getExecGrade()const;

    void    GradeTooLowException() const;
    void    GradeTooHighException() const;
    void    InsufficiantGradeException() const;
    void    AlreadySignedException() const;
    void    NotSignedException() const;
    void    beSigned(Bureaucrat TheSigner);
    virtual void   execute(Bureaucrat const& executor) const = 0;
    void    execSign();

    protected:
    std::string const name;
    int isSigned;
    int signGrade;
    int execGrade;
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
