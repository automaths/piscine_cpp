#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *newZombie;
	newZombie = new Zombie(name);

	return(newZombie);
};