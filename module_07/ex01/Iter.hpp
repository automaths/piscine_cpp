#pragma once

#include <iostream>
#include <string>

template <typename A>
void    iter(A address[], int size, void(*ptr)(const A&))
{
    for (int i = 0; i < size; ++i)
        ptr(address[i]);
}

template <typename T>
void    display(T const &a)
{
    std::cout << "displaying " << a << std::endl;
}
