#pragma once

#include "Bureaucrat.hpp"

typedef class Bureaucrat Bureaucrat;

class Form
{
    public:
    Form();
    Form(std::string str, int sign, int exec);
    Form(Form &f);
    ~Form();
    Form& operator=(Form &f);

    int     getSignGrade() const;
    int     getExecGrade() const;
    int     getStatus() const;
    std::string getName() const;

    void    beSigned(Bureaucrat &Worker);
    void    execSign();

    class GradeTooLowException : public std::exception {virtual const char* what() const throw();};
    class GradeTooHighException : public std::exception {virtual const char* what() const throw();};

    private:
    std::string name;
    int isSigned;
    int signGrade;
    int execGrade;
};
