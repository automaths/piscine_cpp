#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : name(name)
{
    std::cout << this->name << ": HumanB constructor called" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << this->name << ": HumanB destructor called" << std::endl;
}

Weapon *HumanB::getWeapon()
{
    return (this->equip);
}

std::string HumanB::getName() const
{
    return (this->name);
}

void HumanB::setWeapon(Weapon &content)
{
    this->equip = &content;
}

void    HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->equip->getType() << std::endl;
}
