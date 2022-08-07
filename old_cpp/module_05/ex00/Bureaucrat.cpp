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
