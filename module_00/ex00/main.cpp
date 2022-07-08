#include "megaphone.hpp"

int	main(int argc, char **argv)
{
	(void)argc;

	if (argc == 1)
	{
		ShoutOut megaphone("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
		megaphone.ShoutingOut();
	}
	else
	{
		for(int i = 1; i < argc; i++)
		{
			ShoutOut megaphone(argv[i]);
			megaphone.ShoutingOut();
		}
	}
	return (0);
}