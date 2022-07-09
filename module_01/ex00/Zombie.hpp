#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
	std::string name;
	public:
	void announce (void);
	Zombie(std::string str){name = str;};
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

#endif