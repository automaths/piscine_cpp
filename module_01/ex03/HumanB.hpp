#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
    Weapon *equip;
    std::string name;
    public:
    HumanB(std::string name);
    ~HumanB();
    void setWeapon(Weapon &content);
    Weapon *getWeapon();
    std::string getName() const;
    void attack();
};

#endif