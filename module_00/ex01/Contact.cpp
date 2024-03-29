#include "PhoneBook.hpp"

int	Contact::IsOccupied()
{
	if (FirstName.empty() == 0)
		return (1);
	return (0);
}

void	Contact::ShowContent()
{
	std::cout << "FirstName: " << FirstName << std::endl;
	std::cout << "LastName: " << LastName << std::endl;
	std::cout << "NickName: " << NickName << std::endl;
	std::cout << "PhoneNumber: " << PhoneNumber << std::endl;
	std::cout << "DarkestSecret: " << DarkestSecret << std::endl;
}

void	Contact::ShowCase(int rank)
{
	std::cout << std::setw(10) << rank << "|";
	if (FirstName.length() > 10)
	{
		for(unsigned int i = 0; i < 9; ++i)
			std::cout << FirstName[i];
		std::cout << ".|";
	}
	else
		std::cout << std::setw(10) << FirstName << "|";
	if (LastName.length() > 10)
	{
		for(unsigned int i = 0; i < 9; ++i)
			std::cout << LastName[i];
		std::cout << ".|";
	}
	else
		std::cout << std::setw(10) << LastName << "|";
	if (NickName.length() > 10)
	{
		for(unsigned int i = 0; i < 9; ++i)
			std::cout << NickName[i];
		std::cout << ".|";
	}
	else
		std::cout << std::setw(10) << NickName << "|";
	std::cout << std::endl;
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
	while (A.compare("") == 0)
	{
		std::cout << "The field must be filled ..." << std::endl;
		std::cout << "FirstName: ";
		std::getline (std::cin,A);
	}
	std::cout << "LastName: ";
	std::getline (std::cin,B);
	while (B.compare("") == 0)
	{
		std::cout << "The field must be filled ..." << std::endl;
		std::cout << "LastName: ";
		std::getline (std::cin,B);
	}
	std::cout << "NickName: ";
	std::getline (std::cin,C);
	while (C.compare("") == 0)
	{
		std::cout << "The field must be filled ..." << std::endl;
		std::cout << "NickName: ";
		std::getline (std::cin,C);
	}
	std::cout << "PhoneNumber: ";
	std::getline (std::cin,D);
	while (D.compare("") == 0)
	{
		std::cout << "The field must be filled ..." << std::endl;
		std::cout << "PhoneNumber: ";
		std::getline (std::cin,D);
	}
	std::cout << "DarkestSecret: ";
	std::getline (std::cin,E);
	while (E.compare("") == 0)
	{
		std::cout << "The field must be filled ..." << std::endl;
		std::cout << "DarkestSecret: ";
		std::getline (std::cin,E);
	}
	class Contact NewContact(A, B, C, D, E);
	return (NewContact);
}

bool	Contact::CheckValid()
{
	if (this->FirstName.size() > 0)
		return (1);
	else
		return (0);
}
