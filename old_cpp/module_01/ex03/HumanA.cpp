#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &content) : name(name), equip(content)
{
    ;
}

HumanA::~HumanA()
{
    ;
}

HumanA::HumanA(const HumanA &h) : equip(h.getWeapon()), name(h.getName())
{
    ;
}

HumanA &HumanA::operator=(const HumanA &h)
{
    if (this != &h)
    {
        this->equip = h.getWeapon();
        this->name = h.getName();
    }
    return (*this);
}

Weapon &HumanA::getWeapon() const
{
    return (this->equip);
}

std::string HumanA::getName() const
{
    return (this->name);
}

void    HumanA::attack()
{
    std::cout << this->equip.getType() << std::endl;
}
