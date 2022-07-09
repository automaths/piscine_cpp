#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
	class Zombie *newHorde = new Zombie[n];
	for(unsigned int i = 0; i < n; ++i)
		newHorde[i].assign(name);
	// for(unsigned int i = 0; i < n; ++i)
	// {
	// 	std::cout << "number " << i << ": ";
	// 	newHorde[i].announce();
	// }
	return newHorde;
}