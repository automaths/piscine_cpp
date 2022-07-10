#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon{
	std::string type;
	public:
	std::string& getType();
	Weapon(std::string str){type = str;};
	void setType(std::string str){type = str;};
};

#endif