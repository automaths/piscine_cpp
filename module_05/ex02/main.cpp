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
        Jack.signForm(Beauty);
        Jack.signForm(Trump);
        Jack.executeForm(Beauty);
        Jack.executeForm(Trump);
        Jack.executeForm(Trump);
        Jack.executeForm(Trump);
        Jack.executeForm(Trump);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}

//virtual on other functions in case other inheritance
