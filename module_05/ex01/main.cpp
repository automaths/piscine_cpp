#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat Jack ("Jack", 1);
    Bureaucrat John ("John", 150);
    Form TheForm("ElForm", 0, 75, 50);
    TheForm.beSigned(John);
    TheForm.beSigned(Jack);

    TheForm.beSigned(Jack);

    return 0;
}