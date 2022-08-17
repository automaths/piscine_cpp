#include "Iter.hpp"

int main()
{
    {
        std::cout << "\nTEST WITH INT ARRAY\n" << std::endl;
        int tab[6] = {1, 2, 3, 4, 5, 6};

        ::iter(tab, 6, display);
    }
    {
        std::cout << "\nTEST WITH CHAR ARRAY\n" << std::endl; 
        char tab[6] = {'a', 'b', 'c', 'd', 'e', 'f'};

        ::iter(tab, 6, display);
    }
    return 0;
}