#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : name(name)
{
    ;
}

HumanB::~HumanB()
{
    ;
}

HumanB::HumanB(const HumanB &h) : name(h.getName())
{
    ;
}

HumanB &HumanB::operator=(const HumanB &h)
{
    if (this != &h)
        this->name = h.getName();
    return (*this);
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
    std::cout << this->equip->getType() << std::endl;
}