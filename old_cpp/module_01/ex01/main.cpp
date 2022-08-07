#include "Zombie.hpp"

int	main()
{
	Zombie *theHorde;
	
	theHorde = zombieHorde(6, "John");
	for(unsigned int i = 0; i < 6; ++i)
	{
		std::cout << "zombie " << i + 1 << ": ";
		theHorde[i].announce();
	}
	delete[] theHorde;
	return 0;
}