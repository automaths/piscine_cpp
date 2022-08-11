#include "Bureaucrat.hpp"

int main()
{
    std::cout << "\nTESTING RANKS (TOO HIGH)\n" << std::endl;
    try 
    {
        Bureaucrat Jack("Jack", 1);
        Bureaucrat John("John", 150);
        Jack.winGrade();
        John.loseGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\nTESTING DOUBLE SIGN\n" << std::endl;
    try 
    {
        Bureaucrat Jack("Jack", 1);
        Form ElFormo("CancelTIG", 0, 50, 25);
        Jack.signForm(ElFormo);
        Jack.signForm(ElFormo);
        Jack.winGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\nTESTING SIGN RANK(UNCORRECT RANK)\n" << std::endl;
    try 
    {
        Bureaucrat John("John", 75);
        std::cout << John << std::endl;
        Form ElFormo("CancelTIG", 0, 50, 25);
        John.signForm(ElFormo);
        John.winGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\nTESTING EXEC RANK\n" << std::endl;
    try 
    {
        Bureaucrat John("John", 20);
        Form ElFormo("CancelTIG", 0, 50, 25);
        John.executeForm(ElFormo);
        John.winGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\nTESTING EXEC RANK (UNCORRECT RANK)\n" << std::endl;
    try 
    {
        Bureaucrat John("John", 40);
        Form ElFormo("CancelTIG", 0, 50, 25);
        John.executeForm(ElFormo);
        John.winGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}