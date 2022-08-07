#include "PhoneBook.hpp"

int	main(int argc, char **argv)
{
	class PhoneBook Alcatel;
	std::string name;

	while (1)
	{
		std::cout << "PhoneBook: ";
		std::getline (std::cin,name);
		if (name.compare("EXIT") == 0)
			break;
		else if (name.compare("ADD") == 0)
		{
			std::cout << "Adding Contact\n";	
			Alcatel.AddContact(Alcatel.GetContactInfos());
		}
		else if (name.compare("SEARCH") == 0)
		{
			std::cout << "Searching contact\n";
			Alcatel.SearchContact();
		}
		else
			std::cout << "Wrong entry, enter ADD, SEARCH or EXIT" << std::endl;
	}
	return (0);
}
