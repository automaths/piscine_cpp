#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "random";
	std::cout << this->name << ": constructor called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << ": destructor called" << std::endl;
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