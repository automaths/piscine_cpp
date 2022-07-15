#include "Weapon.hpp"

Weapon::Weapon()
{
    this->type = "default";
}

Weapon::~Weapon()
{
    ;
}

Weapon::Weapon(const Weapon &w)
{
    this->type = w.getType();
}

Weapon Weapon::operator=(const Weapon &w)
{
    if (this != &w)
    {
        this->type = w.getType();
    }
    return (*this);
}

Weapon::Weapon(std::string type)
{
    this->type = type;
}

const std::string &Weapon::getType() const
{
    return (this->type);
}

void Weapon::setType(std::string newType)
{
    this->type = newType;
}
