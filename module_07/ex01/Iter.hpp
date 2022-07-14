#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template <typename A>
void    iter(A address[], int size, void(*ptr)(A&))
{
    for (int i = 0; i < size; ++i)
        ptr(address[i]);
}

#endif