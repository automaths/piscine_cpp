#include "Harl.hpp"

int main(int argc, char **argv)
{
    class Harl bloup;
    (void)argc;
    if (argc != 2)
        return (std::cout << "one argument needed", 0);
    bloup.complain("DEBUG");
    return 0;
}