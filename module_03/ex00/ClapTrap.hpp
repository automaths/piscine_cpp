#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap{
    public:
    
    ClapTrap();
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

    private:

    std::string Name;
    int HitPoint;
    int EnergyPoint;
    int Damage;
};


#endif