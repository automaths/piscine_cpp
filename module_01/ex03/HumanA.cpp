#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &content) : equip(content), name(name)
{
    std::cout << this->name << ": HumanA constructor called" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << this->name << ": HumanA destructor called" << std::endl;
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
    std::cout << this->name << " attacks with their " << this->equip.getType() << std::endl;
}
