#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat Jack ("Jack", 1);
        Bureaucrat Joey ("Joey", 13);
        Bureaucrat John ("John", 40);
        PresidentialPardonForm Potter("IamVold");
        ShruberryCreationForm Beauty("Beauty");
        RobotomyRequestForm Trump("Trump");

        Jack.signForm(Potter);
        Jack.executeForm(Potter);
        John.executeForm(Potter);
        Jack.signForm(Beauty);
        Jack.signForm(Trump);
        Jack.executeForm(Beauty);
        Jack.executeForm(Trump);
        Jack.executeForm(Trump);
        Jack.executeForm(Trump);
        Jack.executeForm(Trump);
        Potter.execute(John);
    }
    catch(std::exception &e)
    {
        std::cout << "An exception was caught: " << e.what() << std::endl;
    }
    try
    {
        Bureaucrat Jack ("Jack", 15);
        PresidentialPardonForm Potter("IamVold");

        Jack.signForm(Potter);
        Jack.executeForm(Potter);
    }
    catch(std::exception &e)
    {
        std::cout << "An exception was caught: " << e.what() << std::endl;
    }
    try
    {
        Bureaucrat Jack ("Jack", 15);
        PresidentialPardonForm Potter("IamVold");

        Jack.signForm(Potter);
        Potter.execute(Jack);
    }
    catch(std::exception &e)
    {
        std::cout << "An exception was caught: " << e.what() << std::endl;
    }
    return 0;
}

//virtual on other functions in case other inheritance
