#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class NotFound : public std::exception {virtual const char* what() const throw();};
const char* NotFound::what() const throw() {return ("Content not found");}

template <typename T>
typename T::iterator easyfind(T& cont, int n)
{
	typename T::iterator tmp;
	tmp = std::find(cont.begin(), cont.end(), n);
	if (*tmp != n || tmp == cont.end())
		throw NotFound();
	return (tmp);
}
