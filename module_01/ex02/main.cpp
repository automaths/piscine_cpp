#include <string>
#include <iostream>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "this is the memory address of the string:\n" << &str << std::endl;
	std::cout << std::endl;
	std::cout << "this is the memory address of the string pointer:\n" << stringPTR << std::endl;
	std::cout << std::endl;
	std::cout << "this is the memory address of the reference string:\n" << &stringREF << std::endl;
	std::cout << std::endl; 

	return 0;
}