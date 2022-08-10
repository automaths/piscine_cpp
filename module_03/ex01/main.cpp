#include "ScavTrap.hpp"

int main()
{
    ScavTrap Scavameche("Scavameche");

    Scavameche.attack("Tortank");
    Scavameche.takeDamage(3);
    Scavameche.beRepaired(4);
    Scavameche.takeDamage(10);
    Scavameche.guardGate();
    Scavameche.beRepaired(1);
    Scavameche.attack("Tortank");
    Scavameche.takeDamage(93);
    Scavameche.takeDamage(3);
    return 0;
}