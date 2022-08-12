#pragma once

#include <iostream>
#include <string>
#include <exception>

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
    class GradeTooLowException : public std::exception {
        public:
        GradeTooLowException(std::string name): message(name.append(": rank too low")){}
        virtual ~GradeTooLowException() throw() {}
        virtual const char* what() const throw() {return (this->message.c_str());}
        private:
        std::string message;
    };
    class GradeTooHighException : public std::exception {
        public:
        GradeTooHighException(std::string name): message(name.append(": rank too high")){}
        virtual ~GradeTooHighException() throw() {}
        virtual const char* what() const throw() {return (this->message.c_str());}
        private:
        std::string message;
    };

    private:
    std::string name;
    int grade;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &worker);
