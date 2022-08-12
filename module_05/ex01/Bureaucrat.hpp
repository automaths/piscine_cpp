#pragma once

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Bureaucrat {
    public :
    Bureaucrat();
    Bureaucrat(std::string str, int n);
    Bureaucrat(const Bureaucrat &b);
    ~Bureaucrat();
    Bureaucrat &operator=(const Bureaucrat &b);

    std::string getName() const;
    int getGrade() const;

    void winGrade();
    void loseGrade();
    void signForm(Form &theForm);
    class GradeTooLowException : public std::exception {virtual const char* what() const throw();};
    class GradeTooHighException : public std::exception {virtual const char* what() const throw();};

    private:
    std::string const name;
    int grade;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &worker);
