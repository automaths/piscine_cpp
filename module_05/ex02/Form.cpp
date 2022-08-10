#include "Bureaucrat.hpp"

Form::Form(): name("Form")
{
    this->isSigned = 0;
    this->signGrade = 75;
    this->execGrade = 25;
}

Form::Form(std::string str, bool b, int sign, int exec) : name(str)
{
    this->isSigned = b;
    this->signGrade = sign;
    this->execGrade = exec;
}

Form::~Form()
{
    ;
}

void    Form::GradeTooLowException()
{
    std::cout << "The grade is too low for signature" << std::endl;
}

void    Form::GradeTooHighException()
{
    std::cout << "The grade is too high for signature" << std::endl;
}

void    Form::beSigned(Bureaucrat Worker)
{
    try
    {
        if (Worker.getGrade() > this->signGrade)
            throw 1;
        if (this->isSigned == 1)
            throw 2;
    }
    catch (int x)
    {
        switch(x)
        {
            case 1:
            {
                std::cout << Worker.getName() << ": insufficiant grade to sign " << this->name << std::endl; 
                return;
            }
            case 2:
            {
                std::cout << Worker.getName() << ": the form is already signed" << std::endl;
                return;
            }
        }
    }
    std::cout << "The form is being signed by: " << Worker.getName() << std::endl;
    this->isSigned = 1;
}

int Form::getSignGrade() const
{
    return (this->signGrade);
}

bool Form::getStatus() const
{
    std::cout << "the status is : " << this->isSigned << std::endl; 
    return (this->isSigned);
}

void Form::execSign()
{
    this->isSigned = 1;
    std::cout << "the form value is " << this->isSigned << std::endl;
}

ShruberryCreationForm::ShruberryCreationForm(std::string str)
{
    this->target = str;
    this->signGrade = 145;
    this->execGrade = 137;
    this->isSigned = 0;
}

ShruberryCreationForm::~ShruberryCreationForm()
{
    ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string str)
{
    this->target = str;
    this->signGrade = 72;
    this->execGrade = 45;
    this->isSigned = 0;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string str)
{
    this->target = str;
    this->signGrade = 25;
    this->execGrade = 5;
    this->isSigned = 0;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    ;
}

void ShruberryCreationForm::execute(Bureaucrat const& executor) const
{
    try
    {
        if (executor.getGrade() > this->signGrade)
            throw 1;
        if (this->isSigned == 0)
            throw 2;
    }
    catch (int x)
    {
        switch(x)
        {
            case 1:
            {
                std::cout << executor.getName() << ": insufficiant grade to sign " << this->name << std::endl; 
                return;
            }
            case 2:
            {
                std::cout << executor.getName() << ": the form is not signed" << std::endl;
                return;
            }
        }
    }
    std::cout << this->target << ": These are the ASCII trees" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    try
    {
        if (executor.getGrade() > this->signGrade)
            throw 1;
        if (this->isSigned == 0)
            throw 2;
    }
    catch (int x)
    {
        switch(x)
        {
            case 1:
            {
                std::cout << executor.getName() << ": insufficiant grade to sign " << this->name << std::endl; 
                return;
            }
            case 2:
            {
                std::cout << executor.getName() << ": the form is not signed" << std::endl;
                return;
            }
            case 3:
            {
                std::cout << executor.getName() << ": the form has already been executed" << std::endl;
                return;
            }
        }
    }
    std::cout << "BBBBRRRRRRRRRRRR ..." << std::endl;
    std::cout << this->target << ": has been robotomised" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
    try
    {
        if (executor.getGrade() > this->signGrade)
            throw 1;
        if (this->isSigned == 0)
            throw 2;
    }
    catch (int x)
    {
        switch(x)
        {
            case 1:
            {
                std::cout << executor.getName() << ": insufficiant grade to sign " << this->name << std::endl; 
                return;
            }
            case 2:
            {
                std::cout << executor.getName() << ": the form is not signed" << std::endl;
                return;
            }
            case 3:
            {
                std::cout << executor.getName() << ": the form has already been executed" << std::endl;
                return;
            }
        }
    }
    std::cout << this->target << ": has received a presidential pardon" << std::endl;
}