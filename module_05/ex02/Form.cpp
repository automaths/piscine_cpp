#include "Bureaucrat.hpp"

Form::Form(): name("Form")
{
    std::cout << "Class Form Default Construtor" << std::endl;
    this->isSigned = 0;
    this->signGrade = 75;
    this->execGrade = 25;
}

Form::Form(std::string str, int b, int sign, int exec) : name(str)
{
    std::cout << "Class Form String, int and Int Constructor" << std::endl;
    this->isSigned = b;
    this->signGrade = sign;
    this->execGrade = exec;
}

Form::~Form()
{
    std::cout << "Class Form Destructor" << std::endl;
}

void    Form::GradeTooLowException() const
{
    Except a("Grade too low to sign the form");
    throw (a);
}

void    Form::GradeTooHighException() const
{
    Except a("Grade too high to sign the form");
    throw (a);
}

void    Form::InsufficiantGradeException() const
{
    Except a("insufficiant grade to sign");
    throw (a);
}

void    Form::AlreadySignedException() const
{
    Except a("the form is already signed");
    throw (a);
}

void    Form::NotSignedException() const
{
    Except a("the form is not signed");
    throw(a);
}

void    Form::beSigned(Bureaucrat Worker)
{
    if (Worker.getGrade() > this->signGrade)
        InsufficiantGradeException();
    if (this->isSigned == 1)
        AlreadySignedException();
    std::cout << "The form is being signed by: " << Worker.getName() << std::endl;
    this->isSigned = 1;
}

int Form::getSignGrade() const
{
    return (this->signGrade);
}

int Form::getStatus() const
{
    std::cout << "the status is : " << this->isSigned << std::endl; 
    return (this->isSigned);
}

int Form::getExecGrade() const
{
    return (this->execGrade);
}

void Form::execSign()
{
    this->isSigned = 1;
}

ShruberryCreationForm::ShruberryCreationForm(std::string str)
{
    std::cout << "Class Shruberry String Constructor" << std::endl;
    this->target = str;
    this->signGrade = 145;
    this->execGrade = 137;
    this->isSigned = 0;
}

ShruberryCreationForm::~ShruberryCreationForm()
{
    std::cout << "Class Shruberry Destructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string str)
{
    std::cout << "Class Robotomy String Constructor" << std::endl;
    this->target = str;
    this->signGrade = 72;
    this->execGrade = 45;
    this->isSigned = 0;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Class Robotomy Destructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string str)
{
    std::cout << "Class Presidential String Constructor" << std::endl;
    this->target = str;
    this->signGrade = 25;
    this->execGrade = 5;
    this->isSigned = 0;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Class Presidential Destructor" << std::endl;
}

void ShruberryCreationForm::execute(Bureaucrat const& executor) const
{
    if (executor.getGrade() > this->signGrade)
        InsufficiantGradeException();
    if (this->isSigned == 0)
        NotSignedException();
    std::cout << this->target << ": These are the ASCII trees" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    if (executor.getGrade() > this->signGrade)
        InsufficiantGradeException();
    if (this->isSigned == 0)
        NotSignedException();
    std::cout << "BBBBRRRRRRRRRRRR ..." << std::endl;
    std::cout << this->target << ": has been robotomised" << std::endl;

}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
    if (executor.getGrade() > this->signGrade)
        InsufficiantGradeException();
    if (this->isSigned == 0)
        NotSignedException();
    std::cout << this->target << ": has received a presidential pardon" << std::endl;
}