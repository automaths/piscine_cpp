#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA{
	Weapon& item;
	std::string name;
	public:
	HumanA(std::string a, Weapon& club) : name(a), item(club) {};
	void attack(){std::cout << name << " attack with their " << item.getType() << "\n";};	
};

#endif