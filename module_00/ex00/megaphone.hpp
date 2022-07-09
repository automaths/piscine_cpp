#ifndef MEGAPHONE_HPP
# define MEGAPHONE_HPP

#include <iostream>
#include <string>
// #include <algorithm>

class	ShoutOut{
	std::string Shout;
	std::string trim(std::string);
	public:
	ShoutOut(std::string str) {Shout = ShoutOut::trim(str);};
	void	ShoutingOut();
};

#endif