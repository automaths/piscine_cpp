#pragma once

#include <iostream>
#include <string>

template <class T>
class Array {
    public:
    Array();
    Array(unsigned int n);
    Array(const Array &copie);
    Array& operator=(const Array &copie);
    ~Array();

    unsigned int size() const;
    T* getArray() const;

    T& operator[](unsigned int n);
    T operator[](unsigned int n) const;

    class WrongAccess : public std::exception {virtual const char* what() const throw();};

    private:
    T *array;
    unsigned int length;
};

template <typename T>
Array<T>:: Array()
{
    std::cout << "Default Constructor called" << std::endl;
    this->length = 0;
}

template <typename T>
Array<T>:: Array(unsigned int n)
{
    std::cout << "Unsigned int Constructor called" << std::endl;
    this->length = n;
    this->array = new T[n];
    for (unsigned int i = 0; i < this->length; ++i)
        this->array[i] = 0;
}

template <typename T>
Array<T>::Array(const Array<T> &copie)
{
    std::cout << "Copy Constructor called" << std::endl;
    this->length = copie.size();
    this->array = new T[this->length];
    T* tmp = copie.getArray();
    for (unsigned int i = 0; i < this->length; ++i)
        this->array[i] = tmp[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T> &copie)
{
    std::cout << "Copy Assignment Operator called" << std::endl;
    if (this != &copie)
    {
        if (this->length > 0)
            delete[] this->array;
        this->length = copie.size();
        this->array = new T[this->length];
        T* tmp = copie.getArray();
        for (unsigned int i = 0; i < this->length; ++i)
            this->array[i] = tmp[i];
    }
    return (*this);
}

template <typename T>
Array<T>:: ~Array()
{
    std::cout << "Destructor called" << std::endl;
    if (this->length > 0)
        delete[] this->array;
}

template <typename T>
unsigned int Array<T>::size() const {return this->length;}

template <typename T>
T* Array<T>::getArray() const {return this->array;}

template <typename T>
T& Array<T>::operator[](unsigned int n)
{
    if (n >= this->length || n < 0)
        throw WrongAccess();
    return (*(array + n));
}

template <typename T>
T Array<T>::operator[](unsigned int n) const
{
    if (n >= this->length || n < 0)
        throw WrongAccess();
    return (*(array + n));
}

template<typename T>
const char* Array<T>::WrongAccess::what() const throw() {return ("Wrong Array Access");}
