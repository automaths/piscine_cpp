#include "Bureaucrat.hpp"

ShruberryCreationForm::ShruberryCreationForm(std::string str): target(str){this->signGrade = 145; this->execGrade = 137; this->isSigned = 0;/*std::cout << "Class Shruberry String Constructor" << std::endl;*/}
ShruberryCreationForm::~ShruberryCreationForm(){/*std::cout << "Class Shruberry Destructor" << std::endl;*/}

void ShruberryCreationForm::execute(Bureaucrat const& executor) const
{
    std::string title = this->target;
    if (executor.getGrade() > this->execGrade)
        throw Form::GradeTooHighException();
    std::ofstream newfile;
    newfile.open((title.append("_shrubbery")).c_str());
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
