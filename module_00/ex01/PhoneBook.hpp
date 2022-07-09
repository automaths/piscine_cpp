#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact GetContactInfos(void);

class Contact {
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string PhoneNumber;
	std::string DarkestSecret;
	public:
	Contact(std::string, std::string, std::string, std::string, std::string);
	void ShowContent(std::string Content);
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