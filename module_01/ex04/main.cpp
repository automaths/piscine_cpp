#include <iostream>
#include <string>
#include <fstream>

std::string converting(std::string line, std::string one, std::string two)
{
    std::size_t found = line.find(one);
    while (found != std::string::npos)
    {
        line.erase(found, one.length());
        line.insert(found, two, 0, two.length());
        found = line.find(one);
    }
    return line;
}

int main(int argc, char **argv)
{
    if (argc != 4)
        return (std::cout << "3 inputs needed", 0);
    if (argv[2][0] == '\0')
        return (std::cout << "please enter a string to convert", 0);
    std::string line;
    std::string name;
    std::ifstream myfile;
    std::ofstream newfile;
    myfile.open(argv[1]);
    if (myfile.fail())
        return (std::cout << "the file couldn't be opened", 0);
    name = argv[1];
    name.append(".replace");
    newfile.open(name.c_str());
    while (getline(myfile, line))
    {
        line = converting(line, argv[2], argv[3]);
        newfile << line << std::endl;
    }
    return 0;
}