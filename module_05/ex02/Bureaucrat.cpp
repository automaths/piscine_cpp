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
    Except e("Grade is too high, can't execute");
    this->grade += 1;
    throw (e);
}

void    Bureaucrat::GradeTooLowException()
{
    Except e("Grade is too low, can't execute");
    this->grade -= 1;
    throw (e);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &worker)
{
    out << worker.getName() << ", bureaucrat grade " << worker.getGrade();
    return (out);
}

void    Bureaucrat::signForm(Form& TheForm)
{
    Except a("Insufficiand grade to sign");
    Except b("The form is already signed");

    if (TheForm.getSignGrade() < this->grade)
        throw (a);
    if (TheForm.getStatus() == 1)
        throw (b);

    std::cout << "The form is being signed by " << this->name << std::endl;
    TheForm.execSign();
}

void    Bureaucrat::executeForm(Form const &TheForm)
{
    if (TheForm.getSignGrade() < this->grade)
        TheForm.InsufficiantGradeException();
    if (TheForm.getStatus() == 0)
        TheForm.NotSignedException();
    std::cout << "The form is being executed by " << this->name << std::endl;
    TheForm.execute(*this);
}
