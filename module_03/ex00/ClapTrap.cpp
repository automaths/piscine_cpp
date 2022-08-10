#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->Name = "Random";
    this->HitPoint = 1;
    this->EnergyPoint = 1;
    this->Damage = 0;
    std::cout << "The ClapTrap " << this->Name << " default constructor is called" << std::endl;

}

ClapTrap::ClapTrap(std::string str)
{
    this->Name = str;
    this->HitPoint = 10;
    this->EnergyPoint = 10;
    this->Damage = 0;
    std::cout << "The ClapTrap " << this->Name << " string constructor is called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "The ClapTrap " << this->Name << " destructor is called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &c)
{
    if (this != &c)
    {
        this->Name = c.getName();
        this->HitPoint = c.getHitPoint();
        this->EnergyPoint = c.getEnergyPoint();
        this->Damage = c.getDamage();
    }
    std::cout << "The ClapTrap " << this->Name << " copy assignement operator is called" << std::endl;
    return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
    this->Name = c.getName();
    this->HitPoint = c.getHitPoint();
    this->EnergyPoint = c.getEnergyPoint();
    this->Damage = c.getDamage();
    std::cout << "The ClapTrap " << this->Name << " Copy constructor called" << std::endl;
}


std::string ClapTrap::getName() const
{
    return (this->Name);
}

int ClapTrap::getHitPoint() const
{
    return (this->HitPoint);
}

int ClapTrap::getEnergyPoint() const
{
    return (this->EnergyPoint);
}

int ClapTrap::getDamage() const
{
    return (this->Damage);
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->EnergyPoint <= 0)
    {
        std::cout << this->Name << " can't attack, not enough energy point..." << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->Name << " attack " << target << ", causing " << this->Damage << " points of damage!" << std::endl;
    this->EnergyPoint--;
}

void    ClapTrap::takeDamage(unsigned int damage)
{
    if (this->HitPoint <= 0)
    {
        std::cout << this->Name << " is already dead ..." << std::endl;
        return ;
    }
    this->HitPoint -= damage;
    if (this->HitPoint < 0)
        this->HitPoint = 0;
    std::cout << "ClapTrap " << this->Name << " has taken " << damage << " points of damage" << "--- HitPoint : " << this->HitPoint << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->EnergyPoint <= 0)
    {
        std::cout << this->Name << " can't repair, not enough energy point..." << std::endl;
        return ;
    }
    this->HitPoint += amount;
    this->EnergyPoint--;
    std::cout << "ClapTrap " << this->Name << " is repaired of " << amount << " points" << "--- HitPoint : " << this->HitPoint << std::endl;
}