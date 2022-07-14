#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>
#include <exception>
#include <algorithm>
#include <vector>
#include <list>

class NotFound : public std::exception
{
    public :
    virtual const char* what() const throw()
    {
        return ("The content hasn't been found");
    }
};

template <typename T>
T easy_find (T cont, int to_find)
{
    T p;
    p = find_first_of(cont.begin(), cont.end(), to_find, to_find);
    return p;
    // throw (NotFound());
};

#endif