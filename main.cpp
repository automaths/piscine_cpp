#include "megaphone.hpp"

int	main(int argc, char **argv)
{
	(void)argc;

	for(int i = 1; i < argc; i++)
	{
		ShoutOut megaphone(argv[i]);
		megaphone.ShoutingOut();	
	}
	return (0);
}