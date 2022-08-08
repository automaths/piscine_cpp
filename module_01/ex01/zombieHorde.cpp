#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
	class Zombie *newHorde = new Zombie[n];
	for(unsigned int i = 0; i < n; ++i)
		newHorde[i].assign(name);
	return newHorde;
}