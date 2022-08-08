#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *newZombie;
	newZombie = new Zombie("john");

	return(newZombie);
};