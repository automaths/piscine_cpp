#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string str) : ClapTrap(str)
{
    this->Name = str;
    this->HitPoint = 100;
    this->EnergyPoint = 50;
    this->Damage = 20;
    std::cout << "The ScavTrap constructor is called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "The ScavTrap destructor is called" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << "has entered the mode GateKeeper" << std::endl;
}