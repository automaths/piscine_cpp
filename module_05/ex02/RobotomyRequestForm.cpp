#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string str):target(str){srand(time(0)); this->isSigned = 0; this->signGrade = 72; this->execGrade = 45;/*std::cout << "Class Robotomy String Constructor" << std::endl;*/}
RobotomyRequestForm::~RobotomyRequestForm(){/*std::cout << "Class Robotomy Destructor" << std::endl;*/}

RobotomyRequestForm::RobotomyRequestForm():target("random"){srand(time(0)); this->isSigned = 0; this->signGrade = 72; this->execGrade = 45;/*std::cout << "Class Robotomy Default Constructor" << std::endl;*/}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &p): target(p.getName()){this->isSigned = p.getStatus(); this->signGrade = p.getSignGrade(); this->execGrade = p.getExecGrade();}
RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm &p){
    if (this != &p)
    {
        this->isSigned = p.getStatus();
        this->signGrade = p.getSignGrade();
        this->execGrade = p.getExecGrade();
    }
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    if (executor.getGrade() > this->execGrade)
        throw Form::GradeTooHighException();
    if (rand() % 2)
        std::cout << "BBBBRRRRRRRRRRRR ...  " << this->target << " has been robotomised" << std::endl;
    else
        std::cout << "BBBBRRRRRRRRRRRR ... couic ... couic couic ... (oups)" << std::endl;
}
