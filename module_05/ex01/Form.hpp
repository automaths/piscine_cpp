#pragma once

#include "Bureaucrat.hpp"

typedef class Bureaucrat Bureaucrat;

class Form
{
    public:
    Form();
    Form(std::string str, int b, int sign, int exec);
    ~Form();

    int     getSignGrade() const;
    int     getStatus() const;
    int     getExecGrade() const;
    std::string getTitle() const;

    void    beSigned(Bureaucrat TheSigner);
    void    execSign();

    private:
    std::string const name;
    int isSigned;
    int signGrade;
    int execGrade;
};
