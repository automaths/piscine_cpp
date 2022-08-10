#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat Jack ("Jack", 1);
    Bureaucrat Joey ("Joey", 13);
    Bureaucrat John ("John", 150);
    PresidentialPardonForm Potter("TheKillings");

    Jack.executeForm(Potter);
    Jack.signForm(Potter);
    Jack.executeForm(Potter);
    return 0;
}