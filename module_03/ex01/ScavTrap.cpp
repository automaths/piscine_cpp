#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->Name = "Random";
    this->HitPoint = 100;
    this->EnergyPoint = 50;
    this->Damage = 20;
    std::cout << "The ScavTrap " << this->Name << " default constructor is called" << std::endl;

}

ScavTrap::ScavTrap(std::string str)
{
    this->Name = str;
    this->HitPoint = 100;
    this->EnergyPoint = 50;
    this->Damage = 20;
    std::cout << "The ScavTrap " << this->Name << " string constructor is called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "The ScavTrap " << this->Name << " destructor is called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &c)
{
    if (this != &c)
    {
        this->Name = c.getName();
        this->HitPoint = c.getHitPoint();
        this->EnergyPoint = c.getEnergyPoint();
        this->Damage = c.getDamage();
    }
    std::cout << "The ScavTrap " << this->Name << " copy assignement operator is called" << std::endl;
    return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &c)
{
    this->Name = c.getName();
    this->HitPoint = c.getHitPoint();
    this->EnergyPoint = c.getEnergyPoint();
    this->Damage = c.getDamage();
    std::cout << "The ScavTrap " << this->Name << " Copy constructor called" << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->EnergyPoint <= 0)
    {
        std::cout << this->Name << " can't attack, not enough energy point..." << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->Name << " attack " << target << ", causing " << this->Damage << " points of damage!" << std::endl;
    this->EnergyPoint--;
}

void    ScavTrap::takeDamage(unsigned int damage)
{
    if (this->HitPoint <= 0)
    {
        std::cout << "ScavTrap " << this->Name << " is already dead ..." << std::endl;
        return ;
    }
    this->HitPoint -= damage;
    if (this->HitPoint < 0)
        this->HitPoint = 0;
    std::cout << "ScavTrap " << this->Name << " has taken " << damage << " points of damage" << "--- HitPoint : " << this->HitPoint << std::endl;
}

void    ScavTrap::beRepaired(unsigned int amount)
{
    if (this->EnergyPoint <= 0)
    {
        std::cout << this->Name << " can't repair, not enough energy point..." << std::endl;
        return ;
    }
    this->HitPoint += amount;
    this->EnergyPoint--;
    std::cout << "ScavTrap " << this->Name << " is repaired of " << amount << " points" << "--- HitPoint : " << this->HitPoint << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->Name << " has entered Gate keeper mode! Beware!" << std::endl;

}
