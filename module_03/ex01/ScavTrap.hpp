#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
    public:
    
    ScavTrap();
    ScavTrap(std::string str);
    ~ScavTrap();
    ScavTrap(const ScavTrap &c);
    ScavTrap &operator=(const ScavTrap &c);
    void attack(const std::string& target);
    void takeDamage(unsigned int damage);
    void beRepaired(unsigned int amout);
    void guardGate();
};


#endif