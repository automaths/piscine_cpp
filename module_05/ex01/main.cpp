#include "Bureaucrat.hpp"

int main()
{
    std::cout << "\nTESTING SIGN FORM\n" << std::endl;
    try 
    {
        Bureaucrat Jack("Jack", 160);
        Form ElFormo("CancelTIG", 50, 25);
        Jack.signForm(ElFormo);
        Jack.winGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\nTESTING SIGN RANK(UNCORRECT RANK) WITH SIGN FORM\n" << std::endl;
    try 
    {
        Bureaucrat John("John", 75);
        std::cout << John << std::endl;
        Form ElFormo("CancelTIG", 50, 25);
        John.signForm(ElFormo);
        John.winGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\nTESTING BE SIGNED\n" << std::endl;
    try 
    {
        Bureaucrat Jack("Jack", 1);
        Form ElFormo("CancelTIG", 50, 25);
        ElFormo.beSigned(Jack);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\nTESTING SIGN RANK(UNCORRECT RANK) WITH BE SIGNED\n" << std::endl;
    try 
    {
        Bureaucrat John("John", 75);
        Form ElFormo("CancelTIG", 50, 25);
        ElFormo.beSigned(John);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}