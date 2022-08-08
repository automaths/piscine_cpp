#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
    Weapon &equip;
    std::string name;
    public:
    HumanA(std::string name, Weapon &content);
    ~HumanA();
    Weapon &getWeapon() const;
    std::string getName() const;
    void attack();
};

#endif