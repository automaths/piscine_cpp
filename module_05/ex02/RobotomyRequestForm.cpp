#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string str):target(str){srand(time(0)); this->signGrade = 72; this->execGrade = 45; this->isSigned = 0;/*std::cout << "Class Robotomy String Constructor" << std::endl;*/}
RobotomyRequestForm::~RobotomyRequestForm(){/*std::cout << "Class Robotomy Destructor" << std::endl;*/}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    if (executor.getGrade() > this->signGrade)
        throw Form::GradeTooHighException();
    if (rand() % 2)
        std::cout << "BBBBRRRRRRRRRRRR ...  " << this->target << " has been robotomised" << std::endl;
    else
        std::cout << "BBBBRRRRRRRRRRRR ... couic ... couic couic ... (oups)" << std::endl;
}
