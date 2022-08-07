#include "Zombie.hpp"

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

Zombie::Zombie(std::string str)
{
	this->name = str;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::assign(std::string str)
{
	this->name = str;
}