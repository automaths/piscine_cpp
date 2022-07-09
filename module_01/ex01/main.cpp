#include "Zombie.hpp"

int	main()
{
	Zombie *theHorde;
	
	theHorde = zombieHorde(6, "John");
	delete[] theHorde;
	return 0;
}