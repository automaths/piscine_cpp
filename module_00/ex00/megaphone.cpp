#include "megaphone.hpp"

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