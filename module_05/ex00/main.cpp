#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat Jack ("Jack", 1);
        Bureaucrat John ("John", 150);
        John.loseGrade();
        Jack.winGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}