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
    std::cout << "\nTESTING RANKS (TOO LOW)\n" << std::endl;
    try 
    {
        Bureaucrat John("John", 150);
        Bureaucrat Jack("Jack", 1);
        John.loseGrade();
        Jack.winGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}