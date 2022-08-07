#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact GetContactInfos(void);

class Contact {
	int index;
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string PhoneNumber;
	std::string DarkestSecret;
	public:
	Contact(std::string, std::string, std::string, std::string, std::string);
	bool CheckValid();
	void ShowContent();
	void ShowCase(int);
	int IsOccupied();
	Contact(){;};
};

class PhoneBook {
	class Contact	Repertory[8];
	public:
	class Contact	GetContactInfos(void);
	void			AddContact(class Contact);
	void 			SearchContact();
	void			ClearRepertory(void);
	// PhoneBook(){};
};

#endif