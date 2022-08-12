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
        throw (Bureaucrat::GradeTooHighException(this->name));
}

void   Bureaucrat::loseGrade()
{
    this->grade += 1;
    if (this->grade > 150)
        throw (Bureaucrat::GradeTooLowException(this->name));
}

void    Bureaucrat::GradeInsufficiantSignException(std::string title)
{
    std::string str(this->name);
    str.append(": Grade is insufficiant for signing the form ");
    str.append(title);
    Except e(str);
    throw (e);
}

void    Bureaucrat::GradeInsufficiantExecException(std::string title)
{
    std::string str(this->name);
    str.append(": Grade is insufficiant for executing the form ");
    str.append(title);
    Except e(str);
    throw (e);
}

void    Bureaucrat::AlreadySignedException(std::string title)
{
    std::string str(this->name);
    str.append(": Can't sign twice the form ");
    str.append(title);
    Except e(str);
    this->grade -= 1;
    throw (e);
}

void    Bureaucrat::NotSignedException(std::string title)
{
    std::string str(this->name);
    str.append(": trying to exec unsigned form ");
    str.append(title);
    Except e(str);
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
    if (TheForm.getSignGrade() < this->grade)
        GradeInsufficiantSignException(TheForm.getTitle());
    if (TheForm.getStatus() == 1)
        AlreadySignedException(TheForm.getTitle());
    std::cout << "The form " << TheForm.getTitle() << " is being signed by " << this->name << std::endl;
    TheForm.execSign();
}

void    Bureaucrat::executeForm(Form const &TheForm)
{
    if (TheForm.getExecGrade() < this->grade)
        GradeInsufficiantExecException(TheForm.getTitle());
    if (TheForm.getStatus() == 1)
        AlreadySignedException(TheForm.getTitle());
    std::cout << "The form " << TheForm.getTitle() << " is being executed by " << this->name << std::endl;
}
