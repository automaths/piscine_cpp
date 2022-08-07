#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap{
    std::string Name;
    int HitPoint;
    int EnergyPoint;
    int Damage;
    public:
    ClapTrap(std::string str);
    ~ClapTrap();
    ClapTrap(const ClapTrap &c);
    ClapTrap &operator=(const ClapTrap &c);
    std::string getName() const;
    int getHitPoint() const;
    int getEnergyPoint() const;
    int getDamage() const;
    void attack(const std::string& target);
    void takeDamage(unsigned int damage);
    void beRepaired(unsigned int amout);
    friend class ScavTrap;
};

#endif