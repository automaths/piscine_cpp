#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string str) : ClapTrap(str)
{
    this->Name = str;
    this->HitPoint = 100;
    this->EnergyPoint = 50;
    this->Damage = 20;
    std::cout << "The ScavTrap " << this->Name << " constructor is called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "The ScavTrap " << this->Name << " destructor is called" << std::endl;
}

void    ScavTrap::guardGate()
{
    if (this->EnergyPoint <= 0)
    {
        std::cout << this->Name << " can't enter Gate keeper mode, he is already dead ..." << std::endl;
        return ;
    }
    std::cout << this->Name << "has entered the mode GateKeeper" << std::endl;
}