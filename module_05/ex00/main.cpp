#include "Bureaucrat.hpp"

int main()
{
    std::cout << "\nTESTING RANKS WRONG CONSTRUCTOR(TOO LOW)" << std::endl;
    try 
    {
        Bureaucrat Jack("Jack", 0);
    }
    catch (std::exception &e)
    {
        std::cout << "An exception has been caught: " << e.what() << std::endl;
    }
    std::cout << "\nTESTING RANKS WRONG CONSTRUCTOR(TOO HIGH)" << std::endl;
    try 
    {
        Bureaucrat Jack("Jack", 155);
        Jack.winGrade();
    }
    catch (std::exception &e)
    {
        std::cout << "An exception has been caught: " << e.what() << std::endl;
    }
    std::cout << "\nTESTING RANKS INCREMENT(TOO HIGH)" << std::endl;
    try 
    {
        Bureaucrat Jack("Jack", 1);
        std::cout << Jack << std::endl;
        Jack.winGrade();
    }
    catch (std::exception &e)
    {
        std::cout << "An exception has been caught: " << e.what() << std::endl;
    }
    std::cout << "\nTESTING RANKS INCREMENT(TOO LOW)" << std::endl;
    try 
    {
        Bureaucrat John("John", 150);
        std::cout << John << std::endl;
        John.loseGrade();
    }
    catch (std::exception &e)
    {
        std::cout << "An exception has been caught: " << e.what() << std::endl;
    }
    std::cout << "\nTESTING RANKS INCREMENT" << std::endl;
    try 
    {
        Bureaucrat John("John", 150);
        std::cout << John << std::endl;
        John.winGrade();
        std::cout << John << std::endl;
        John.loseGrade();
        std::cout << John << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "An exception has been caught: " << e.what() << std::endl;
    }

    return 0;
}