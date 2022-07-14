#include "Span.hpp"

int main()
{
    int diff;
    Span< std::vector<int> > mySpan(20);
    std::vector<int>::iterator it;
    for (int i = 181; i > 159; --i)
        mySpan.addNumber(i);
    diff = mySpan.longestSpan();
    // it = mySpan.shortestSpan();
    std::cout << diff << std::endl;



    return 0;
}