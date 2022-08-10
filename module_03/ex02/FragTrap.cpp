#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->Name = "Random";
    this->HitPoint = 100;
    this->EnergyPoint = 100;
    this->Damage = 30;
    std::cout << "The FragTrap " << this->Name << " default constructor is called" << std::endl;

}

FragTrap::FragTrap(std::string str)
{
    this->Name = str;
    this->HitPoint = 100;
    this->EnergyPoint = 100;
    this->Damage = 30;
    std::cout << "The FragTrap " << this->Name << " string constructor is called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "The FragTrap " << this->Name << " destructor is called" << std::endl;
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
    std::cout << "The FragTrap " << this->Name << " copy assignement operator is called" << std::endl;
    return (*this);
}

FragTrap::FragTrap(const FragTrap &c)
{
    this->Name = c.getName();
    this->HitPoint = c.getHitPoint();
    this->EnergyPoint = c.getEnergyPoint();
    this->Damage = c.getDamage();
    std::cout << "The FragTrap " << this->Name << " Copy constructor called" << std::endl;
}

void    FragTrap::attack(const std::string& target)
{
    if (this->EnergyPoint <= 0)
    {
        std::cout << this->Name << " can't attack, not enough energy point..." << std::endl;
        return ;
    }
    std::cout << "FragTrap " << this->Name << " attack " << target << ", causing " << this->Damage << " points of damage!" << std::endl;
    this->EnergyPoint--;
}

void    FragTrap::takeDamage(unsigned int damage)
{
    if (this->HitPoint <= 0)
    {
        std::cout << "FragTrap " << this->Name << " is already dead ..." << std::endl;
        return ;
    }
    this->HitPoint -= damage;
    if (this->HitPoint < 0)
        this->HitPoint = 0;
    std::cout << "FragTrap " << this->Name << " has taken " << damage << " points of damage" << "--- HitPoint : " << this->HitPoint << std::endl;
}

void    FragTrap::beRepaired(unsigned int amount)
{
    if (this->EnergyPoint <= 0)
    {
        std::cout << this->Name << " can't repair, not enough energy point..." << std::endl;
        return ;
    }
    this->HitPoint += amount;
    this->EnergyPoint--;
    std::cout << "FragTrap " << this->Name << " is repaired of " << amount << " points" << "--- HitPoint : " << this->HitPoint << std::endl;
}

void FragTrap::highFiveGuys(void)
{
    std::cout << "FragTrap " << this->Name << " is asking for high fives!" << std::endl;
}
