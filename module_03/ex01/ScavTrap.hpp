#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
    public: 
    void    guardGate();
    ScavTrap(std::string str);
    ~ScavTrap();
};

#endif