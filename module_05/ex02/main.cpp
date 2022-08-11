#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat Jack ("Jack", 1);
        Bureaucrat Joey ("Joey", 13);
        Bureaucrat John ("John", 150);
        PresidentialPardonForm Potter("TheKillings");

        Jack.executeForm(Potter);
        Jack.signForm(Potter);
        Jack.signForm(Potter);
        Jack.executeForm(Potter);
        Jack.executeForm(Potter);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}