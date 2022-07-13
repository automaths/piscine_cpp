#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>

template<class T>
void swap(T a, T b)
{
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template<class T>
T min(T a, T b)
{
    if (b > a)
        return (a);
    else
        return (b);
}

template<class T>
T max(T a, T b)
{
    if (a > b)
        return (a);
    else
        return (b);
}

#endif