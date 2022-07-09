#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie *babyZombie;
	
	babyZombie = newZombie(name);
	babyZombie->announce();
	delete babyZombie;
}