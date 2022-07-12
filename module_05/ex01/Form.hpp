#ifndef FORM_HPP
# define FORM_HPP

typedef class Form Form;

#include "Bureaucrat.hpp"

class Form
{
    std::string const name;
    bool isSigned;
    int signGrade;
    int execGrade;
    public:
    Form();
    Form(std::string str, bool b, int sign, int exec);
    ~Form();
    void    GradeTooLowException();
    void    GradeTooHighException();
    void    beSigned(Bureaucrat TheSigner);
    int     getSignGrade();
    bool     getStatus();
    void    execSign();
};

#endif