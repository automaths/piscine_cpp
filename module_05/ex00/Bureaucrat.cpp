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
        throw (Bureaucrat::GradeTooLowException(this->name));
    if (n < 1)
        throw (Bureaucrat::GradeTooHighException(this->name));
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
        throw (Bureaucrat::GradeTooHighException(this->name));
}

void   Bureaucrat::loseGrade()
{
    this->grade += 1;
    if (this->grade > 150)
        throw (Bureaucrat::GradeTooLowException(this->name));
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &worker)
{
    out << worker.getName() << ", bureaucrat grade " << worker.getGrade();
    return (out);
}
