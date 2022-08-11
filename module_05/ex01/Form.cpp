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

void    Form::beSigned(Bureaucrat Worker)
{
    Except a("insufficiant grade to sign");
    Except b("the form is already signed");
    if (Worker.getGrade() > this->signGrade)
        throw (a);
    if (this->isSigned == 1)
        throw (b);
    std::cout << "The form is being signed by: " << Worker.getName() << std::endl;
    this->isSigned = 1;
}

int Form::getSignGrade() const
{
    return (this->signGrade);
}

int Form::getExecGrade() const
{
    return (this->execGrade);
}

int Form::getStatus() const
{
    return (this->isSigned);
}

std::string Form::getTitle() const
{
    return (this->name);
}

void Form::execSign()
{
    this->isSigned = 1;
}
