#include "filename.hpp"

std::string converting(std::string one, std::string two)
{   
    std::cout << one << std::endl;
    std::cout << two << std::endl;
    return one;
}

int main(int argc, char **argv)
{
    if (argc != 4)
        return (std::cout << "3 inputs needed", 0);
    std::string line;
    std::ofstream myfile;
    myfile.open(argv[1]);
    line = converting(argv[2], argv[3]);

    return 0;
}