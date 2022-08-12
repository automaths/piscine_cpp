#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("Mr. Nobody"), grade(75){/*std::cout << "Bureaucrat Class Default Constructor" << std::endl;*/}

Bureaucrat::Bureaucrat(std::string str, int n): name(str), grade(n)
{
    if (n > 150)
        throw (Bureaucrat::GradeTooLowException());
    if (n < 1)
        throw (Bureaucrat::GradeTooHighException());
    // std::cout << "Bureaucrat String and Int Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b): name(b.getName()), grade(b.getGrade()){/*std::cout << "Class Bureaucrat Copy Constructor << std::endl;"*/}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &b)
{
    //std::cout << "Bureaucrat Class Assignement Operator" << std::endl;
    if (this != &b)
    {
        this->name = b.getName();
        this->grade = b.getGrade();
    }
    return (*this);
}

Bureaucrat::~Bureaucrat(){/*std::cout << "Bureaucrat Class Destructor" << std::endl;*/}

std::string Bureaucrat::getName() const{return (this->name);}
int Bureaucrat::getGrade() const{return (this->grade);}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &worker)
{
    out << worker.getName() << ", bureaucrat grade " << worker.getGrade();
    return (out);
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {return ("from Bureaucrat: Grade is too low");}
const char* Bureaucrat::GradeTooHighException::what() const throw() {return ("from Bureaucrat: Grade is too high");}

void    Bureaucrat::winGrade()
{
    if (this->grade - 1 < 1)
        throw (Bureaucrat::GradeTooHighException());
    this->grade -= 1;
}

void   Bureaucrat::loseGrade()
{
    if (this->grade + 1> 150)
        throw (Bureaucrat::GradeTooLowException());
    this->grade += 1;
}

void    Bureaucrat::signForm(Form& TheForm)
{
    if (TheForm.getSignGrade() < this->grade)
    {
        std::cout << this->name << " couldn't sign " << TheForm.getName() << " because insufficiant grade" << std::endl;
        return ;
    }
    std::cout << this->name << " signed " << TheForm.getName() << std::endl;
    TheForm.execSign();
}

