#include "Bureaucrat.hpp"

int main()
{
    std::cout << "\nTESTING SIGN FORM" << std::endl;
    try 
    {
        Bureaucrat Jack("Jack", 45);
        Form ElFormo("CancelTIG", 50, 25);
        std::cout << ElFormo << std::endl;
        Jack.signForm(ElFormo);
        std::cout << ElFormo << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "An exception has been caught: " << e.what() << std::endl;
    }

    std::cout << "\nTESTING SIGN RANK(UNCORRECT RANK) WITH SIGN FORM" << std::endl;
    try 
    {
        Bureaucrat John("John", 75);
        std::cout << John << std::endl;
        Form ElFormo("CancelTIG", 50, 25);
        John.signForm(ElFormo);
    }
    catch (std::exception &e)
    {
        std::cout << "An exception has been caught: " << e.what() << std::endl;
    }

    std::cout << "\nTESTING BE SIGNED" << std::endl;
    try 
    {
        Bureaucrat Jack("Jack", 1);
        Form ElFormo("CancelTIG", 50, 25);
        std::cout << ElFormo << std::endl;
        ElFormo.beSigned(Jack);
        std::cout << ElFormo << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "An exception has been caught: " << e.what() << std::endl;
    }

    std::cout << "\nTESTING SIGN RANK(UNCORRECT RANK) WITH BE SIGNED" << std::endl;
    try 
    {
        Bureaucrat John("John", 75);
        Form ElFormo("CancelTIG", 50, 25);
        std::cout << ElFormo << std::endl;
        ElFormo.beSigned(John);
    }
    catch (std::exception &e)
    {
        std::cout << "An exception has been caught: " << e.what() << std::endl;
    }
    return 0;
}