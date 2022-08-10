#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
    public: 
    void    highFiveGuys();
    FragTrap(std::string str);
    ~FragTrap();
    FragTrap &operator=(const FragTrap &c);
};

#endif