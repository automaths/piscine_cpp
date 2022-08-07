#include "PhoneBook.hpp"

void	PhoneBook::ClearRepertory()
{
	std::cout << "Deleting oldest contact\n";
	unsigned int i = -1;
	while (++i < 7)
		Repertory[i] = Repertory[i + 1];
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
		Repertory[7] = NewContact;
	}
}

void	PhoneBook::SearchContact()
{
	std::string number;

	if (!Repertory[0].CheckValid())
	{
		std::cout << "No saved contact" << std::endl;
		return;
	}
	for (unsigned int i = 0; i < 8 && Repertory[i].CheckValid(); ++i)
		Repertory[i].ShowCase(i + 1);
	std::cout << "Which contact number: ";
	std::getline (std::cin,number);
	if (number[0] < '1' || number[0] > '8')
	{
		std::cout << "Incorrect entry (contact numbers between 1 and 8), returning to home" << std::endl;
		return;
	}
	for (char c = '1'; c < '9'; ++c)
	{
		if (number[0] == c)
		{
			std::cout << "You've asked Contact " << number[0] << "\n";
			unsigned int i = c - '0' - 1;
			if (Repertory[i].CheckValid())		
				Repertory[i].ShowContent();
			else
				std::cout << "No saved contact in this slot, returning to home" << std::endl;
		}
	}
}
