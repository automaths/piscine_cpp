#include "PhoneBook.hpp"

int	main(int argc, char **argv)
{
	std::string name;

	while (1)
	{
		std::cout << "PhoneBook: ";
		std::getline (std::cin,name);
		if (name.compare("EXIT") == 0)
			break;
		if (name.compare("ADD") == 0)
			std::cout << "Adding Contact\n";			
		if (name.compare("SEARCH") == 0)
			std::cout << "Searching contact\n";
	}
	return (0);
}

// int main ()
// {
//   std::string name;

//   std::cout << "Please, enter your full name: ";
//   std::getline (std::cin,name);
//   std::cout << "Hello, " << name << "!\n";

//   return 0;
// }