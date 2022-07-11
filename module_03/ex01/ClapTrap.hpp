#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap{
    private:
    std::string Name;
    int HitPoint;
    int EnergyPoint;
    int Damage;
    public:
    ClapTrap(std::string str);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int damage);
    void beRepaired(unsigned int amout);
    friend class ScavTrap;
};

#endif