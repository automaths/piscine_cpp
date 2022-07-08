#ifndef MEGAPHONE_HPP
# define MEGAPHONE_HPP

#include <iostream>
#include <string>
#include <algorithm>

class	ShoutOut{
	std::string Shout;
	public:
	ShoutOut(std::string str) {Shout = str;};
	void	ShoutingOut();
};

#endif