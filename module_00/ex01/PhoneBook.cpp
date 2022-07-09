#include "PhoneBook.hpp"

void	PhoneBook::ClearRepertory()
{
	std::cout << "Deleting oldest contact\n";
	unsigned int i = -1;
	while (++i < 7)
		Repertory[i + 1] = Repertory[i];
}

void	PhoneBook::AddContact(class Contact NewContact)
{
	unsigned int i = -1;
	while (Repertory[++i].IsOccupied())
		;
	if (i < 8)
		PhoneBook::Repertory[i] = NewContact;
	else
	{
		ClearRepertory();
		Repertory[0] = NewContact;
	}
}

void	PhoneBook::SearchContact()
{
	std::string number;
	
	std::cout << "Which contact number :";
	std::getline (std::cin,number);
	for (char c = '1'; c < '8'; ++c)
	{
		if (number[0] == c)
		{
			std::cout << "You've asked Contact " << number[0] << "\n";
			unsigned int i = c - '0' - 1;			
			Repertory[i].ShowContent("FirstName");
		}
	}
}