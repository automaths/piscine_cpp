#include "ScavTrap.hpp"

int main()
{
    ScavTrap Salameche("Salameche");

    Salameche.attack("Tortank");
    Salameche.takeDamage(3);
    Salameche.beRepaired(4);
    return 0;
}