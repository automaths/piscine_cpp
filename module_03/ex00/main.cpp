#include "ClapTrap.hpp"

int main()
{
    ClapTrap Salameche("Salameche");
    Salameche.attack("Tortank");
    Salameche.takeDamage(3);
    Salameche.beRepaired(4);
    Salameche.takeDamage(10);
    Salameche.beRepaired(1);
    Salameche.beRepaired(1);
    Salameche.beRepaired(1);
    Salameche.beRepaired(1);
    Salameche.beRepaired(1);
    Salameche.beRepaired(1);
    Salameche.beRepaired(1);
    Salameche.beRepaired(1);
    Salameche.beRepaired(1);
    Salameche.attack("Tortank");
    Salameche.takeDamage(10);
    Salameche.takeDamage(3);
    return 0;
}