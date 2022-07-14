#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>

template <class T>
class Array {
    T element[];
    public:
    Array();
    Array(const Array &copie);
    ~Array();
    void operator=(const Array &copie);
    int size(T element[]);
};

template <class T>
Array<T>:: Array()
{
    std::cout << "no arg array" << std::endl;
}

template <class T>
Array<T>::Array(const Array &copie)
{
    element = copie.element;
}

template <class T>
Array<T>:: ~Array()
{
    ;
}

template <class T>
void Array<T>::operator=(const Array &copie)
{
    element = copie.element;
}

template <class T>
int Array<T>::size(T element[])
{
    int n = 0;
    for (int i = 0; element[i]; ++i)
        ++n;
    return n;
}

template <>
class Array <unsigned int>
{
    int *element;
    public:
    Array(int n);
    int size();
};

Array<unsigned int>:: Array(int n)
{
    std::cout << "unsigned arg array" << std::endl;
    this->element = new int[n];
    // for (int i = 0; i < n; ++i)
    //     this->element[i] = 0;
}

int Array<unsigned int>:: size()
{
    int n;
    n = sizeof(this->element) / sizeof(this->element[0]);
    // for (int i = 0; this->element[i]; ++i)
    //     ++n;
    return n;
}

#endif