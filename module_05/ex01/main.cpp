#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat Jack ("Jack", 1);
    Bureaucrat John ("John", 150);
    Form TheForm("ElForm", 0, 75, 50);
    John.signForm(TheForm);
    Jack.signForm(TheForm);

    Jack.signForm(TheForm);

    return 0;
}