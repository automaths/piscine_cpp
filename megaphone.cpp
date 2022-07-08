#include "megaphone.hpp"

void ShoutOut::ShoutingOut() {
	for (unsigned int i = 0; i < Shout.length(); i++)
		Shout[i] = toupper(Shout[i]);
	for (unsigned int i = 0; i < Shout.length(); i++)
		std::cout << Shout << " ";
}