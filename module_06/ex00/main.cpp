#include "Conversion.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Please enter only one argument (litteral or char) to convert" << std::endl;
		return 0;
	}
	if (argv[1] == NULL)
	{
		std::cout << "Input needed" << std::endl;
		return 0;
	}
	Conversion Test(argv[1]);
	Test.converting();
}