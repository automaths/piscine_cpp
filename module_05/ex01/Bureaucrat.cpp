#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    this->name = "Mr. Nobody";
    this->grade = 75;
}

Bureaucrat::Bureaucrat(std::string str, int n)
{
    this->name = str;
    this->grade = n;
}

Bureaucrat::~Bureaucrat()
{
    ;
}

std::string Bureaucrat::getName()
{
    return (this->name);
}

int Bureaucrat::getGrade()
{
    return (this->grade);
}

void    Bureaucrat::winGrade()
{
    std::exception bloup;
    try
    {
        this->grade -= 1;
        if (this->grade < 1)
            throw (bloup);
    }
    catch (std::exception& e)
    {
        GradeTooHighException();
    }
}

void   Bureaucrat::loseGrade()
{
    std::exception bloup;
    try
    {
        this->grade += 1;
        if (this->grade > 150)
            throw (bloup);
    }
    catch (std::exception& e)
    {
        GradeTooLowException();
    }
}

void    Bureaucrat::GradeTooHighException()
{
    this->grade += 1;
    std::cout << this->name << ": Grade is too high, can't execute" << std::endl;
}

void    Bureaucrat::GradeTooLowException()
{
    this->grade -= 1;
    std::cout << this->name << ": Grade is too low, can't execute" << std::endl;
}

void    Bureaucrat::signForm(Form TheForm)
{
    try
    {
        if (TheForm.getSignGrade() < this->grade)
            throw 1;
        if (TheForm.getStatus() == 1)
            throw 2;
    }
    catch (int x)
    {
        switch(x)
        {
            case 1:
            {
                std::cout << this->name << ": insufficiant grade to sign " << this->name << std::endl; 
                return;
            }
            case 2:
            {
                std::cout << this->name << ": the form is already signed" << std::endl;
                return;
            }
        }
    }
    std::cout << "The form is being signed by " << this->name << std::endl;
    TheForm.execSign();
}
