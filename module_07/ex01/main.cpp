#include "Iter.hpp"

void    increase(int &a)
{
    a += 1;
}

int main()
{
    int tab[6] = {1, 2, 3, 4, 5, 6};

    ::iter(tab, 6, increase);
    for (int i = 0; i < 6; ++i)
        std::cout << tab[i] << std::endl;
    return 0;
}