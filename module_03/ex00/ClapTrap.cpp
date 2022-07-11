#include "ClapTrap.hpp"

void    ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << this->Name << " attack " << target << ", causing " << this->Damage << " points of damage" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int damage)
{
    this->EnergyPoint -= damage;
    std::cout << "ClapTrap " << this->Name << " has taken " << damage << " points of damage" << "--- EnergyPoint : " << this->EnergyPoint << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    this->EnergyPoint += amount;
    std::cout << "ClapTrap " << this->Name << " is repaired of " << amount << " points" << "--- EnergyPoint : " << this->EnergyPoint << std::endl;
}

ClapTrap::ClapTrap(std::string str)
{
    this->Name = str;
    this->HitPoint = 10;
    this->EnergyPoint = 10;
    this->Damage = 0;
    std::cout << Name << ": constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << this->Name << ": destructor called" << std::endl;
}
