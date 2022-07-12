#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat Jack ("Jack", 1);
    Bureaucrat John ("John", 150);

    Jack.winGrade();
    John.loseGrade();
    std::cout << "Jack grade : " << Jack.getGrade() << std::endl;
    std::cout << "John grade : " << John.getGrade() << std::endl;
    return 0;
}