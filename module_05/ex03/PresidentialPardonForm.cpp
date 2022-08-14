#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string str): target(str){this->isSigned = 0; this->signGrade = 25; this->execGrade = 5;/*std::cout << "Class Presidential String Constructor" << std::endl;*/}
PresidentialPardonForm::~PresidentialPardonForm(){/*std::cout << "Class Presidential Destructor" << std::endl;*/}

PresidentialPardonForm::PresidentialPardonForm(): target("random"){this->isSigned = 0; this->signGrade = 25; this->execGrade = 5;/*std::cout << "Class Presidential String Constructor" << std::endl;*/}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &p): target(p.getName()){this->isSigned = p.getStatus(); this->signGrade = p.getSignGrade(); this->execGrade = p.getExecGrade();}
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm &p){
    if (this != &p)
    {
        this->isSigned = p.getStatus();
        this->signGrade = p.getSignGrade();
        this->execGrade = p.getExecGrade();
    }
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
    if (executor.getGrade() > this->execGrade)
        throw Form::GradeTooHighException();
    std::cout << this->target << ": has received a presidential pardon" << std::endl;
}
