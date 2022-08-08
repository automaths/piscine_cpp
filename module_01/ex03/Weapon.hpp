#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon{
    std::string type;
    public:
    Weapon();
    ~Weapon();
    Weapon(const Weapon &w);
    Weapon operator=(const Weapon &w);
    Weapon(std::string type);
    const std::string &getType() const;
    void setType(std::string newType);
};

#endif