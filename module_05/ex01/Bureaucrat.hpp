#pragma once

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Except : virtual public std::exception {
	public:
	Except(const std::string &str): message(str){}
	virtual ~Except() throw() {}
	virtual const char* what() const throw() {return (this->message.c_str());}

	private:
	std::string message;
};

class Bureaucrat {
    public :
    Bureaucrat();
    Bureaucrat(std::string str, int n);
    ~Bureaucrat();

    std::string getName() const;
    int getGrade() const;

    void winGrade();
    void loseGrade();
    void signForm(Form &theForm);
    void executeForm(Form const &Form);
    void GradeTooHighException();
    void GradeTooLowException();
    void AlreadySignedException(std::string title);
    void GradeInsufficiantSignException(std::string title);
    void GradeInsufficiantExecException(std::string title);
    void NotSignedException(std::string title);

    private:
    std::string name;
    int grade;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &worker);
