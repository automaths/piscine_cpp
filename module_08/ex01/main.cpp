#include "Span.hpp"

int main()
{
    // int longest;
    // int shortest;
    Span< std::vector<int> > mySpan(20);
    mySpan.addRange(1, 2, 3, 4, 5);
    // std::vector<int>::iterator it;
    // for (int i = 181; i > 120; i -= 2)
    //     mySpan.addNumber(i);
    // longest = mySpan.longestSpan();
    // shortest = mySpan.shortestSpan();
    // std::cout << longest << std::endl;
    // std::cout << shortest << std::endl;
    return 0;
}