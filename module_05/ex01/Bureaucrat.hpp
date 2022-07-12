#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include <cstdbool>

typedef class Bureaucrat Bureaucrat;

#include "Form.hpp"

class Bureaucrat {
    std::string name;
    int grade;
    public :
    Bureaucrat();
    Bureaucrat(std::string str, int n);
    ~Bureaucrat();
    std::string getName();
    int getGrade();
    void winGrade();
    void loseGrade();
    void GradeTooHighException();
    void GradeTooLowException();
    void signForm(Form TheForm);
};

#endif