#include "ScavTrap.hpp"

int main()
{
    ScavTrap Salameche("Salameche");
    

    Salameche.attack("Tortank");
    Salameche.takeDamage(60);
    Salameche.takeDamage(60);
    Salameche.beRepaired(4);
    Salameche.guardGate();
    return 0;
}