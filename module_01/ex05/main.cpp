#include "Harl.hpp"

int main(int argc, char **argv)
{
    class Harl bloup;
    (void)argc;
    if (argc != 2)
        return (std::cout << "one argument needed\n", 0);
    bloup.complain(argv[1]);
    return 0;
}