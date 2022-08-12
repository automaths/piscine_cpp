#include "Bureaucrat.hpp"

Form::Form(): name("Form"), isSigned(0), signGrade(75), execGrade(25){/*std::cout << "Class Form Default Construtor" << std::endl;*/}

Form::Form(std::string str, int sign, int exec) : name(str), isSigned(0), signGrade(sign), execGrade(exec)
{
    if (sign > 150 || exec > 150)
        throw (Form::GradeTooLowException());
    if (sign < 1 || exec < 1)
        throw (Form::GradeTooHighException());
    // std::cout << "Class Form String and Ints Constructor" << std::endl;
}

Form::Form(Form &f): name(f.getName()), isSigned(f.getStatus()), signGrade(f.getSignGrade()), execGrade(f.getExecGrade()){/* std::cout << "Class Form Copy Constructor << std::endl;"*/}

Form& Form::operator=(Form &f)
{
    // std::cout << "Class Form Assignement Operator" << std::endl;
    if (this != &f)
    {
        this->name = f.getName();
        this->isSigned = f.getStatus();
        this->signGrade = f.getSignGrade();
        this->execGrade = f.getExecGrade();
    }
    return (*this);
}

Form::~Form(){/*std::cout << "Class Form Destructor" << std::endl;*/}

std::ostream& operator<<(std::ostream &out, Form &TheForm)
{
    out << "Form name: " << TheForm.getName() << ", sign status (1 for signed): " << TheForm.getStatus() << ", rank to sign: " << TheForm.getSignGrade() << ", rank to execute: " << TheForm.getExecGrade();
    return (out);
}

const char* Form::GradeTooLowException::what() const throw() {return ("Grade is too low");}
const char* Form::GradeTooHighException::what() const throw() {return ("Grade is too high");}

int Form::getSignGrade() const {return (this->signGrade);}
int Form::getExecGrade() const{return (this->execGrade);}
int Form::getStatus() const{return (this->isSigned);}
std::string Form::getName() const{return (this->name);}

void Form::execSign(){this->isSigned = 1;}

void    Form::beSigned(Bureaucrat &Worker)
{
    if (Worker.getGrade() > this->signGrade)
        throw Form::GradeTooHighException();
    std::cout << Worker.getName() << " signed " << this->name << std::endl;
    this->isSigned = 1;
}

ShruberryCreationForm::ShruberryCreationForm(std::string str): target(str){this->signGrade = 145; this->execGrade = 137; this->isSigned = 0;/*std::cout << "Class Shruberry String Constructor" << std::endl;*/}
ShruberryCreationForm::~ShruberryCreationForm(){/*std::cout << "Class Shruberry Destructor" << std::endl;*/}

RobotomyRequestForm::RobotomyRequestForm(std::string str):target(str){this->signGrade = 72; this->execGrade = 45; this->isSigned = 0;/*std::cout << "Class Robotomy String Constructor" << std::endl;*/}
RobotomyRequestForm::~RobotomyRequestForm(){/*std::cout << "Class Robotomy Destructor" << std::endl;*/}

PresidentialPardonForm::PresidentialPardonForm(std::string str): target(str){this->signGrade = 25; this->execGrade = 5; this->isSigned = 0;/*std::cout << "Class Presidential String Constructor" << std::endl;*/}
PresidentialPardonForm::~PresidentialPardonForm(){/*std::cout << "Class Presidential Destructor" << std::endl;*/}

void ShruberryCreationForm::execute(Bureaucrat const& executor) const
{
    if (executor.getGrade() > this->execGrade)
        throw Form::GradeTooHighException();
    std::ofstream newfile;
    newfile.open((executor.getName().append("_shrubbery")).c_str());
    std::cout << "Creating the Ascii Tree in the file "<< executor.getName().append("_shrubbery") << std::endl;
    newfile << "                                            .                   " << std::endl;
    newfile << "                                              .         ;       " << std::endl;
    newfile << "                 .              .              ;%     ;;        " << std::endl;
    newfile << "                   ,           ,                :;%  %;         " << std::endl;
    newfile << "                    :         ;                   :;%;,     .,  " << std::endl;
    newfile << "           ,.        %;     %;            ;        %;,    ,;    " << std::endl;
    newfile << "             ;       ;%;  %%;        ,     %;    ;%;    ,%,     " << std::endl;
    newfile << "              %;       %;%;      ,  ;       %;  ;%;   ,%;,      " << std::endl;
    newfile << "               ;%;      %;        ;%;        % ;%;  ,%;,        " << std::endl;
    newfile << "                `%;.     ;%;     %;,         `;%%;.%;,          " << std::endl;
    newfile << "                 `:;%.    ;%%. %@;        %; ;@%;%,             " << std::endl;
    newfile << "                    `:%;.  :;bd%;          %;@%;,               " << std::endl;
    newfile << "                      `@%:.  :;%.         ;@@%;,                " << std::endl;
    newfile << "                        `@%.  `;@%.      ;@@%;                  " << std::endl;
    newfile << "                          `@%%. `@%%    ;@@%;                   " << std::endl;
    newfile << "                            ;@%. :@%%  %@@%;                    " << std::endl;
    newfile << "                              %@bd%%%bd%%:;                     " << std::endl;
    newfile << "                                #@%%%%%:;;                      " << std::endl;
    newfile << "                                %@@%%%::;                       " << std::endl;
    newfile << "                                %@@@%(o);  . ,                  " << std::endl;
    newfile << "                                %@@@o%;:(.,,                    " << std::endl;
    newfile << "                            `.. %@@@o%::;                       " << std::endl;
    newfile << "                               ` @@@o%::;                       " << std::endl;
    newfile << "                                %@@(o)::;                       " << std::endl;
    newfile << "                               .%@@@@%::;                       " << std::endl;
    newfile << "                               ;%@@@@%::;.                      " << std::endl;
    newfile << "                              ;%@@@@%%:;;;.                     " << std::endl;
    newfile << "                          ...;%@@@@@%%:;;;;,..                  " << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    if (executor.getGrade() > this->signGrade)
        throw Form::GradeTooHighException();
    std::cout << "BBBBRRRRRRRRRRRR ..." << std::endl;
    std::cout << this->target << ": has been robotomised" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
    if (executor.getGrade() > this->signGrade)
        throw Form::GradeTooHighException();
    std::cout << this->target << ": has received a presidential pardon" << std::endl;
}
