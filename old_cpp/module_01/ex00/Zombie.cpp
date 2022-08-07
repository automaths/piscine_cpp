#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
	this->name = "random";
}

Zombie::~Zombie()
{
	;
}

Zombie::Zombie(const Zombie &z)
{
	this->name = z.name;
}

Zombie& Zombie::operator=(const Zombie &z)
{
	if (this != &z)
		this->name = z.name;
	return (*this);
}