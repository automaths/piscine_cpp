#include "FragTrap.hpp"

FragTrap::FragTrap(std::string str) : ClapTrap(str)
{
    this->Name = str;
    this->HitPoint = 100;
    this->EnergyPoint = 50;
    this->Damage = 20;
    std::cout << "The FragTrap " << this->Name << " constructor is called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "The FragTrap " << this->Name << " destructor is called" << std::endl;
}

void    FragTrap::highFiveGuys()
{
    if (this->EnergyPoint <= 0)
    {
        std::cout << this->Name << " can't ask high fives, he is already dead ..." << std::endl;
        return ;
    }
    std::cout << this->Name << "is asking for high fives" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &c)
{
    if (this != &c)
    {
        this->Name = c.getName();
        this->HitPoint = c.getHitPoint();
        this->EnergyPoint = c.getEnergyPoint();
        this->Damage = c.getDamage();
    }
    return (*this);
}
