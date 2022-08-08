#include "Zombie.hpp"

int	main()
{
	Zombie jack("jack");
	jack.announce();
	
	Zombie *john;
	john = newZombie("john");
	john->announce();

	randomChump("randomzer");

	delete john;
	return 0;
}