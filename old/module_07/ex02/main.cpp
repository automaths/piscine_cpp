#include "Array.hpp"

int main()
{
    char c = 'a';
    unsigned int b = 5;
    // Array blop;
    // Array<char> blup('c');
    Array<unsigned int> blap(b);

    std::cout << blap.size() << std::endl;

    return 0;
}