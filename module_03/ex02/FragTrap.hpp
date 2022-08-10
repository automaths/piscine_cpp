#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
    public:
    
    FragTrap();
    FragTrap(std::string str);
    ~FragTrap();
    FragTrap(const FragTrap &c);
    FragTrap &operator=(const FragTrap &c);
    void attack(const std::string& target);
    void takeDamage(unsigned int damage);
    void beRepaired(unsigned int amout);
    void highFiveGuys(void);
};


#endif