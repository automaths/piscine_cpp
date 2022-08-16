#include "easyfind.hpp"

int main()
{
	try
	{
		std::vector<int> vect1(4);
		vect1[0] = 1;
		vect1[1] = 2;
		vect1[2] = 3;
		vect1[3] = 4;
		std::cout << "\nContainer composed of values: " << vect1[0] << ", " << vect1[1] << ", " << vect1[2] << ", " << vect1[3] << std::endl;
		std::vector<int>::iterator tmp;
		std::cout << "Searching for the value 3 with easyfind" << std::endl;
		tmp = easyfind(vect1, 3);
		std::cout << "The value has been found : it is " << *tmp << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "An exception has been caught: " << e.what() << std::endl;
	}
	try
	{
		std::vector<int> vect1(4);
		vect1[0] = 1;
		vect1[1] = 2;
		vect1[2] = 3;
		vect1[3] = 4;
		std::cout << "\nContainer composed of values: " << vect1[0] << ", " << vect1[1] << ", " << vect1[2] << ", " << vect1[3] << std::endl;
		std::vector<int>::iterator tmp;
		std::cout << "Searching for the value 5 with easyfind" << std::endl;
		tmp = easyfind(vect1, 5);
		std::cout << *tmp << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "An exception has been caught: " << e.what() << std::endl;
	}
}