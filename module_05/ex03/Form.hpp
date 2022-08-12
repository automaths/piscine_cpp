#pragma once

#include "Bureaucrat.hpp"

typedef class Bureaucrat Bureaucrat;

class Form
{
    public:
    Form();
    Form(std::string str, int sign, int exec);
    Form(Form &f);
    virtual ~Form();
    Form& operator=(Form &f);

    int     getSignGrade() const;
    int     getExecGrade() const;
    int     getStatus() const;
    std::string getName() const;

    void    beSigned(Bureaucrat &Worker);
    void    execSign();
    virtual void   execute(Bureaucrat const& executor) const = 0;

    class GradeTooLowException : public std::exception {virtual const char* what() const throw();};
    class GradeTooHighException : public std::exception {virtual const char* what() const throw();};

    protected:
    std::string name;
    int isSigned;
    int signGrade;
    int execGrade;
};

