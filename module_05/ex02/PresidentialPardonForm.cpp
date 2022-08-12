#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string str): target(str){this->isSigned = 0; this->signGrade = 25; this->execGrade = 5;/*std::cout << "Class Presidential String Constructor" << std::endl;*/}
PresidentialPardonForm::~PresidentialPardonForm(){/*std::cout << "Class Presidential Destructor" << std::endl;*/}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
    if (executor.getGrade() > this->execGrade)
        throw Form::GradeTooHighException();
    std::cout << this->target << ": has received a presidential pardon" << std::endl;
}
