#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap Salameche("Salameche");

    Salameche.attack("Tortank");
    Salameche.takeDamage(60);
    Salameche.takeDamage(60);
    Salameche.beRepaired(4);
    Salameche.highFiveGuys();
    return 0;
}