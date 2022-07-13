#include "Conversion.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        return (std::cout << "enter one argument" << std::endl, 0);
    Conversion convert(argv[1]);
    convert.displaying();
    return 0;
}