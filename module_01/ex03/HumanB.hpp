#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB{
	Weapon* item;
	std::string name;
	public:
	HumanB(std::string str): name(str){};
	void attack(){std::cout << name << " attack with their " << item->getType() << "\n";};
	void setWeapon(Weapon& cls){item = &cls;};
};

#endif