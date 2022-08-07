#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
	std::string name;
	public:
	Zombie();
	~Zombie();
	Zombie(const Zombie &z);
	Zombie &operator=(const Zombie &z);
	Zombie(std::string str);
	void announce (void);
	void assign(std::string str);
};

Zombie *newZombie(std::string name);
Zombie *zombieHorde(int n, std::string name);

#endif