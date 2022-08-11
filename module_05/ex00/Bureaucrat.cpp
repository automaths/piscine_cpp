#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    this->name = "Mr. Nobody";
    this->grade = 75;
    std::cout << "Bureaucrat Class Default Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string str, int n)
{
    this->name = str;
    if (n > 150)
        GradeTooLowException();
    if (n < 1)
        GradeTooHighException();
    this->grade = n;
    std::cout << "Bureaucrat String and Int Constructor" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Class Destructor" << std::endl;
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void    Bureaucrat::winGrade()
{
    this->grade -= 1;
    if (this->grade < 1)
        GradeTooHighException();
}

void   Bureaucrat::loseGrade()
{
    this->grade += 1;
    if (this->grade > 150)
        GradeTooLowException();
}

void    Bureaucrat::GradeTooHighException()
{
    std::string str(this->name);
    str.append(": Grade is too high");
    Except e(str);
    this->grade += 1;
    throw (e);
}

void    Bureaucrat::GradeTooLowException()
{
    std::string str(this->name);
    str.append(": Grade is too low");
    Except e(str);
    this->grade -= 1;
    throw (e);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &worker)
{
    out << worker.getName() << ", bureaucrat grade " << worker.getGrade();
    return (out);
}
