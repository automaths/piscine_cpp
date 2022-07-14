#include <iostream>
#include <string>

class	ShoutOut{
	std::string Shout;
	std::string trim(std::string);
	public:
	ShoutOut(std::string str) {Shout = ShoutOut::trim(str);};
	void	ShoutingOut();
};

std::string	ShoutOut::trim(std::string str)
{
    size_t first = str.find_first_not_of(' ');
    if (std::string::npos == first)
        return str;
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, (last - first + 1));
}

void ShoutOut::ShoutingOut() {
	for (unsigned int i = 0; i < Shout.length(); i++)
		Shout[i] = toupper(Shout[i]);
	std::cout << Shout << " ";
}

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