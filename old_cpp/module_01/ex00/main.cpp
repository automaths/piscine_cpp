#include "Zombie.hpp"

int	main(void)
{
	std::string input;
	std::string random;

	while (1)
	{
		std::cout << "Give birth to a baby zombie ? Write her/his name (or \"exit\" to quit)" << std::endl;
		std::getline(std::cin, input);
		if (input.compare("exit") == 0)
			break;
		randomChump(input);
		std::cout << "Write to kill your baby, or wait to let him enjoy life a little more ... (or \"exit\" to quit):" << std::endl;
		std::getline(std::cin, random);
		if (input.compare("exit") == 0)
			break;
		std::cout << "The baby zombie named " << input << " was killed ..." << std::endl;
	}
	return 0;
}