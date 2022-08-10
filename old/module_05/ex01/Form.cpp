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

int Form::getSignGrade()
{
    return (this->signGrade);
}

bool Form::getStatus()
{
    std::cout << "the status is : " << this->isSigned << std::endl; 
    return (this->isSigned);
}

void Form::execSign()
{
    this->isSigned = 1;
    std::cout << "the form value is " << this->isSigned << std::endl;
}
