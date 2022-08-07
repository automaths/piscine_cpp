#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	class Zombie *newZombie;
	newZombie = new Zombie(name);
	return newZombie;
}