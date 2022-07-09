#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
	std::string name;
	public:
	void announce (void);
	void assign(std::string str){name = str;};
	Zombie(std::string str){name = str;};
	Zombie(){;};
};

Zombie *newZombie(std::string name);
Zombie *zombieHorde(int n, std::string name);

#endif