#include "Bureaucrat.hpp"

// int main()
// {
//     std::cout << "\nTESTING EXEC RANK\n" << std::endl;
//     try 
//     {
//         Bureaucrat John("John", 13);
//         Form ElFormo("CancelTIG", 50, 25);
//         ElFormo.beSigned(John);
//     }
//     catch (std::exception &e)
//     {
//         std::cout << e.what() << std::endl;
//     }
//     std::cout << "\nTESTING EXEC RANK (UNCORRECT RANK)\n" << std::endl;
//     try 
//     {
//         Bureaucrat John("John", 1);
//         Form ElFormo("CancelTIG", 50, 25);
//         ElFormo.beSigned(John);
//     }
//     catch (std::exception &e)
//     {
//         std::cout << e.what() << std::endl;
//     }
//     return 0;
// }

int main()
{
    try
    {
        Bureaucrat Jack ("Jack", 1);
        Bureaucrat Joey ("Joey", 13);
        Bureaucrat John ("John", 40);
        PresidentialPardonForm Potter("IamVold");
        ShruberryCreationForm Beauty("Beauty");

        Jack.signForm(Potter);
        Jack.executeForm(Potter);
        Jack.signForm(Beauty);
        Jack.executeForm(Beauty);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}

//srand(time(0))
//rand()
//ascii return std::ostream
//harl for the intern
//virtual on other functions in case other inheritance
//declare exception function outside class declaration
//finish Coplien form 