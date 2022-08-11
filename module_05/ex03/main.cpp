#include "Bureaucrat.hpp"

int main()
{
    Intern Bruno;
    Form *TheForm;
    TheForm = Bruno.makeForm("PresidentialPardonForm", "Potter");
    Bureaucrat Jack ("Jack", 1);
    Bureaucrat Joey ("Joey", 13);
    Bureaucrat John ("John", 150);
    // PresidentialPardonForm Potter("TheKillings");

    Jack.executeForm(*TheForm);
    Jack.signForm(*TheForm);
    Jack.signForm(*TheForm);
    Jack.executeForm(*TheForm);
    return 0;
}