#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Intern Bruno;
        Bureaucrat Jack ("Jack", 1);
        Form *TheForm_one;
        Form *TheForm_two;
        Form *TheForm_three;
        TheForm_one = Bruno.makeForm("PresidentialPardon", "Potter");
        TheForm_two = Bruno.makeForm("RobotomyRequest", "Pozzer");
        TheForm_three = Bruno.makeForm("ShruberryCreation", "Poller");

        Jack.signForm(*TheForm_one);
        Jack.executeForm(*TheForm_one);

        Jack.signForm(*TheForm_two);
        Jack.executeForm(*TheForm_two);

        Jack.signForm(*TheForm_three);
        Jack.executeForm(*TheForm_three);

        delete TheForm_one;
        delete TheForm_two;
        delete TheForm_three;
    }
    catch (std::exception &e)
    {
        std::cout << "An exception has been caught: " << e.what() << std::endl;
    }
    return 0;
}