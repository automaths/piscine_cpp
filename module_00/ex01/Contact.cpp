#include "PhoneBook.hpp"

int	Contact::IsOccupied()
{
	if (FirstName.empty() == 0)
		return (1);
	return (0);
}

void	Contact::ShowContent(std::string Content)
{
	if (Content.compare("FirstName") == 0)
		std::cout << FirstName << "\n";
}
	
Contact::Contact(std::string FirstName, std::string LastName, std::string NickName, std::string PhoneNumber, std::string DarkestSecret)
{
	Contact::FirstName = FirstName;
	Contact::LastName = LastName;
	Contact::NickName = NickName;
	Contact::PhoneNumber = PhoneNumber;
	Contact::DarkestSecret = DarkestSecret;
}

class Contact PhoneBook::GetContactInfos(void)
{
	std::string A;
	std::string B;
	std::string C;
	std::string D;
	std::string E;

	std::cout << "FirstName: ";
	std::getline (std::cin,A);
		std::cout << A;
	std::cout << "LastName: ";
	std::getline (std::cin,B);
		std::cout << B;
	std::cout << "NickName: ";
	std::getline (std::cin,C);
		std::cout << "C";
	std::cout << "PhoneNumber: ";
	std::getline (std::cin,D);
		std::cout << D;
	std::cout << "DarkestSecret: ";
	std::getline (std::cin,E);
		std::cout << E;
	
	class Contact NewContact(A, B, C, D, E);
	return (NewContact);
}
